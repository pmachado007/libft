/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 08:33:51 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 13:08:57 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Funcao 27

#include "libft.h"

/**
 * alloc_word - Allocates memory for a single word from the input string,
 *              starting at the pointer 's' and ending at the delimiter 'c'
 *              or the null character '\0'.
 *
 * @s: Pointer to the position in the input string where the word starts.
 * @c: Delimiter character used to determine the end of the word.
 *
 * @return: Pointer to the allocated word in memory, or NULL
 *  if memory allocation fails.
 */
char	*ft_alloc_word(char const *s, char c)
{
	char	*word;
	int		len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_memcpy(word, s, len);
	word[len] = '\0';
	return (word);
}

/**
*   @brief Counts the number of words in a string,
*	 separated by a given delimiter.
*    @param s A pointer to a constant char array (string) to be analyzed.
*   @param delimiter The character used to separate words in the string.
*  @return The number of words found in the input string,
* separated by the given delimiter.
*    This function takes a string and a delimiter character as input 
*	and counts the number of words in the string, 
*	considering the delimiter as the separator.
*    It iterates through the string, increasing the word count whenever
* a new word is found, and returns the total count at the end.
*/
int	ft_count_words(char const *s, char c)
{
	int	count;
	int	is_word;

	count = 0;
	is_word = 0;
	while (*s)
	{
		if (*s == c)
			is_word = 0;
		else if (!is_word)
		{
			is_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

/**
 * ft_split - Splits the input string into an array of words based
 *  on the specified delimiter character.
 *
 * This function takes a null-terminated string as input and a
 *  delimiter character. It returns an array of words
 * obtained by splitting the input string on the delimiter.
 *  Consecutive delimiter characters are treated as a single
 * delimiter.
 *
 * @s: The null-terminated input string to be split into words.
 * @c: The delimiter character to split the input string on.
 *
 * @returns: A dynamically allocated NULL-terminated array of 
 * dynamically allocated
 *          null-terminated strings obtained by splitting the
 *  input string on
 *          the specified delimiter character.
 *  Caller is responsible for freeing the memory.
 */
char	**ft_split(char const *s, char c)
{
	char	**split;
	int		words_count;
	int		i;

	if (!s)
		return (NULL);
	words_count = ft_count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (words_count + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			split[i++] = ft_alloc_word(s, c);
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	split[i] = NULL;
	return (split);
}
