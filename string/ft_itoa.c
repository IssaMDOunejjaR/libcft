#include "ft_string.h"

char *ft_itoa(int number) {
  if (number == 0) {
    char *str = malloc(2);

    if (!str)
      return NULL;

    str[0] = '0';
    str[1] = '\0';

    return str;
  }

  if (number == INT_MIN) {
    char *str = malloc(12);

    if (!str)
      return NULL;

    return ft_strcpy(str, "-2147483648");
  }

  size_t number_len = ft_int_len(number);
  char *str = malloc(number_len + 1);

  if (!str)
    return NULL;

  int i = number_len;
  str[i--] = '\0';

  if (number < 0) {
    str[0] = '-';
    number = -number;
  }

  while (number > 0) {
    str[i--] = number % 10 + '0';
    number /= 10;
  }

  return str;
}
