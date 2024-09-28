#include "ft_string.h"
#include <stdio.h>

int ft_strcmp_lowercase(const char *s1, const char *s2) {
  int i = 0;

  printf("cmp\n");
  while (s1[i] != '\0') {
    char a = ft_to_lower(s1[i]);
    char b = ft_to_lower(s2[i]);

    if (a != b)
      return a - b;

    i++;
  }

  char a = s1[i];
  char b = ft_to_lower(s2[i]);

  if (a != b)
    return a - b;

  return 0;
}
