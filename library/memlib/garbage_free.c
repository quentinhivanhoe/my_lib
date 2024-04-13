/*
** EPITECH PROJECT, 2024
** garbage free
** File description:
** stock all adrress of variable malloc and free them
*/
#include <stdlib.h>
#include "memlib.h"
#include <stdio.h>

bool is_stored(void *data, garbage_t *grb)
{
    void *save_ptr = grb;

    while (grb != NULL) {
        if (grb->data == data) {
            grb = save_ptr;
            return true;
        }
        grb = grb->next;
    }
    grb = save_ptr;
    return false;
}

void print_garbage(garbage_t *grb)
{
    garbage_t *save_grb = grb;
    unsigned int len = 0;

    while (grb != NULL) {
        len = my_memlen(grb->data);
        printf("Block allocated at: %p\n", grb->data);
        printf("Block lenght: %d\n", len);
        printf("Block size: %ld\n", sizeof(grb->data));
        grb = grb->next;
    }
    grb = save_grb;
    return;
}

void store_in_grabage(garbage_t **grb, void *data)
{
    garbage_t *new_grb = malloc(sizeof(garbage_t));

    new_grb->data = data;
    new_grb->next = (*grb);
    (*grb) = new_grb;
}

void del_in_garbage(garbage_t **grb, void *data)
{
    garbage_t *start = (*grb);
    garbage_t *del_grb = NULL;

    while ((*grb) != NULL) {
        if ((*grb)->next->data == data) {
            del_grb = (*grb)->next;
            (*grb)->next = (*grb)->next->next;
            free(del_grb->data);
            free(del_grb);
            break;
        }
        (*grb) = (*grb)->next;
    }
    (*grb) = start;
    return;
}

void free_garbage(garbage_t *grb)
{
    void *saveptr = NULL;

    while (grb != NULL) {
        saveptr = grb;
        free(grb->data);
        grb = grb->next;
        free(saveptr);
    }
}

int mem_handler(void *data, int act)
{
    static garbage_t *grb = NULL;

    if (ACT_ERROR(act) == -1)
        return -1;
    if (act == PRINT && data == NULL)
        print_garbage(grb);
    if (act == FREE && data != NULL)
        if (is_stored(data, grb))
            del_in_garbage(&grb, data);
    if (act == IS_STORED && data != NULL)
        if (is_stored(data, grb))
            return 1;
    if (act == STORE && data != NULL)
        if (!is_stored(data, grb))
            store_in_grabage(&grb, data);
    if (act == DUMP && data == NULL)
            free_garbage(grb);
    return 0;
}
