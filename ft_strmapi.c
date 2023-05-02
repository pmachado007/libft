/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:56:18 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 12:39:26 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strmapi - Applies a given function to each character of
 *  the input string using their index in the string.
 * @s: The input string (const char pointer) to be processed.
 * @f: A pointer to a function that takes an unsigned int and a
 *  char as arguments and returns a char.
 *
 * This function creates a new string by applying the
 *  given function 'f' to each character of the input
 * string 's'. The function 'f' takes the index of the
 *  character in the string and the character itself as arguments.
 * The resulting string is allocated with malloc
 *  and should be freed by the caller when it is no longer needed.
 *
 * @return: A pointer to the new string,
 *  or NULL if memory allocation fails or if any
 *  of the input arguments is NULL.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*result;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	result = (char *) malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[len] = '\0';
	return (result);
}
