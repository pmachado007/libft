/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 09:15:30 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 09:57:41 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 1 Funcao

#include "libft.h"

/**
 * @brief Checks if a character is an alphabetic character (a letter).
 *
 * This function takes a character as a parameter and checks if it is an
 * alphabetic character, whether uppercase or lowercase.
 * The check is performed
 * after converting the character to its lowercase
 *  form using the ft_tolower() function.
 *
 * @param c The character to be checked.
 * @return Returns 1 (true) if the character is alphabetic,
 *  otherwise returns 0 (false).
 */
int	ft_isalpha(int c)
{
	c = ft_tolower(c);
	return (c >= 'a' && c <= 'z');
}
