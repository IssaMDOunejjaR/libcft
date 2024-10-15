#include "ft_table.h"

void ft_table_clear(char **table) {
  if (table == NULL)
    return;

  for (int i = 0; table[i] != NULL; i++)
    free(table[i]);

  free(table);
}
