/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 09:50:05 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 13:04:14 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 13 Funcao

#include "libft.h"

/**
 * @brief Converts a lowercase letter to its corresponding 
 * uppercase letter.
 *
 * This function takes an integer argument c, 
 * which represents the ASCII value of a character.
 * It checks if the character is a lowercase letter by
 *  checking if its ASCII value is within the range of
 *  lowercase letters in the ASCII table (i.e., between 'a' and 'z').
 * If c is a lowercase letter, the function subtracts 51 from
 *  its ASCII value to convert it to its corresponding uppercase 
 * letter.
 * If c is not a lowercase letter, the function simply returns c
 *  without modifying it.
 *
 * @param c The integer representation of the character to 
 * be converted.
 * @return Returns the integer representation of the 
 * corresponding uppercase letter, if c is a lowercase letter.
 *         Otherwise, returns c without modifying it.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}
