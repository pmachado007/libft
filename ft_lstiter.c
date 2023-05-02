/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:35:22 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 11:24:32 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterates over a linked list and applies a given function 
 * to the content of each element.
 * 
 * This function takes a pointer to the first element of
 *  the linked list (lst) and a function
 * pointer (f) that is responsible for performing a specific
 *  operation on the content of each
 * element. It iterates through the list, applying the provided
 *  function to the content of each element.
 *
 * @param lst Pointer to the first element of
 *  the linked list to be iterated over.
 * @param f Function pointer that takes a void pointer
 *  as its argument and is responsible for performing a
 *  specific operation on the content of each list element.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (!lst || !f)
		return ;
	current = lst;
	while (current)
	{
		f(current -> content);
		current = current -> next;
	}
}
