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

#include "ft_avl__internal.h"

#include "ftc__stdlib.h"
#include "ftc__string.h"

t_ft_avl__node	*ft_avl__internal_new_node(
	void *key,
	size_t key_length,
	void *value,
	size_t value_length
)
{
	t_ft_avl__node *const	result = ftc__malloc(
			sizeof(t_ft_avl__node) + key_length + value_length);

	if (!result)
		return (NULL);
	result->key = &result->value[value_length];
	ftc__memcpy(result->value, value, value_length);
	ftc__memcpy(result->key, key, key_length);
	result->left = NULL;
	result->right = NULL;
	result->depth = 1;
	return (result);
}
