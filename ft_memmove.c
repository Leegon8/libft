#include <string.h>
//#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	//no entiendo nad
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
