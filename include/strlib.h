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
/// @note don't forget the null byte in the size of dest
void my_strcpy(char *dest, char *src);

/// @brief concatenate two strings together
/// @param dest the destination to concatenate the two strings
/// @param s1 the firs strings to be concateneted
/// @param s2 the second strings to be concatenated
void my_strcat(char *dest, char *s1, char *s2);

/// @brief cocatenate two strings but allocated it
/// @param s1 the first strings to concatenated
/// @param s2 the seconds strings to concatenated
/// @return returns a pointer to the strings allocated
char *my_strconcat(char *s1, char *s2);

/// @brief copy nbyte of a string in another string
/// @param dest the destination to copy
/// @param src the string to be copied
/// @param nbyte number of byte to copy
/// @note don't forget the null byte in the size of dest
void my_strncpy(char *dest, char *src, int nbyte);

/// @brief duplicate n byte of a string
/// @param str the string to duplicate
/// @param nbyte the number of byte to duplicate
/// @return returns a pointer to the strings duplicated
char *my_strndup(char *str, int nbyte);

/// @brief compare two strings and chek if there are the same
/// @param s1 the first string to compare
/// @param s2 the second string to compare
/// @return negative number if s1 < s2 and positive number in other case
/// @note if s1 == NULL, INT_MAX is returned and if s2 == NULL, -INT_MAX
/// is returned
int my_strcmp(char *s1, char *s2);

#endif /* !STRLIB_H_ */
