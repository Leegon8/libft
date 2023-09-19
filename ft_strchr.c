//#include "libft.h"
#include <string.h>
#include <stdio.h>

char    *ft_strchr(const char *s, int c)
{
    while (*s != '\0' && (*s != (char)c))
    {
        s++;
    }
    if (*s == (char)c)
        return ((char *) s);
    return ((char *) NULL);
}

int main()
{
    char str[] = "function test";
    printf("%s", ft_strchr(str, 'x'));
    printf("%s", strchr(str, 'x'));
    return (0);
}