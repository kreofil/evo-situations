//==============================================================================
// rectangle.rs - содержит описание прямоугольника
//==============================================================================
//------------------------------------------------------------------------------
// прямоугольник
pub struct Rectangle {
  pub x: i32,  // ширина
  pub y: i32,  // высота
}

impl Rectangle {
  //------------------------------------------------------------------------------
  // Вывод параметров прямоугольника в форматируемый поток
  pub fn out(&self) {
    println!("It is Rectangle: x = {}, y = {}", self.x, self.y);
  }
}

// Вывод параметров прямоугольника в форматируемый поток
pub fn out(r: &Rectangle) {
  println!("It is Rectangle: x = {}, y = {}", r.x, r.y);
}