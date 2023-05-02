/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:42:00 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 12:45:09 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 20 Funcao

#include "libft.h"

/**
 * ft_strnstr - Locates the first occurrence of the substring 
 * 'needle' in the
 *              string 'haystack', considering only the 
 * first 'n' characters
 *              of 'haystack'.
 * @haystack: The string in which to search for the substring.
 * @needle: The substring to locate in the 'haystack'.
 * @n: The number of characters to consider in the 'haystack' string.
 *
 * This function searches for the first occurrence of the substring 'needle'
 * in the string 'haystack', considering only the first 'n' characters of
 * 'haystack'. If the substring is found, a pointer to the first character of
 * the first occurrence is returned. If the substring is not found or 'needle'
 * is an empty string, the function returns a pointer to the 'haystack'.
 * If 'needle' is not found within the specified range, NULL is returned.
 *
 * Return: A pointer to the first occurrence of the substring, the 'haystack'
 *         if 'needle' is empty, or NULL if the substring is not found within
 *         the specified range.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	needle_len;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack && n-- >= needle_len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
