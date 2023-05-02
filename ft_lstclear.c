/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:41:15 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 11:18:12 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Removes and frees all elements from a linked list.
 * 
 * This function takes a pointer to a pointer to
 *  the first element of the linked list (lst)
 * and a function pointer (del) that is responsible for properly
 *  freeing the content of each
 * element. It iterates through the list, freeing the content of 
 * each element using the
 * provided function, and frees the list elements themselves. 
 * Finally, it sets the head of
 * the list to NULL, indicating an empty list.
 *
 * @param lst Pointer to a pointer to the first element 
 * of the linked list that should be cleared and freed.
 * @param del Function pointer that takes a void pointer 
 * as its argument and is responsible 
 * for properly freeing the content of each list element.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*next;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (tmp)
	{
		next = tmp -> next;
		del(tmp -> content);
		free(tmp);
		tmp = next;
	}
	*lst = NULL;
}
