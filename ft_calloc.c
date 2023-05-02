/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 09:49:11 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/27 12:00:13 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_calloc - Allocates memory for an array of elements,
 *  initializes them to zero, and checks for size limits
 * @num_elements: The number of elements to be allocated
 * @element_size: The size of each element in bytes
 *
 * The function calculates the total required size in bytes
 * for the allocation, and checks if the element_size, num_elements,
 * or total_size exceeds the maximum limit.
 * If any of these conditions are true, the function returns NULL.
 *
 * @return: A pointer to the allocated memory initialized with zero,
 * or NULL if the allocation fails or the size limits are exceeded
 */
void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void					*memory;

	memory = malloc(num_elements * element_size);
	if (!memory)
		return (NULL);
	ft_memset(memory, 0, num_elements * element_size);
	return (memory);
}
//Alocando a memoria usando malloc
//verificando se a memoria foi bem alocada
// Inicializando a memória alocada com zero usando ft_memset