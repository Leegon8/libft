//#include "libft.h"
#include <ctype.h>

int ft_isdigit(int i)
{
    if (i >= '0' && i <= '9')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}