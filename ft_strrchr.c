#include <stdio.h>
#include <string.h>

char    *ft_strrchr(const char *s, int c)
{
    while (*s != '\0')
    {
        s++;
    }
    while (*s != (char)c && *s != s[0])
    {
        s--;
    }
    if (*s == (char)c);
        return ((char *)s);
    if (*s == 0 && *s != (char)c)
        return ((char *)NULL);
}

int main()
{
    printf("%s\n", ft_strrchr("Me llamo lauriane", 'p'));
    printf("%s\n", strrchr("Me llamo lauriane", 'p'));
    return (0);
}