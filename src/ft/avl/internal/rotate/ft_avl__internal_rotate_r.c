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

void	ft_avl__internal_rotate_r(t_ft_avl__node *z)
{
	t_ft_avl__node *const	y = z->left;
	t_ft_avl__node *const	t = y->left;

	z->left = t;
	y->right = z;
	z->depth = z->right->depth;
	if (z->depth < y->depth)
		z->depth = y->depth;
	z->depth++;
	y->depth = y->left->depth;
	if (y->depth < z->depth)
		y->depth = z->depth;
	y->depth++;
}
