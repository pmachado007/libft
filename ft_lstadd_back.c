/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:59:24 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 10:25:50 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstadd_back - Adds an element to the end of a linked list.
 *
 * @lst: A double pointer to the head of the linked list.
 * @new: A pointer to the new element to be added to the list.
 *
 * This function adds the 'new' element to 
 * the end of the list pointed by 'lst'.
 * If the list is empty, the 'new' element becomes the head of the list.
 * If either 'lst' or 'new' is NULL, the function does nothing.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!(*lst))
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
