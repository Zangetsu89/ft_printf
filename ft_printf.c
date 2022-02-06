/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edawood <edawood@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:23:32 by edawood           #+#    #+#             */
/*   Updated: 2022/02/03 15:26:48 by edawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	t_info	info;
	va_list	arguments;

	info.count = 0;
	va_start (arguments, input);
	while (*input)
	{
		if (*input == '%')
		{
			input++;
			if (*input == '%')
				ft_putchar('%', &info);
			else
				ft_input_checker((char *)input, \
				va_arg(arguments, char *), &info);
		}
		else
			ft_putchar(*input, &info);
		input++;
	}
	va_end(arguments);
	return (info.count);
}
