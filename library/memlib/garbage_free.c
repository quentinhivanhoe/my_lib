/*
** EPITECH PROJECT, 2024
** garbage free
** File description:
** stock all adrress of variable malloc and free them
*/
#include <stdlib.h>
#include "../../include/memlib.h"

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

void store_in_grabage(garbage_t **grb, void *data)
{
    garbage_t *new_grb = malloc(sizeof(garbage_t));

    new_grb->data = data;
    new_grb->next = (*grb);
    (*grb) = new_grb;
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

int garbage_handler(void *data, int act)
{
    static garbage_t *grb = NULL;

    if (ACT_ERROR(act) == -1)
        return -1;
    if (act == STORE && data != NULL)
        if (!is_stored(data, grb))
            store_in_grabage(&grb, data);
    if (act == DUMP && data == NULL)
            free_garbage(grb);
    return 0;
}
