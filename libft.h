/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-bri <pede-bri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:14:23 by pede-bri          #+#    #+#             */
/*   Updated: 2023/04/26 10:19:06 by pede-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

// 1 Coluna de Funcoes
int		ft_isalpha(int c); // 1 Funcao
int		ft_isdigit(int c); // 2 Funcao
int		ft_isalnum(int c); // 3 Funcao
int		ft_isascii(int c); // 4 Funcao
int		ft_isprint(int c); // 5 Funcao
size_t	ft_strlen(const char *s); // 6 Funcao
void	*ft_memset(void *s, int c, size_t n); // 7 Funcao
void	*ft_bzero(void *s, size_t n); // 8 Funcao
void	*ft_memcpy(void *dest, const void *src, size_t n); // 9 Funcao
void	*ft_memmove(void *dest, const void *src, size_t n); // 10 Funcao
size_t	ft_strlcpy(char *dst, const char *src, size_t size); // 11 Funcao
size_t	ft_strlcat(char *dst, const char *src, size_t size); // 12 Funcao
// 2 Coluna de funções
int		ft_toupper(int c); // 13 Funcao
int		ft_tolower(int c); // 14 Funcao
char	*ft_strchr(const char *s, int c); // 15 Funcao
char	*ft_strrchr(const char *s, int c); // 16 Funcao
int		ft_strncmp(const char *s1, const char *s2, size_t n); // 17 Funcao
void	*ft_memchr(const void *s, int c, size_t n); // 18 Funcao
int		ft_memcmp(const void *s1, const void *s2, size_t n); // 19 Funcao 
char	*ft_strnstr(const char *haystack, \
const char *needle, size_t n); // 20 Funcao
int		ft_atoi(const char *str); // 21 Funcao
//funções que usam o malloc
void	*ft_calloc(size_t num_elements, size_t element_size); // 22 Funcao
char	*ft_strdup(const char *s); // 23 Funcao

// Part 2 - Additional functions

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2); // 25 Funcao
char	*ft_strtrim(char const *s1, char const *set); // 26 Funcao
char	**ft_split(char const *s, char c); // 27 Funcao
char	*ft_itoa(int n); // 28 Funcao
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*)); // 30 Funcao
void	ft_putchar_fd(char c, int fd); // 31 Funcao
void	ft_putstr_fd(char *s, int fd); // 32 Funcao
void	ft_putendl_fd(char *s, int fd); // 33 Funcao
void	ft_putnbr_fd(int n, int fd); // 34 Funcao

// Funcoes Bonus

/**
 * struct s_list - (typedef: t_list) Represents a singly
 *  linked list element.
 *
 * @content: A void pointer to store the address of any data type, 
 * allowing
 *           the list to store elements of different data types.
 * @next:    A pointer to the next element in the singly linked list.
 *  If this
 *           is the last element, the 'next' pointer will be NULL.
 *
 * This structure is used to create a singly linked list,
 *  where each element
 * stores a generic pointer to content and a
 *  pointer to the next element in the
 * list. The 'typedef' keyword is used to 
 * create an alias 't_list' for this
 * structure, making it easier to declare 
 * variables and pointers of this type.
 */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content); // 35 Funcao
void	ft_lstadd_front(t_list **lst, t_list *new); // 36 Funcao
int		ft_lstsize(t_list *lst); //37 Funcao
t_list	*ft_lstlast(t_list *lst); //38 Funcao
void	ft_lstadd_back(t_list **lst, t_list *new); //39 Funcao
void	ft_lstdelone(t_list *lst, void (*del)(void*)); //40 Funcao 
void	ft_lstclear(t_list **lst, void (*del)(void*)); // 41 Funcao
void	ft_lstiter(t_list *lst, void (*f)(void *)); //42 Funcao
t_list	*ft_lstmap(t_list *lst, \
void *(*f)(void *), void (*del)(void *)); // 43 Funcao

#endif
