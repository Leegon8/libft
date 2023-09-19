#include <string.h>
#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
	void	*str_ptr;

	str_ptr = s;
	while (n--)
		*(unsigned char *)s++ = (unsigned char)c;
	return (str_ptr);
}
/*
int main() {

    printf("%p", ft_memset("hola", 1, 2)); // El printf se una el %p porque devuelve un valor de int
    printf("%p", ft_memset("hola", 1, 2));
    return (0);
}*/