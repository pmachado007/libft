/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:09:56 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/26 10:10:00 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 10 Funcao

#include "libft.h"

/**
 * @brief Copies n bytes from the memory area pointed to by
 *  src to the memory area pointed to by dest,
 *  handling overlapping memory areas.
 *
 * This function copies n bytes from the memory area pointed 
 * to by src to the memory area pointed to by dest,
 * without overwriting the original memory area. 
 * This function is safer to use in situations where the source
 * and destination memory areas overlap.
 *
 * @param dest The pointer to the destination memory area.
 * @param src The pointer to the source memory area.
 * @param n The number of bytes to be copied.
 * @return Returns a pointer to the destination memory area.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*frase;
	unsigned char	*copia;
	int				i;
	int				num;

	if (!dest && !src)
		return (NULL);
	i = 0;
	num = (int) n;
	frase = (unsigned char *) src;
	copia = (unsigned char *) dest;
	if (dest > src)
	{
		i = (int) n;
		while (--i >= 0)
			copia[i] = frase[i];
		return ((void *) copia);
	}
	while (i < num)
	{
		copia[i] = frase[i];
		i++;
	}
	return ((void *) copia);
}
