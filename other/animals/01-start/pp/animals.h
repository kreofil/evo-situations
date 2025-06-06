#ifndef __animal__
#define __animal__

//==============================================================================
// animal.h - содержит описание всех животных и их обобщение в единую скотину.
// Можно сделать разбиение по файлам для эволюции, но и так понятно.
// Пример тривиальный.
//==============================================================================

//------------------------------------------------------------------------------
// Описание животных и их поведений. Тоже можно размазать по файлам...

// Это слон
typedef struct Elephant {} Elephant;
// Он может издавать звуки, что описано в реализации прототипа
void ElephantSpeaking(Elephant* e);
// Он топает при ходьбе, что описано в реализации этого прототипа
void ElephantMoving(Elephant* e);

// Это собака
typedef struct Dog {} Dog;
// Она может лаять, что описано в реализации прототипа
void DogSpeaking(Dog* d);
// Она бегает, что описано в реализации этого прототипа
void DogMoving(Dog* d);

// Это пингвин
typedef struct Penguin {} Penguin;
// Он может кричать, что описано в реализации прототипа
void PenguinSpeaking(Penguin* p);
// Предположим, мы не знаем как он ходит, но знаем, что он ходит.
// Поэтому оставляем в ходячих по умолчанию
// Зато он плавает и ныряет, а другие здесь просто лохи
void PenguinSwimming(Penguin* p);

// Это червяк
typedef struct Worm {} Worm;
// Он молчит. По крайней мере мы не знаем как он поет. Убираем голос
// Но мы знаем как он перемещается.
void WormMoving(Worm* w);

//------------------------------------------------------------------------------
// Для идентификации животных введем перечислимый тип
typedef enum Animal {
    elephant,
    dog,
    penguin,
    worm,
} Animal;

//------------------------------------------------------------------------------
// Структура, обобщающая можно описать до и после конкретных животных.
// Построена на объединение указателей
// Все, кто сверху - животные. Поэтому добавляем
// Почему через указатель? Потому что одно животное-экземпляр можно добавить
// к разным обобщениям
typedef struct AnyAnimal {
    Animal animal;      // Признак животного
    union {
        Elephant *elephant;
        Dog      *dog;
        Penguin  *penguin;
        Worm     *worm;
    };
} AnyAnimal;

// Все животные могут иметь общие признаки, но с разными способами реализации
// Например, перемещаться. Даже если мы не знаем как. Обобщим перемещение.
void Moving(AnyAnimal* a);
// Если же какое-то поведение не соответствует всем животным, то это поведение
// не включаем в это обобщение для всех. Обработается по default

//------------------------------------------------------------------------------
// Но можно создать обобщение для ограниченной группы животных, например,
// только для плавающих.
// Пока только пингвин. Поэтому включаем в эту группу только его
typedef struct SwimmingAnimal {
    Animal animal;      // Признак животного
    union {
        Penguin  *penguin;
    };
} SwimmingAnimal;

// Для этой группы своя обобщающая функция
void Swimming(SwimmingAnimal* s);

//------------------------------------------------------------------------------
// И еще одна общая группа тех, кто что-то издает. Видимо, без червяка
// Пока здесь следующий состав
typedef struct SpeakingAnimal {
    Animal animal;      // Признак животного
    union {
        Elephant *elephant;
        Dog      *dog;
        Penguin  *penguin;
    };
} SpeakingAnimal;

// Для этой группы своя обобщающая функция
void Speaking(SpeakingAnimal* s);

#endif // __animal__
