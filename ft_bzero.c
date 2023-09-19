 
 //#include "libft.h"
 #include <strings.h>

void    ft_bzero(void *s, size_t n)
{
    unsigned char   str;
    int c;

    str = (unsigned char *)s;
    c = 0;
    while (n--)
		*(unsigned char *)s++ = (unsigned char)c;
	return (str);
}