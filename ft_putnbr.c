/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edawood <edawood@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:25:21 by edawood           #+#    #+#             */
/*   Updated: 2022/02/03 14:40:15 by edawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void static	ft_min_num_printer(t_info *info)
{
	ft_putchar('2', info);
	ft_putchar('1', info);
	ft_putchar('4', info);
	ft_putchar('7', info);
	ft_putchar('4', info);
	ft_putchar('8', info);
	ft_putchar('3', info);
	ft_putchar('6', info);
	ft_putchar('4', info);
	ft_putchar('8', info);
}

void	ft_putnbr(int n, t_info *info)
{
	if (n < 0)
	{
		ft_putchar('-', info);
		if (n == -2147483648)
		{
			ft_min_num_printer(info);
			return ;
		}
		n = -n;
	}
	if (n < 10)
	{
		ft_putchar(n + '0', info);
		return ;
	}
	else
		ft_putnbr(n / 10, info);
	ft_putnbr(n % 10, info);
}
