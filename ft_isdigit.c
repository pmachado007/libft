/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 09:14:30 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 09:58:53 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 2 funcao

#include "libft.h"

/**
 * @brief Checks if a character is a numeric digit (0-9).
 *
 * This function takes a character as a parameter and checks 
 * if it is a numeric digit in the range of '0' to '9'.
 *
 * @param c The character to be checked.
 * @return Returns 1 (true) if the character is a numeric digit,
 *  otherwise returns 0 (false).
 */
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
