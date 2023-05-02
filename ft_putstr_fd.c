/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:11:26 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/26 10:11:29 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 32 Funcao

#include "libft.h"

/**

    Outputs the string 's' to the file descriptor 'fd'.
    @param s The string to output.
    @param fd The file descriptor to output the string to.
    @return void
*/
void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
