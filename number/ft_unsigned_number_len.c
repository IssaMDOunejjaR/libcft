#include "ft_number.h"

unsigned long long ft_unsigned_number_len(unsigned long long number) {
  unsigned long long len = 0;

  if (number <= 0)
    len++;

  while (number > 0) {
    len++;
    number /= 10;
  }

  return len;
}
