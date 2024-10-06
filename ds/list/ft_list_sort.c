#include "ft_list.h"

List *partition(List *head, List *tail, int (*cmp)(void *, void *)) {
  // Use the head node's data as the pivot value
  void *pivot_data = head->data;

  // 'pre' and 'curr' are used to rearrange elements
  List *pre = head;
  List *curr = head->next;

  // Traverse the list until we reach the node after the tail
  while (curr != tail->next) {

    // If the current node's data is smaller than the pivot
    if (cmp(curr->data, pivot_data) < 0) {
      // Move 'pre' to the next node
      pre = pre->next;

      // Swap the data between 'curr' and 'pre'
      void *temp = curr->data;
      curr->data = pre->data;
      pre->data = temp;
    }
    // Move 'curr' to the next node
    curr = curr->next;
  }

  // Swap the pivot node's data (head) with 'pre' data
  void *temp = head->data;
  head->data = pre->data;
  pre->data = temp;

  // Return 'pre' as the new pivot node
  return pre;
}

void quickSortHelper(List *head, List *tail, int (*cmp)(void *, void *)) {
  if (head == NULL || head == tail) {
    return;
  }

  List *pivot = partition(head, tail, cmp);

  // Recursively sort the left part
  if (pivot != head) {
    quickSortHelper(head, pivot, cmp);
  }

  // Recursively sort the right part
  if (pivot->next != tail->next) {
    quickSortHelper(pivot->next, tail, cmp);
  }
}

List *quickSort(List *head, int (*cmp)(void *, void *)) {
  // Find the tail node
  List *tail = ft_list_last(head);

  // Call the helper to sort the list
  quickSortHelper(head, tail, cmp);

  return head;
}

void ft_list_sort(List **begin_list, int (*cmp)(void *, void *)) {
  if (!begin_list || !*begin_list || !cmp)
    return;

  quickSort(*begin_list, cmp);
}

/* void ft_list_sort(List **begin_list, int (*cmp)(void *, void *)) { */
/*   if (!begin_list || !*begin_list || !cmp) */
/*     return; */
/**/
/*   int is_sorted = 0; */
/**/
/*   while (!is_sorted) { */
/*     List *list = *begin_list; */
/*     List *prev = NULL; */
/**/
/*     is_sorted = 1; */
/**/
/*     while (list != NULL) { */
/*       List *current = list; */
/*       List *next = current->next; */
/**/
/*       if (next && cmp(next->data, current->data) < 0) { */
/*         List *first = current; */
/*         List *second = next; */
/**/
/*         first->next = second->next; */
/*         second->next = first; */
/**/
/*         if (prev) */
/*           prev->next = second; */
/*         else */
/*           *begin_list = second; */
/**/
/*         prev = second; */
/*         list = second; */
/**/
/*         is_sorted = 0; */
/*       } else */
/*         prev = current; */
/**/
/*       list = list->next; */
/*     } */
/*   } */
/* } */
