#ifndef FT_LIST_h
#define FT_LIST_h

#include <stdlib.h>

typedef struct s_list {
  void *data;
  struct s_list *next;
} List;

List *ft_create_elem(void *data);
void ft_list_push_front(List **begin_list, void *data);
int ft_list_size(List *begin_list);
List *ft_list_last(List *begin_list);
void ft_list_push_back(List **begin_list, void *data);
List *ft_list_push_strs(int size, char **strs);
void ft_list_clear(List *begin_list, void (*free_fct)(void *));
void ft_list_print(List *begin_list, void (*print_fct)(void *));
List *ft_list_at(List *begin_list, unsigned int index);
void ft_list_reverse(List **begin_list);
void ft_list_foreach(List *begin_list, void (*f)(void *));
void ft_list_foreach_if(List *begin_list, void (*f)(void *), void *data_ref,
                        int (*cmp)(void *, void *));
List *ft_list_find(List *begin_list, void *data_ref,
                   int (*cmp)(void *, void *));
void ft_list_remove_if(List **begin_list, void *data_ref,
                       int (*cmp)(void *, void *), void (*free_fct)(void *));
void ft_list_merge(List **begin_list, List *begin_list2);
void ft_list_sort(List **begin_list, int (*cmp)(void *, void *));
void ft_list_reverse_fun(List *begin_list);
void ft_sorted_list_insert(List **begin_list, void *data,
                           int (*cmp)(void *, void *));
void ft_sorted_list_merge(List **begin_list1, List *begin_list2,
                          int (*cmp)(void *, void *));

#endif
