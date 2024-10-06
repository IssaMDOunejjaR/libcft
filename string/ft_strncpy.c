#include "ft_string.h"

char *ft_strncpy(char *dst, const char *restrict src, size_t dsize) {
  size_t i = 0;

  while (i < dsize && src[i] != '\0') {
    dst[i] = src[i];

    i++;
  }

  if (i < dsize)
    dst[i] = '\0';

  while (i < dsize) {
    dst[i++] = '\0';
  }

  return dst;
}
