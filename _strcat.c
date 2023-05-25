#include "main.h"

char *_strcat(char *dest, char *src)
{
	int n, j;

	for (n = 0; dest[n] != '\0'; n++) 
	{ }	
	
		
	for ( j = 0; src[j] != '\0'; j++, n++)
		dest[n] = src[j];
        
	dest[n] = '\0';
	return (dest);
}
