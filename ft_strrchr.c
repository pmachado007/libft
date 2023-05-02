/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:21:50 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 12:46:58 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 16 Funcao

#include "libft.h"

/**
 * @brief Returns a pointer to the last occurrence of the 
 * character c in the string s.
 *
 * This function searches the string s for the character c, 
 * starting from the end of the string and working backwards.
 * If c is found, it returns a pointer to the last occurrence of
 *  c in s.
 * If c is not found, it returns a NULL pointer.
 *
 * @param s The string to search for the character c.
 * @param c The character to search for in the string s.
 * @return Returns a pointer to the last occurrence of the 
 * character c in the string s.
 *         If c is not found, returns a NULL pointer.
 */
char	*ft_strrchr(const char *s, int c)
{
	const char	*p;

	p = s + ft_strlen(s);
	while (p >= s)
	{
		if (*p == (char)c)
			return ((char *)p);
		p--;
	}
	return (NULL);
}
