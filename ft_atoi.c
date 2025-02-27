/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialee <ialee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:29:53 by ialee             #+#    #+#             */
/*   Updated: 2024/11/12 22:20:19 by ialee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *num)
{
	long	val;
	int		is_neg;

	val = 0;
	is_neg = 0;
	while (*num == '\n' \
		|| *num == '\t' || *num == ' ' \
		|| *num == '\v' || *num == '\r' || *num == '\f'\
	)
		num++;
	if (*num == '-')
	{
		is_neg = 1;
		num++;
	}
	else if (*num == '+')
		num++;
	while (ft_isdigit(*num))
		val = (val * 10) + (*num++ - '0');
	if (is_neg)
		return (-val);
	return (val);
}
