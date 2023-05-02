/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:06:22 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/26 10:06:28 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 5 Funcao

#include "libft.h"

/**
 * @brief Checks if an integer represents a printable ASCII
 *  character (in the range 32-126).
 *
 * This function takes an integer as a parameter and checks 
 * if it represents a
 * printable ASCII character within the range of 32 to 126.
 *
 * @param c The integer value to be checked.
 * @return Returns 1 (true) if the integer represents a
 *  printable ASCII character, otherwise returns 0 (false).
 */
int	ft_isprint(int c)
{
	return (c > 31 && c < 127);
}
