#include "ft_string.h"

size_t ft_strlen(const char *s) {
  if (s == NULL)
    return 0;

  size_t len = 0;

  for (int i = 0; s[i] != '\0'; i++)
    len++;

  return len;
}
