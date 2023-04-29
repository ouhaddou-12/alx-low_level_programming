#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 * 
 * Return: Always 0.
 */
int main(void)
{
    listint_t *a;
    listint_t *b;
    listint_t hello = {8, NULL};
    size_t n;

    a = &hello;
    b = malloc(sizeof(listint_t));
    if (b == NULL)
    {
        printf("Error\n");
        return (1);
    }
    b->n = 9;
    b->next = a;
    a = b;
    n = print_listint(a);
    printf("-> %lu elements\n", n);
    free(b);
    return (0);
}
