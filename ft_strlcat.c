/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:51:33 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 12:25:46 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 12 Funcao

#include "libft.h"

/**
 * @brief Concatenates a null-terminated string from 
 * the src buffer to the end of the null-terminated string in 
 * the dst buffer, up to a maximum size of size.
 *
 * This function concatenates a null-terminated string from
 * the src buffer to the end of the null-terminated string in
 * the dst buffer,
 * up to a maximum size of size.
 *  It returns the total length of the concatenated strings.
 *
 * @param dst The destination buffer for the string concatenation.
 * @param src The source buffer for the string to be concatenated.
 * @param size The maximum number of bytes to be used in the destination buffer.
 * @return Returns the total length of the concatenated strings.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst < size - 1 && size)
	{
		while (len_dst + i < size - 1 && src[i])
		{
			dst[len_dst + i] = src[i];
			i++;
		}
		dst[len_dst + i] = '\0';
	}
	if (len_dst >= size)
		len_dst = size;
	return (len_dst + len_src);
}
