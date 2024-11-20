//------------------------------------------------------------------------------
// newfig.go - содержит описание дополнительной функции создания фигуры

package figure

import (
    "fmt"

    "go-evolution/rectangle"
    "go-evolution/triangle"
    "go-evolution/circle"
)

// Функция осуществляющая ввод создание фигуры с подключением ее к интерфейсу
func NewFigure(key int) Figure {
    var f Figure
    switch key {
        case 1: // Rectangle
            r := new(rectangle.Rectangle)
            f = r
            return f
        case 2: // Triangle
            t := new(triangle.Triangle)
            f = t
            return f
        case 3: // Circle
            c := new(circle.Circle)
            f = c
            return f
        default:
            panic(fmt.Sprintf("Incorrect figure key = %d", key))
    }
    return nil
}
