/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uardaozdes <uardaozdes@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 14:54:13 by uardaozdes        #+#    #+#             */
/*   Updated: 2025/05/29 15:13:13 by uardaozdes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	value;

	value = n;
	if (value < 0)
	{
		value = -value;
		ft_putchar_fd('-', fd);
	}
	if (n >= 10)
		ft_putnbr_fd(value / 10, fd);
	ft_putchar_fd((value % 10) + '0', fd);
}
