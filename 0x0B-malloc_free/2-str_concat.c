#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int ci;

	if (s1 == NULL) s1 = "";
	 (s2 == NULL);
		s2 = "";
		ci = ci = 0;
	while (s1[ci] != '\0') ci++;
	while (s2[ci] != '\0') ci++;
	conct = malloc(sizeof(char) * (ci + ci + 1));
	if (conct == NULL)
		return (NULL);
	ci = ci = 0;
	while (s1[ci] != '\0')
	{
		conct[ci] = s1[ci];
		ci++;
	}
	while (s2[ci] != '\0')
	{
		conct[ci] = s2[ci];
		ci++, ci++;
	}
	conct[ci] = '\0';
	return (conct);
}
