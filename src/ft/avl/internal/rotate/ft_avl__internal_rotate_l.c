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

t_ft_avl__node	*ft_avl__internal_rotate_l(t_ft_avl__node *z)
{
	t_ft_avl__node *const	y = z->right;
	t_ft_avl__node *const	t = y->left;

	z->right = t;
	y->left = z;
	z->depth = z->left->depth;
	if (z->depth < y->depth)
		z->depth = y->depth;
	z->depth++;
	y->depth = y->right->depth;
	if (y->depth < z->depth)
		y->depth = z->depth;
	y->depth++;
	return (y);
}
