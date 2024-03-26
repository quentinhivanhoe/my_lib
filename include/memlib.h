/*
** EPITECH PROJECT, 2024
** garbage free
** File description:
** garbage free header
*/
#include <stdbool.h>

#ifndef GARBAGE_H_
    #define GARBAGE_H_

    // verify if the given actions is valid
    #define ACT_ERROR(act) ((act < 0) || (act > 1)) ? (-1) : (0)

    /// free all address stocked
    #define DUMP 0

    /// store the addr given
    #define STORE 1


typedef struct garbage_s {
    void *data;
    struct garbage_s *next;
} garbage_t;


/// @brief handle the garbage object
/// @param data the address of the block allocated
/// @param type the type of the block allocated
/// @param act action to do, free or store
/// @return -1 in error case, else 0 in success
int garbage_handler(void *data, int act);

/// @brief stock in the garbage object
/// @param grb the garbage object
/// @param type the type of the data
/// @param data the data to store
void store_in_grabage(garbage_t **grb, void *data);

/// @brief allocate a block of memory of size and stock it in the garbage
/// @param size the size of the block allocated
/// @param type the type of the size allocated
/// @return the address of the block allocated
void *my_malloc(unsigned int size);

void my_memcpy(void *dest, void *src, int nb);

#endif /* !GARBAGE_H_ */
