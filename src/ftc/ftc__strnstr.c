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

char	*ftc__strnstr(
	const char *haystack,
	const char *needle,
	size_t max_length_haystack
)
{
	const size_t	needle_len = ftc__strnlen(needle, max_length_haystack);
	size_t			max_len;
	size_t			i;

	if (needle[needle_len])
		return (NULL);
	max_len = ftc__strnlen(haystack, max_length_haystack);
	if (max_len > max_length_haystack)
		max_len = max_length_haystack;
	i = 0;
	while (i + needle_len <= max_len)
	{
		if (ftc__memcmp((const char *)&haystack[i], needle, needle_len) == 0)
			return ((char *)(&haystack[i]));
		i++;
	}
	return (NULL);
}
