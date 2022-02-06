/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_checker.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edawood <edawood@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:21:05 by edawood           #+#    #+#             */
/*   Updated: 2022/02/03 14:22:13 by edawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_input_checker(char *input, char *arguments, t_info *info)
{
	int	count;

	count = 0;
	if (*input == 'c')
	{
		ft_putchar((char)arguments, info);
		count = 1;
	}
	if (*input == 's')
		ft_putstr((char *)arguments, info);
	if (*input == 'p')
		ft_print_ptr((uintptr_t)arguments, info);
	if (*input == 'd')
		ft_print_decimal((int)arguments, info);
	if (*input == 'i')
		ft_putnbr((int)arguments, info);
	if (*input == 'x')
		ft_putnbr_base((unsigned int)arguments, 16, info, 1);
	if (*input == 'X')
		ft_putnbr_base((unsigned int)arguments, 16, info, 2);
	if (*input == 'u')
		ft_putnbr_base((unsigned int)arguments, 10, info, 1);
	return (count);
}
