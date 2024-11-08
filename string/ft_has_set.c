#include "ft_string.h"

char *ft_has_set(char *str, char *set) {
  for (int i = 0; str[i] != '\0'; i++) {
    if (ft_is_in_set(str[i], set))
      return &str[i];
  }

  return NULL;
}
