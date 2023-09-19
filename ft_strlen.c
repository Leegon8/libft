#include <string.h>
//#include "libft.h"

void    ft_strlen(int *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        str[i]++;
    }
}