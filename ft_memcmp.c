/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:03:54 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 11:52:31 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 19 Funcao

#include "libft.h"

/**
 * @brief Compares the first n bytes of the memory blocks pointed to
 *  by s1 and s2.
 * 
 * @param s1 Pointer to the first memory block to be compared.
 * @param s2 Pointer to the second memory block to be compared.
 * @param n Number of bytes to be compared.
 * @return int Returns 0 if the n bytes of the memory areas are equal.
 *             Returns a negative value if the first differing byte in
 *  s1 is less than the one in s2.
 *             Returns a positive value if the first differing byte in
 *  s1 is greater than the one in s2.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr_s1;
	const unsigned char	*ptr_s2;
	size_t				i;

	ptr_s1 = (const unsigned char *)s1;
	ptr_s2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr_s1[i] != ptr_s2[i])
			return (ptr_s1[i] - ptr_s2[i]);
		i++;
	}
	return (0);
}
