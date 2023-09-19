/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauriago <lauriago@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:01:46 by lauriago          #+#    #+#             */
/*   Updated: 2023/09/16 14:30:21 by lauriago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	buffer;

	buffer = 0;
	while (src[buffer])
	{
		buffer++;
	}
	i = 0;
	while (i < (size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (buffer);
}
/*
int	main()
{
	char	src[15] = "function test";
	char	dest[6] = "test";

	printf("%zu\n", ft_strlcpy(src, dest, 8));
	printf("%lu\n", strlcpy(src, dest, 8));
	return (0);
}*/
