/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:09:31 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/26 10:09:38 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 9 Funcao

#include "libft.h"

/**
 * @brief Copies n bytes from the memory area pointed to by src
 *  to the memory area pointed to by dest.
 *
 * This function copies n bytes from the memory area pointed to
 *  by src to the memory
 * area pointed to by dest. Both memory areas should not overlap.
 *
 * @param dest The pointer to the destination memory area.
 * @param src The pointer to the source memory area.
 * @param n The number of bytes to be copied.
 * @return Returns a pointer to the destination memory area.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*frase;
	unsigned char	*copia;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	frase = (unsigned char *)src;
	copia = (unsigned char *)dest;
	while (i < n)
	{
		copia[i] = frase[i];
		i++;
	}
	return ((void *)copia);
}
