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

#include <stddef.h>

#include "ftc__internal_memory.h"
#include "ftw__stdlib.h"

void	*ftc__malloc(size_t size)
{
	void					*result;
	t_memory_block *const	tmp
		= (t_memory_block *)ftw__malloc(sizeof(t_memory_block) + size);

	if (!tmp)
		return (NULL);
	tmp->capacity = size;
	tmp->size = size;
	result = tmp->actual;
	return (result);
}
