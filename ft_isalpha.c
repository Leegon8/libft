/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauriago <lauriago@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 22:11:12 by lauriago          #+#    #+#             */
/*   Updated: 2023/09/16 14:38:23 by lauriago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	if (i >= 'A' && i <= 'Z')
		return (1);
	if (i >= 'a' && i <= 'z')
		return (1);
	else
		return (0);
}
//	return(si es a y menor que z o A y menor que Z)
