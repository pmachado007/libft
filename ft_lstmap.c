/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:46:46 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 11:31:33 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstmap - Applies a given function 'f' to each element of
 *  a linked list 'lst'
 * and creates a new linked list with the results.
 *  If an element allocation fails,
 * the 'del' function is used to free the memory allocated for 
 * the new list's elements.
 *
 * @lst: Pointer to the head of the source linked list.
 * @f: Pointer to the function to be applied to each element of 'lst'.
 * This function should have a signature: void *(*f)(void *).
 * @del: Pointer to the function to be used to free 
 * the memory allocated
 * for the new list's elements, in case of allocation failure.
 * This function should have a signature: void (*del)(void *).
 *
 * @return: Pointer to the head of the new linked list,
 *  or NULL if the function fails to allocate memory
 *  for a new element or if 'lst' or 'f' are NULL.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_element;
	t_list	*current;

	new_list = NULL;
	if (!lst || !f)
		return (NULL);
	current = lst;
	while (current)
	{
		new_element = ft_lstnew(f(current -> content));
		if (!new_element)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_element);
		current = current -> next;
	}
	return (new_list);
}
