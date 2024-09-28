#ifndef FT_STRING_H
#define FT_STRING_H

#include "../int/ft_int.h"
#include <limits.h>
#include <stddef.h>
#include <stdlib.h>

size_t ft_strlen(const char *s);
char *ft_strcpy(char *dst, const char *src);
char *ft_strdup(const char *s);
char *ft_strchr(const char *s, int c);
char *ft_strcat(char *dst, const char *src);
int ft_strcmp(const char *s1, const char *s2);
int ft_strcmp_lowercase(const char *s1, const char *s2);
char ft_to_lower(char c);
char *ft_itoa(int number);
char *ft_substr(const char *str, size_t start, size_t end);
char *ft_strjoin(char *s1, char *s2);
char **ft_split(const char *str, char c);
int ft_index_of(const char *str, char c);
int ft_last_index_of(char *str, char c);
char *ft_trim(char const *str, char const *set);

#endif
