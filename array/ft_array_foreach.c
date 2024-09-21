#include "ft_array.h"

void ft_array_foreach(void *arr, unsigned long size, int length,
                      void (*f)(void *)) {
  if (!arr || length <= 0 || !f)
    return;

  for (int i = 0; i < length; i++)
    f((char *)arr + (i * size));
}
