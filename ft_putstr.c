/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edawood <edawood@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:29:16 by edawood           #+#    #+#             */
/*   Updated: 2022/02/03 14:29:51 by edawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, t_info *info)
{
	int	len;

	if (!str)
	{
		write(1, "(null)", 6);
		info->count += 6;
	}
	else
	{
		len = ft_strlen(str);
		write(1, str, len);
		info->count += len;
	}
}
