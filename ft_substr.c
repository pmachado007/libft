/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:52:22 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/25 12:58:44 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Funcao 24

/*
 * Function: ft_substr
 * -------------------
 * Create a new string, which is a substring of the given string 's'.
 * The substring starts at index 'start' and has a maximum length 
 * of 'len'.
 *
 * Parameters:
 *   s     - The input string from which to create the substring.
 *   start - The starting index of the substring in the input string 's'.
 *   len   - The maximum length of the substring.
 *
 * Returns:
 *   A pointer to the newly created substring. 
 * The user is responsible for
 *   freeing the memory allocated by this function when
 *  it is no longer needed.
 *   If the input string is NULL or memory allocation fails,
 *  the function returns NULL.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *) malloc(sizeof(char) *(len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/*  Verifica se a string de entrada s é NULL.
 Se for, a função retorna NULL.
    Obtém o comprimento da string de entrada s usando 
	a função ft_strlen().
    Verifica se o índice inicial start é maior ou igual
	 ao comprimento da string de entrada. 
	Se for, define o comprimento da substring len como 0.
    Verifica se o comprimento desejado da substring 
	len é maior do que o número de caracteres 
	restantes após o índice inicial na string de entrada.
	Se for, ajusta len para o número de caracteres restantes.
    Aloca memória para a substring usando malloc().
	O tamanho alocado é len + 1 para incluir o caractere
	 nulo no final.
    Se a alocação de memória falhar, a função retorna NULL.
    Copia os caracteres da string de entrada para a nova 
	substring começando do índice start e com o comprimento 
	máximo len.
    Adiciona o caractere nulo no final da substring para 
	indicar o fim da string.
    Retorna o ponteiro para a substring criada. */
