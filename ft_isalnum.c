/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 10:27:37 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 09:56:06 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 3 Funcao

#include "libft.h"

/**
 * @brief Checks if a character is an alphanumeric character 
 * (a letter or a digit).
 *
 * This function takes a character as a parameter and checks if it is an
 * alphanumeric character, using the previously defined ft_isalpha() and 
 * ft_isdigit() functions.
 *
 * @param c The character to be checked.
 * @return Returns 1 (true) if the character is an alphanumeric character,
 *  otherwise returns 0 (false).
 */
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
