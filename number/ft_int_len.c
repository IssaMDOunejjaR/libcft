#include "ft_number.h"

size_t ft_int_len(int number) {
  size_t len = 0;

  if (number <= 0)
    len++;

  while (number > 0) {
    len++;
    number /= 10;
  }

  return len;
}
