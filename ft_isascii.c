/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 10:38:29 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 09:58:15 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 4 Funcao

#include "libft.h"

/**
 * @brief Checks if an integer represents 
 * an ASCII character (in the range 0-127).
 *
 * This function takes an integer as a parameter 
 * and checks if it represents a
 * valid ASCII character within the range of 0 to 127.
 *
 * @param c The integer value to be checked.
 * @return Returns 1 (true) if the integer represents 
 * an ASCII character, otherwise returns 0 (false).
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
