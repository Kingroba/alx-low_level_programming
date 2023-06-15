#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A double pointer to the head of the list.
 * @n: The value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL) {
        return NULL;
    }

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL) {
        new_node->prev = NULL;
        *head = new_node;
    } else {
        dlistint_t *temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        new_node->prev = temp;
        temp->next = new_node;
    }

    return new_node;
}

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: A pointer to the head of the list.
 *
 * Description:
 * This function frees the memory allocated for each node in a doubly linked list.
 * It starts from the head of the list and iteratively frees each node, updating the
 * next and previous pointers as it progresses. After freeing all nodes, the head
 * pointer is set to NULL.
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *current = head;
    dlistint_t *next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    head = NULL;
}

/* Additional functions and code... */

