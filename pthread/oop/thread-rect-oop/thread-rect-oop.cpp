// clang++ -pthread thread-rect-oop.cpp
#include <cstdlib>
#include <iostream>
#include <memory>
#include <unistd.h>
#include <pthread.h>

class Thread {
public:
    virtual ~Thread () {}
    virtual void run () = 0;
    int start () {
        return pthread_create( &_ThreadId, nullptr, Thread::thread_func, this );
    }
    int wait () {
        return pthread_join( _ThreadId, nullptr );
    }
protected:
    pthread_t _ThreadId;
    //Thread(const Thread&);
    static void* thread_func(void* d) {
        (static_cast <Thread*>(d))->run();
        return nullptr;
    }
};

class ThreadRect : public Thread {
public:
    ThreadRect (int xx, int yy): x{xx}, y{yy} {}
    virtual void run () {
        p = double(2*(x+y));
    }
    void print(const char* str) {
        std::cout << "Perimeter of "
                  << str << " = " << p << "\n";
    }

protected:
    int x;
    int y;
    double p;
};

int main (int argc, char *argv[], char *envp[]) {
    ThreadRect thread1{3, 5};
    ThreadRect thread2{13, 15};
    ThreadRect thread3{4, 10};

    thread1.start();
    thread2.start();
    thread3.start();

    thread1.wait();
    thread2.wait();
    thread3.wait();

    thread1.print("Tread1");
    thread2.print("Tread2");
    thread3.print("Tread3");

    return EXIT_SUCCESS;
}
