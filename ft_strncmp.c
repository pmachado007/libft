/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:00:00 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 12:41:42 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 17 Funcao

#include "libft.h"

/**
 * Compare up to 'n' characters of two strings.
 *
 * @param s1 The first string to be compared.
 * @param s2 The second string to be compared.
 * @param n The maximum number of characters to compare.
 * @return An integer representing the difference between 
 * the characters of the two strings:
 *         0 if the strings are equal up to 'n' characters;
 *         negative value if the first string is lexicographically
 *  smaller;
 *         positive value if the first string is lexicographically
 *  larger.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n && *s1 && *s2)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	if (n > 0)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return (0);
}
