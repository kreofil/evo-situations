#ifndef __array__
#define __array__
// array.h

#include "../container/container.h"
#include "../value/value.h"
#include <stdio.h>

// Structure of Array.
typedef struct Array {
  int len;
  Value **data;
} Array;

// Initialisation
void InitArray(Array *array, size_t size);

// Check is array empty
_Bool ArrayEmpty(Array *array);

// Analog of array[index]
Value **ArrayAt(Array *array, int index);

// Get first element
Value *ArrayFront(Array *array);

// Get last element
Value *ArrayBack(Array *array);

// Get internal c-array
Value **ArrayData(Array *array);

// Clear array;
void ClearArray(Array *array);

// Iterator to first element
Value **ArrayBegin(Array *array);

// Iterator to next element
void ArrayIteratorNext(Value ***iter);

// Iterator to end of array
Value **ArrayEnd(Array *array);

#endif // __array__