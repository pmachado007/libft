/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:45:52 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 12:12:50 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Funcao 23

#include "libft.h"

/**
 * ft_strdup - Duplicates a string by allocating memory 
 * for the new copy and copying the content of the 
 * original string to the allocated memory
 * @s: The original string to be duplicated
 *
 * This function is similar to the strdup function 
 * from the C standard library.
 * The memory for the duplicated string is allocated on the heap,
 *  and it is the responsibility of the programmer 
 * to free the memory using the free function
 * when it is no longer needed.
 *
 * @return: A pointer to the duplicated string,
 *  or NULL if the memory allocation fails
 */
char	*ft_strdup(const char *s)
{
	size_t	string_length;
	char	*duplicated_string;

	string_length = ft_strlen(s);
	duplicated_string = (char *) malloc(string_length + 1);
	if (!duplicated_string)
		return (NULL);
	ft_memcpy(duplicated_string, s, string_length + 1);
	return (duplicated_string);
}

// Encontrar o tamanho da string original
// Alocar memória para a string duplicada (incluindo o caractere nulo)
// Verificar se a memória foi alocada com sucesso
// Copiar o conteúdo da string original para a 
// nova área de memória alocada