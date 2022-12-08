/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 02:27:23 by yciftci           #+#    #+#             */
/*   Updated: 2022/11/24 19:02:51 by yciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_putchr(char c);
int	ft_putnbr(int nbr);
int	ft_putstr(char *str);
int	ft_putuint(unsigned int nbr);
int	ft_putptr(unsigned long long nbr);
int	ft_counthex(unsigned long long nbr);
int	ft_puthex(unsigned int nbr);
int	ft_putuphex(unsigned int nbr);
int	ft_putptrhex(unsigned long long nbr);
int	ft_printf(const char *str, ...);

#endif