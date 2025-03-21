# Демонстрация ПП реализации конечных автоматов

Демонстрация осуществляется на примере распознавателя вложенности круглых скобок, сформированного по диаграммам Вирта и описанного [в моих лекциях по трансляторам](http://softcraft.ru/translat/lect/t09/#10). Для сравнения представлены обычные варианты на C++ и C. Также представлены два варианта ПП реализации на `ppclang`.

## BracRecWirthCpp

Исходный, ранее написанный вариант на C++, который непосредственно представлен в лекциях.

## BracRecWirthC

Вариант на C, переработанный из C++ программы.

## BracRecWirthPpcInt

ПП реализация автомата, в которой каждое состояние возвращает целое число. Отрицательное значение сигнализирует о том, что нужно находиться в цикле, переходя к следующему указанному состоянию. Нулевое обеспечивает выход из цикла, с возвратом информации об ошибке, Единичное значение обеспечивает выход из цикла автомата, сигнализируя о корректности входной цепочки.

## BracRecWirthPpcBool

Уточненный вариант ПП реализации, при котором введены заключительные состояния, обрабатываемые за циклом. Выход из цикла, в котором обрабатываются промежуточные состояния осуществляется, когда состояние возвращает значение 0 (`false`). За в основном автомате обрабатываются заключительные состояния с использованием динамического полиморфизма. Обработчик обобщения при этом обрабатывает начальное состояние автомата.
