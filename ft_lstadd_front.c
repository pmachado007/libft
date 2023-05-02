/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:52:49 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 11:13:07 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds a new element to the front (head) of a linked list.
 *
 * The ft_lstadd_front function inserts a new element at the beginning 
 * of a linked list.
 * It takes a pointer to the pointer of the head of the list (lst) 
 * and a pointer to the new element (new).
 * The function modifies the list by adding
 *  the new element to the front (head).
 *
 * @param lst A pointer to the pointer of the head of the linked list.
 * @param new A pointer to the new element to be added to the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
