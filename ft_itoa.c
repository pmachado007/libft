/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 11:26:17 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 10:35:52 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Funcao 28

#include "libft.h"

/**
 * ft_int_length - Calculates the length (number of digits) 
 * of a given integer 'n'.
 *
 * @n: The integer whose length is to be calculated.
 *
 * @return: The length of the integer 'n', 
 * including the sign for negative integers.
 */
int	ft_int_length(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

/**
 * ft_itoa_recursive - A recursive helper function
 *  for converting an integer to a string.
 *
 * @n: The integer to be converted. The function works
 *  with positive integers,
 *     so the calling function should handle negative
 *  integers separately.
 * @result: A pointer to the character array where the
 *  resulting string will be stored.
 * @index: A pointer to an integer representing the 
 * current index in the 'result' array
 *         where the next character will be placed.
 *
 * This function is called internally by ft_itoa() 
 * and should not be used directly.
 * It recursively converts the integer 'n' to
 *  its string representation and stores the
 * result in the character array pointed to 
 * by 'result'. The 'index' parameter is used
 * to keep track of the current position in
 * the 'result' array during the recursive calls.
 */
void	ft_itoa_recursive(int n, char *result, int *index)
{
	if (n == 0)
		return ;
	ft_itoa_recursive(n / 10, result, index);
	result[(*index)++] = (n % 10) + '0';
}

/**
 * ft_itoa - Convert an integer to its string representation.
 *
 * @n: The integer to be converted.
 *
 * @return: A pointer to a newly allocated string 
 * representing the integer.
 *         The caller is responsible for freeing 
 * the memory when it is no longer needed.
 *         If memory allocation fails, the function 
 * returns NULL.
 *
 * This function converts an integer 'n' to its string 
 * representation, including
 * handling negative numbers. The resulting string is 
 * dynamically allocated,
 * so the caller must free the memory when it is no 
 * longer needed.
 */
char	*ft_itoa(int n)
{
	int		len;
	int		is_negative;
	int		index;
	char	*result;

	index = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_int_length(n);
	is_negative = n < 0;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	if (is_negative)
	{
		n = -n;
		result[0] = '-';
		index = 1;
	}
	result[len] = '\0';
	if (n == 0)
		result[index] = '0';
	else
		ft_itoa_recursive(n, result, &index);
	return (result);
}
