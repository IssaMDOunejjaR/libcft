#include "ft_array.h"
#include <string.h>

void *ft_array_map(void *arr, unsigned long size, int length,
                   void *(*f)(void *)) {
  if (!arr || length <= 0 || !f)
    return arr;

  void *new_arr = malloc(size * length);

  if (!new_arr)
    return arr;

  for (int i = 0; i < length; i++) {
    void *value = f((char *)arr + (size * i));

    memcpy((char *)new_arr + (size * i), value, size);

    free(value);
  }

  return new_arr;
}
