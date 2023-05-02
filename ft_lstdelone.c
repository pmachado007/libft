/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:23:42 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 11:20:47 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Removes and frees a single element from a linked list.
 * 
 * This function takes a pointer to a t_list element (lst) 
 * and a function pointer (del) that
 * is responsible for properly freeing the content of the element.
 *  It then frees the content
 * of the element using the provided function and
 *  frees the list element itself.
 *
 * @param lst Pointer to the t_list element that 
 * should be removed and freed.
 * @param del Function pointer that takes a void pointer
 *  as its argument and is responsible
 *  for properly freeing the content of the list element.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst -> content);
	free(lst);
}
