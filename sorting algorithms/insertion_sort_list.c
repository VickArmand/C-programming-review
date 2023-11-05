#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: double pointer to head of linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
        listint_t *temp, *temp_prev, *temp_next, *key;
        int size = 0, i;

        if (*list == NULL)
                return;
        temp = *list;
        while (temp != NULL)
        {
                temp = temp->next;
                size++;
        }
        temp = *list;
        for (i = 0; i < size; i++)
        {
                while (temp != NULL)
                {
                        key = temp->next;
                        if (temp->n < key->n)
                        {
                                temp_prev = temp->prev;
                                temp_next = key->next;
                                temp_prev->next = key;
                                key->prev = temp_prev;
                                key->next = temp;
                                temp->prev = key;
                                temp->next = temp_next;
                                print_list(*list);
                        }
                        temp = temp->next;
                }
        }
}