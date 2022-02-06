/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edawood <edawood@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:23:20 by edawood           #+#    #+#             */
/*   Updated: 2022/02/03 14:23:33 by edawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_ptr(unsigned long long ptr, t_info *info)
{
	ft_putchar('0', info);
	ft_putchar('x', info);
	ft_putnbr_base(ptr, 16, info, 1);
}
