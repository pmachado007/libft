/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:00:18 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/26 10:19:49 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Funcao 26 

#include "libft.h"

/**
 * @brief Trims specified characters from the beginning 
 * and end of a given string.
 *
 * This function takes two strings as input, s1 and set.
 *  It trims characters present
 * in the set string from the beginning and end of the s1 string. 
 * The function returns
 * a new, dynamically allocated string containing the trimmed result.
 *
 * @param s1 The original string to be trimmed.
 *  If both s1 and set are NULL, the function
 *           returns NULL.
 * @param set A string containing characters to be removed
 *  from the beginning and end of s1.
 *            If both s1 and set are NULL, 
 * the function returns NULL.
 * @return A new, dynamically allocated string 
 * with the specified characters trimmed from s1.
 *         The caller is responsible for freeing 
 * the memory allocated for the returned string.
 *         If the input string is NULL, the function returns NULL.
 *
 * Example:
 * ```
 * char *s1 = " Hello, World! ";
 * char *set = " ";
 * char *trimmed = ft_strtrim(s1, set);
 * printf("%s\n", trimmed); // Output: "Hello, World!"
 * free(trimmed);
 * ```
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1 && !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
		j--;
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[i], j - i + 1);
	return (str);
}
