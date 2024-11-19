/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialee <ialee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:15:22 by ialee             #+#    #+#             */
/*   Updated: 2024/11/12 23:11:00 by ialee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

// character operations
int		ft_isalpha(char c);
int		ft_isdigit(char c);
int		ft_isalnum(char c);
int		ft_isascii(char c);
int		ft_isprint(char c);
int		ft_toupper(char c);
int		ft_tolower(char c);

// string operations
int		ft_atoi(const char *num);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t len);
size_t	ft_strlcat(char *dest, const char *src, size_t len);
char	*ft_strchr(const char *str, char c);
char	*ft_strrchr(const char *str, char c);
int		ft_strncmp(const char *str1, const char *str2, size_t len);
char	*ft_strnstr(const char *str1, const char *str2, size_t len);
char	*ft_strdup(const char *str);
char	*ft_substr(const char *str, unsigned int start, size_t len);
char	*ft_strjoin(const char *str1, const char *str2);
char	*ft_strtrim(const char *str1, const char *set);
char	**ft_split(const char *str, char c);
char	*ft_strmapi(const char *str, char (*fn)(unsigned int, char));
void	ft_striteri(char *str, void (*fn)(unsigned int, char*));

// memory operations
int		ft_memcmp(const void *buf1, const void *buf2, size_t len);
void	*ft_memset(void *buf, int c, size_t len);
void	*ft_bzero(void *buf, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memchr(const void *buf, int c, size_t len);
void	*ft_calloc(size_t count, size_t size);

// integer operations
char	*ft_itoa(int num);

// output operations
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int num, int fd);

// singly-linked-list operations
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstdelone(t_list *lst, void (*del_fn)(void *));
void	ft_lstclear(t_list **lst, void (*del_fn)(void *));
void	ft_lstiter(t_list *lst, void (*fn)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*fn)(void *), void (*del_fn)(void *));

#endif
