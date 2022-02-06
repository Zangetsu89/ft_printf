/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edawood <edawood@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:28:47 by edawood           #+#    #+#             */
/*   Updated: 2022/02/03 14:29:04 by edawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(uintptr_t n, int base, t_info *info, int upper)
{
	char	*basestr;

	if (upper == 1)
		basestr = "0123456789abcdef";
	if (upper == 2)
		basestr = "0123456789ABCDEF";
	if (n >= base)
		ft_putnbr_base(n / base, base, info, upper);
	ft_putchar(basestr[n % base], info);
}
