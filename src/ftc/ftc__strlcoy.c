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

#include "ftc__string.h"

#include <stddef.h>

size_t	ftc__strlcpy(char *dest, const char *source, size_t dest_size)
{
	unsigned int	i;

	if (!dest_size)
	{
		i = 0;
		while (*source++)
			i++;
		return (i);
	}
	dest_size--;
	i = 0;
	while (*source && i < dest_size)
	{
		i++;
		*dest++ = *source++;
	}
	*dest = '\0';
	while (*source++)
		i++;
	return (i);
}
