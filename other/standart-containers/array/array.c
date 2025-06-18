// array.c
#include "array.h"
#include <stdlib.h>

// Array initialisation
void InitArray(Array *array, size_t size) {
  array->len = size;
  // sixeof(void*) equals memory for Value*
  array->data = (Value **)malloc(size * sizeof(void *));
  if (array->data == NULL)
    return;
  for (int i = 0; i < size; ++i) {
    array->data[i] = NULL;
  }
}

// Check is array empty
_Bool ArrayEmpty(Array *array) { return array->len == 0; }

// Analog of array[index]
Value **ArrayAt(Array *array, int index) {
  if (index >= array->len)
    return NULL;
  return &array->data[index];
}

// Get first element
Value *ArrayFront(Array *array) {
  if (ArrayEmpty(array))
    return NULL;
  return array->data[0];
}

// Get last element
Value *ArrayBack(Array *array) {
  if (ArrayEmpty(array))
    return NULL;
  return array->data[array->len - 1];
}

// Get internal c-array
Value **ArrayData(Array *array) { return array->data; }

// Clear array
void ClearArray(Array *array) {
  for (int i = 0; i < array->len; ++i) {
    free(array->data[i]);
  }
  array->len = 0;
}

// Iterator to first element
Value **ArrayBegin(Array *array) {
  if (ArrayEmpty(array)) {
    return NULL;
  } else {
    return &(array->data[0]);
  }
}

// Iterator to next element
void ArrayIteratorNext(Value ***iter) { ++(*iter); }

// Iterator to end of array
Value **ArrayEnd(Array *array) {
  if (ArrayEmpty(array)) {
    return NULL;
  } else {
    return &(array->data[array->len - 1]) + 1;
  }
}
