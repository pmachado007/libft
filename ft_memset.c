/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:32:34 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 11:56:38 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 7 Funcao

#include "libft.h"

/**
 * @brief Fills a block of memory with a specified value.
 * 
 * @param s Pointer to the block of memory to be filled.
 * @param c The value (as an integer) to be set. 
 * The value is passed as int, but
 * the function fills the block of memory using the unsigned char
 * conversion of this value.
 * @param n The number of bytes to be set to the value.
 * 
 * @return A pointer to the block of memory that was filled. 
 * If the input pointer is NULL or the size is 0,
 *  the function returns the input pointer unchanged.
 */
void	*ft_memset(void *s, int c, size_t n)
{	
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
