#ifndef FT_IO_H
#define FT_IO_H

#include "../string/ft_string.h"
#include <unistd.h>

void ft_putchar(int fd, int c);
void ft_putstr(int fd, char *str);
void ft_putendl(int fd, char *str);
void ft_putnbr(int fd, int number);

#endif
