#include "main.h"

/**
 * _strcat- this func concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: (dest) when it is sucess
 */

char *_strcat(char *dest, char *src)
{
	int destlent = 0;
	int srclent = 0;
	int m = 0;

	for (m = 0; dest[m] != '\0'; m++)
		destlent++;
	for (m = 0; src[m] != '\0'; m++)
		srclent++;
	for (m = 0; m  <= srclent; m++)
		dest[destlent + m] = src[m];
	  return (dest);


}
