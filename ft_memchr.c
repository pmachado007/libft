/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:31:02 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 11:48:25 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 18 Funcao

#include "libft.h"

/**
 * @brief Locates the first occurrence of character `c`
 * (converted to an unsigned char) in the first `n` bytes 
 * of the memory block pointed to by `s`.
 *
 * @param s Constant pointer to the memory block 
 * where the search will be performed.
 * @param c Character to search for, represented as an integer.
 * @param n The number of bytes to search in the memory block.
 *
 * @return Returns a pointer to the first occurrence 
 * of character `c` in the memory block. 
 * If the character is not found within the first `n` bytes,
 *  returns NULL.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	chr;

	ptr = (unsigned char *)s;
	chr = (unsigned char)c;
	while (n--)
	{
		if (*ptr == chr)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}

/* E uma boa pratica recomendada em C usar NULL para indicar 
ponteiros nulos ou "sem resultados" em vez de usar 0 diretamente.
 Isso torna o código mais claro e menos propenso a erros. */