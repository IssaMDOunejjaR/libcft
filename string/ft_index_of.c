#include "ft_string.h"

int ft_index_of(const char *str, char c) {
  for (int i = 0; str[i] != '\0'; i++) {
    if (c == str[i])
      return i;
  }

  return -1;
}
