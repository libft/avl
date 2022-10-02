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

size_t	ftc__strlcat(char *dest, const char *source, size_t dest_size)
{
	unsigned int	length;

	length = 0;
	while (dest_size && *dest)
	{
		length++;
		dest++;
		dest_size--;
	}
	return (length + ftc__strlcpy(dest, source, dest_size));
}
