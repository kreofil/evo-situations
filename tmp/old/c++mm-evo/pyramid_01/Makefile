CC = g++
OBJ_EXAMP  = IntClass.o DoubleClass.o minus.o main.o

all : examp

examp : $(OBJ_EXAMP)
	$(CC) -o examp $(OBJ_EXAMP)

IntClass.o : IntClass.h
	$(CC) -c IntClass.cpp -o IntClass.o

DoubleClass.o : IntClass.h DoubleClass.h
	$(CC) -c DoubleClass.cpp -o DoubleClass.o

minus.o : NumberClass.h
	$(CC) -c minus.cpp -o minus.o

main.o : IntClass.h DoubleClass.h
	$(CC) -c main.cpp -o main.o

clean :
	rm *.o
	rm examp