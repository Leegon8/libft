#include "libft.h"

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * /
	lst: la dirección de un puntero al primer nodo de
	una lista.
	new: un puntero al nodo que añadir al principio de
	la lista.

	Añade el nodo ’new’ al principio de la lista ’lst’.
/ * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
void ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*first;

	first = (t_list *)malloc(sizeof(t_list));
	if (!first)
		new -> NULL;
	new-> lst = (t_list *)lst;
}

#include <stdio.h>

int	main(void)
{
	char	*first = "
