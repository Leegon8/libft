#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	int	i;

	counter = 0;
	while (src[counter] != '\0')
	{
		counter++;
	}

	i = 0;
	return (dest);
}

int main()
{
	char src[10] = "function";
	char dest[5] = "test";

	printf("%s\n", ft_strlcpy(src, dest));
	//printf("%s\n", strcpy(src, dest));
}