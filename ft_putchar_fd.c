/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:10:37 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/26 10:28:24 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Writes a character to a file descriptor.
 *
 * This function writes the character 'c' to the file descriptor
 * 'fd' using the `write` function.
 *
 * @param c The character to be written.
 * @param fd The file descriptor to write the character to.
 *
 * @return None.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
