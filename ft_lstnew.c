/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:10:27 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 11:37:38 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstnew - Creates a new t_list (s_list) element.
 *
 * @content: A void pointer to the content to be stored in
 *  the new element.
 *  This pointer can store the address of any data type.
 *
 * @return:   A pointer to the newly created t_list element
 *  on success, or NULL if memory allocation fails.
 *
 * This function creates a new singly linked list element of
 *  type t_list (struct s_list),
 * initializes its 'content' field with the provided content,
 *  sets the 'next' field to NULL,
 * and returns a pointer to the new element.
 *  If memory allocation fails, the function returns NULL.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*new_element;

	new_element = (t_list *)malloc(sizeof(t_list));
	if (!new_element)
		return (NULL);
	new_element -> content = content;
	new_element -> next = NULL;
	return (new_element);
}
