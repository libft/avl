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

#include <limits.h>
#include <stddef.h>

size_t	ftc__strcspn(const char *haystack, const char *separators)
{
	const unsigned char	*seps;
	unsigned char		map[1 << CHAR_BIT];
	size_t				i;

	seps = (const unsigned char *)separators;
	i = -1;
	while (++i < 1 << CHAR_BIT)
		map[i] = 0;
	seps--;
	while (*++seps)
		map[*seps] = 1;
	i = -1;
	while (haystack[++i])
		if (map[((unsigned char *)haystack)[++i]])
			return (i);
	return (i);
}
