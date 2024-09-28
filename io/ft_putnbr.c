#include "ft_io.h"

void ft_putnbr(int fd, int number) {
  if (number == INT_MIN) {
    write(fd, "-2147483648", 11);
    return;
  }

  if (number < 0) {
    ft_putchar(fd, '-');
    number = -number;
  }

  if (number > 9)
    ft_putnbr(fd, number / 10);

  ft_putchar(fd, number % 10 + '0');
}
