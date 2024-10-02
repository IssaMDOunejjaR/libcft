#include "ft_string.h"

char *ft_unsigned_num_to_str(unsigned long long number) {
  if (number == 0) {
    char *str = malloc(2);

    if (!str)
      return NULL;

    str[0] = '0';
    str[1] = '\0';

    return str;
  }

  size_t number_len = ft_unsigned_number_len(number);
  char *str = malloc(number_len + 1);

  if (!str)
    return NULL;

  int i = number_len;
  str[i--] = '\0';

  while (number > 0) {
    str[i--] = number % 10 + '0';
    number /= 10;
  }

  return str;
}
