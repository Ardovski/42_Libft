/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uardaozdes <uardaozdes@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 10:08:10 by uardaozdes        #+#    #+#             */
/*   Updated: 2025/05/27 14:58:29 by uardaozdes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_isalpha(int a);
int		ft_isalnum(int a);
size_t	ft_strlen(const char *a);
void	*ft_bzero(void *b, size_t len);
int		ft_isascii(int a);
int		ft_isdigit(int a);
int		ft_isprint(int a);
void	ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);

#endif