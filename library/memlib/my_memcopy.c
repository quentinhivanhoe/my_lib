/*
** EPITECH PROJECT, 2024
** personnal memcopy
** File description:
** copy a block of memory into a another
*/

void my_memcpy(void *dest, void *src, int nb)
{
    char *cdest = (char *)dest;
    char *csrc = (char *)src;

    for (int i = 0; i < nb; i++)
        cdest[i] = csrc[i];
    cdest[nb] = 0;
}
