/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialee <ialee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:23:13 by ialee             #+#    #+#             */
/*   Updated: 2024/11/14 14:36:40 by ialee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// Creates a new string which value starts from 
/// `str[start]` to `str[start + len]` .
/// This function will allocate a maximum of variable size onto the heap.
/// RETURN(s):
///	`size_t` - size of the string the function attempted to create. 
char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	size_t	str_len;
	char	*ptr;

	if (!str)
		return (NULL);
	str_len = ft_strlen(str);
	if (start >= str_len)
	{
		len = 0;
		ptr = malloc(len + 1);
		if (!ptr)
			return (NULL);
		ft_strlcpy(ptr, str, len + 1);
		return (ptr);
	}
	else if (start + len > str_len)
		len = str_len - start;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, &str[start], len + 1);
	return (ptr);
}
