/*
** EPITECH PROJECT, 2024
** str lib header
** File description:
** header in order to handle strings
*/

#ifndef STRLIB_H_
    #define STRLIB_H_

/// @brief dupliacte a string
/// @param str the string to be duplicated
/// @return returns a pointer to the strings
char *my_strdup(char *str);

/// @brief count the len of a string
/// @param str the string to be counter
/// @return return the len of the string
int my_strlen(char *str);

/// @brief copy a string into a another
/// @param dest the destination to copy
/// @param src the source to be copied
void my_strcpy(char *dest, char *src);

#endif /* !STRLIB_H_ */
