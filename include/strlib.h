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

/// @brief concatenate two strings together
/// @param dest the destination to concatenate the two strings
/// @param s1 the firs strings to be concateneted
/// @param s2 the second strings to be concatenated
void my_strcat(char *dest, char *s1, char *s2);

#endif /* !STRLIB_H_ */
