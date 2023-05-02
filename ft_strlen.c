/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:33:09 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 12:28:58 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 6 Funcao

#include "libft.h"

/**
 * @brief Calculates the length of a null-terminated string.
 *
 * This function takes a pointer to a null-terminated string as
 *  a parameter
 * and calculates its length by iterating through the characters
 *  until a
 * null character is encountered.
 *
 * @param s The pointer to the null-terminated string.
 * @return Returns the length of the string as a size_t value.
 */
size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	return (len);
}
