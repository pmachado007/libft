/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 09:26:59 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 13:02:09 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 14 Funcao

#include "libft.h"

/**
 * @brief Converts an uppercase letter to its corresponding 
 * lowercase letter.
 *
 * This function takes an integer argument c,
 *  which represents the ASCII value of a character.
 * It checks if the character is an uppercase letter by checking
 *  if its ASCII value is within the range of uppercase letters 
 * in the ASCII table (i.e., between 'A' and 'Z').
 * If c is an uppercase letter, the function adds 51 to
 *  its ASCII value to convert it to its corresponding lowercase
 *  letter.
 * If c is not an uppercase letter, the function simply 
 * returns c without modifying it.
 *
 * @param c The integer representation of the character 
 * to be converted.
 * @return Returns the integer representation of the 
 * corresponding lowercase letter, if c is an uppercase letter.
 *         Otherwise, returns c without modifying it.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
