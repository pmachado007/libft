/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:21:21 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 12:23:43 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Funcao 25

/**
 * ft_strjoin - Concatenates two strings into a new string.
 *
 * @s1: The first input string.
 * @s2: The second input string.
 *
 * This function allocates memory for a new string 
 * that is the concatenation of
 * @s1 and @s2, and returns a pointer to the new string.
 *  The memory allocated for
 * the new string must be freed by the caller using free() 
 * when it is no longer needed.
 *
 * If either input string is NULL, the function returns NULL.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*result;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	result = malloc(len_s1 + len_s2 + 1);
	if (!result)
		return (NULL);
	while (*s1)
	{
		*result = *s1;
		result++;
		s1++;
	}
	while (*s2)
	{
		*result = *s2;
		result++;
		s2++;
	}
	*result = '\0';
	result = result - (len_s1 + len_s2);
	return (result);
}
