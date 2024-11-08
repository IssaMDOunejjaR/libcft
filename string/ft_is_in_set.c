#include "ft_string.h"

int ft_is_in_set(char c, char *set) {
  for (int i = 0; set[i] != '\0'; i++) {
    if (c == set[i])
      return 1;
  }

  return 0;
}
