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

static t_ft_avl__internal_rotate	collect(t_ft_avl__node *z)
{
	return ((t_ft_avl__internal_rotate){
		z->left,
		z->left->right,
	});
}

void	ft_avl__internal_rotate_r(t_ft_avl__node *z)
{
	const t_ft_avl__internal_rotate	d = collect(z);

	z->left = d.t;
	d.y->right = z;
	z->depth = z->right->depth;
	if (z->depth < d.y->depth)
		z->depth = d.y->depth;
	z->depth++;
	d.y->depth = d.y->left->depth;
	if (d.y->depth < z->depth)
		d.y->depth = z->depth;
	d.y->depth++;
}
