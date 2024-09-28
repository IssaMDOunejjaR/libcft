#include "ft_io.h"

void ft_putendl(int fd, char *str) {
  ft_putstr(fd, str);
  ft_putchar(fd, '\n');
}
