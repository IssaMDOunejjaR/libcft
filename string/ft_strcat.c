#include "ft_string.h"

char *ft_strcat(char *dst, const char *src) {
  size_t dst_len = ft_strlen(dst);

  ft_strcpy(dst + dst_len, src);

  return dst;
}
