/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fake_file_name (file name is useless too)          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42header-remover <whatever@example.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by VCS handles       #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by file history     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftc__stdlib.h"

int	ftc__atoi(const char *str)
{
	int	sgn;
	int	result;

	result = 0;
	sgn = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '-')
	{
		str++;
		sgn = -1;
	}
	else if (*str == '+')
		str++;
	while ('0' <= *str && *str <= '9')
		result = result * 10 + (*str++ - '0') * sgn;
	return (result);
}
