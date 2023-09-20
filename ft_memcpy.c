//#include "libft.h"
#include <string.h>

void	*memcpy(void *dest, const void *src, size_t n)
{
	char *dest_ptr = (char *)dest;
	char *src_ptr = (char *)src;
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}
