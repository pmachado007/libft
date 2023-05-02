/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:24:20 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 09:00:08 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Funcao 21

#include "libft.h"

/**
 * ft_isspace - Checks if a character is a whitespace character
 * @c: The character to be checked
 *
 * The function checks if the given character
 *  is a space (' '), a tab ('\t'), a
 * carriage return ('\r'), a newline ('\n'),
 *  a vertical tab ('\v'), or a form feed ('\f').
 *
 * @return: 1 if the character is a whitespace character, 0 otherwise
 */
int	ft_isspace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

/**
 * ft_atoi - Converts a string to an integer considering possible signs and
 *           whitespace, while handling overflow and underflow.
 * @str: The input string containing the characters to convert.
 *
 * This function takes a string and converts it to an integer, while handling
 * possible signs (+ or -) and ignoring any leading whitespace characters.
 * In case of overflow or underflow, the function returns the appropriate
 * INT_MAX or INT_MIN values defined in the <limits.h> header.
 *
 * @return: The converted integer value. If the string contains invalid
 *         characters, the function will return the converted value up to
 *         that point.
 */
int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	while (ft_isdigit(*str))
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (sign * res);
}
