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

#include "ftc__stdlib.h"

char	*ftc__strndup(const char *source, size_t max_length)
{
	const size_t	length = ftc__strnlen(source, max_length);
	char *const		result = ftc__malloc(length + 1);

	if (result)
	{
		ftc__memcpy(result, source, length);
		result[length] = '\0';
	}
	return (result);
}
