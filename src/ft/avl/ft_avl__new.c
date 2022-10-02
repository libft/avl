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

#include "ft_avl.h"

#include "ftc__stdlib.h"

t_ft_avl	*new_ft_avl(
	size_t sizeof_value,
	t_ft_avl__key_comparator comparator
)
{
	t_ft_avl *const	result = ftc__malloc(sizeof(t_ft_avl));

	if (!result)
		return (NULL);
	result->root = NULL;
	result->sizeof_value = sizeof_value;
	result->comparator = comparator;
	return (result);
}
