#include "ft_string.h"

char ft_to_lower(char c) {
  if (c >= 'A' && c <= 'Z')
    return c + 32;

  return c;
}
