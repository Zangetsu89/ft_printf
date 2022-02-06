/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edawood <edawood@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:22:42 by edawood           #+#    #+#             */
/*   Updated: 2022/02/03 14:22:54 by edawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_decimal(int num, t_info *info)
{
	if (num < 0)
		ft_putnbr(num, info);
	else
		ft_putnbr_base((int)num, 10, info, 1);
}
