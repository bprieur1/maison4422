#include <stdio.h>

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	char	*dest_start;

		*dest_start = dest;

	while(*dest != '\0')
        dest++;

	while(*src != '\0' && nb > 0)
    {
	    *dest = *src;
	    dest++;
	    src++;
	    nb--;
    }
    
    *dest = '\0';
	
	return (dest_start);
}
