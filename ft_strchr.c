/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:00:22 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 12:08:55 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 15 Funcao

#include "libft.h"
#include <stdio.h>

/**
 * @brief Returns a pointer to the first occurrence of
 *  the character c in the string s.
 *
 * This function searches the string s for the character c.
 *  If c is found, it returns a pointer to the first occurrence 
 * of c in s.
 * If c is not found, it returns a NULL pointer.
 *
 * @param s The string to search for the character c.
 * @param c The character to search for in the string s.
 * @return Returns a pointer to the first occurrence of
 *  the character c in the string s.
 *         If c is not found, returns a NULL pointer.
 */
char	*ft_strchr(const char *s, int c)
{
	const char	*p;

	p = s;
	while (*p != '\0')
	{
		if (*p == (char)c)
		{
			return ((char *)p);
		}
		p++;
	}
	if (c == '\0')
		return ((char *)p);
	return (NULL);
}
