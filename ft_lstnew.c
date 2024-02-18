/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauriago <lauriago@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:35:59 by lauriago          #+#    #+#             */
/*   Updated: 2024/02/18 14:03:28 by lauriago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* * * * * * * * * * * * * * * * * * * * * * * * * * /
	Crea un nuevo nodo utilizando malloc(3). La
	variable miembro ’content’ se inicializa con el
	contenido del parámetro ’content’. La variable
	’next’, con NULL.
/ * * * * * * * * * * * * * * * * * * * * * * * * * */

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = (void *)content;
	return (new);
}
/*
#include <stdio.h>

int main(void)
{
    char *content = "Hola, mundo!";
    t_list *new_node = ft_lstnew(content);
	printf("Contenido del nodo: %s\n", (char *)new_node->content);
    free(new_node);

    return 0;
}
*/
