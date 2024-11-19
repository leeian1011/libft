/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialee <ialee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:46:43 by ialee             #+#    #+#             */
/*   Updated: 2024/11/13 20:25:11 by ialee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// Creates a new string with all leading and trailing characters,
/// found within `set`, removed from `str`.
/// This function allocates a variable size onto the heap.
/// RETURN(s):
/// `NULL` - on failure to allocate memory.
/// `char *` - (allocated string) on success.
char	*ft_strtrim(const char *str, const char *set)
{
	char	*ptr;
	long	str_len;

	str_len = ft_strlen(str);
	while (ft_strchr(set, str[str_len - 1]) && str_len > 0)
		str_len--;
	while (ft_strchr(set, *str) && *str && str_len > 0)
	{
		str++;
		str_len--;
	}
	if (str_len < 0)
		return (NULL);
	ptr = malloc(str_len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, str, str_len + 1);
	return (ptr);
}