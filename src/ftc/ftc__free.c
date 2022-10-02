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
#include "ftc__string.h"

#include <stddef.h>
#include <stdint.h>

#include "ftc__internal_memory.h"
#include "ftw__stdlib.h"

void	ftc__free(void *ptr)
{
	t_memory_block	*old;

	if (!ptr)
		return ;
	old = (t_memory_block *)((intptr_t)(ptr)
			- (intptr_t)(&((t_memory_block *) 0)->actual));
	ftw__free(old);
}
