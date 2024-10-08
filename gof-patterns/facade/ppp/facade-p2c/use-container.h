#ifndef __use_container__
#define __use_container__

//==============================================================================
// use-container.h - интерфейс, используемый для усеченной работы с контейнером.
// По сути имитирует простейший вариант фасада в процедурной версии.
// Передается клиенту, скрывая всю остальную реализацию.
//==============================================================================


//------------------------------------------------------------------------------
// Структурная ссылка на простейший контейнер неизвестной природы...
struct FigureContainer;

//------------------------------------------------------------------------------
// Заполнение контейнера из файла с заданным именем
struct FigureContainer *FigureContainerInFromFile(char* fileName);
// Вывод содержимого контейнера в указанный файл
void FigureContainerOutToFile(struct FigureContainer *c, char* fileName);
// Очистка и удаление использованного контейнера
void FigureContainerDelete(struct FigureContainer* c);

#endif // __use_container__