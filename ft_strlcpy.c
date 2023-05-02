/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:44:38 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 12:28:39 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 11 Funcao 

#include "libft.h"

/**
 * @brief Copies a null-terminated string from the src buffer to
 * the dst buffer, up to a maximum size of size.
 *
 * This function copies a null-terminated string from 
 * the src buffer to the dst buffer, up to a maximum size of size.
 * It returns the length of the string it tried to create,
 *  which is the same as the length of the source string.
 *
 * @param dst The destination buffer for the string copy.
 * @param src The source buffer for the string to be copied.
 * @param size The maximum number of bytes to be copied to
 *  the destination buffer.
 * @return Returns the length of the source string.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
