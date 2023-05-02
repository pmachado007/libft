/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 09:11:30 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 08:38:37 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 8 Funcao

#include "libft.h"

/**
 * @brief Sets the first n bytes of the memory area pointed
 *  to by s to zero (0) and returns the pointer.
 *
 * This function checks for edge cases where s is NULL
 *  or n is 0 and returns the pointer s if any
 * of these conditions are met. Otherwise,
 *  it uses the ft_memset function to set the memory
 * area to zero and then returns the pointer s.
 *
 * @param s The pointer to the memory area to be zeroed.
 * @param n The number of bytes to be set to zero.
 * @return Returns the pointer to the memory area
 *  after setting the first n bytes to zero.
 */
void	*ft_bzero(void *s, size_t n)
{
	if (s == NULL || n == 0)
		return (s);
	ft_memset(s, 0, n);
	return (s);
}
