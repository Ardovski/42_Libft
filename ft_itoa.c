/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uardaozdes <uardaozdes@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 10:01:28 by uardaozdes        #+#    #+#             */
/*   Updated: 2025/05/29 10:24:07 by uardaozdes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	value;

	value = n;
	len = ft_intlen(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (value < 0)
	{
		str[0] = '-';
		value = -value;
	}
	else if (value == 0)
		str[0] = '0';
	while (value > 0)
	{
		len--;
		str[len] = (value % 10) + '0';
		value = value / 10;
	}
	return (str);
}
