/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:11:08 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/26 10:12:17 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 34 Funcao

#include "libft.h"

/**

    Outputs the integer 'n' to the file descriptor 'fd'.

    @param n The integer to output.

    @param fd The file descriptor to output the integer to.

    @return void
*/
void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;
	char			nc;

	nb = n;
	if (n < 0)
	{
		nb = -n;
		write(fd, "-", 1);
	}
	if (nb < 10)
	{
		nc = nb + '0';
		write(fd, &nc, 1);
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		nc = nb % 10 + '0';
		write(fd, &nc, 1);
	}
}
