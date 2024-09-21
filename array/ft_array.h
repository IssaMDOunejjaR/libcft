#ifndef FT_ARRAY_H
#define FT_ARRAY_H

#include <stddef.h>
#include <stdlib.h>

void ft_array_foreach(void *arr, unsigned long size, int length,
                      void (*f)(void *));
void *ft_array_map(void *arr, unsigned long size, int length,
                   void *(*f)(void *));

#endif
