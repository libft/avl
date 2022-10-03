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

#ifndef FT_AVL__INTERNAL_H
# define FT_AVL__INTERNAL_H

# include "ft_avl__types.h"

t_ft_avl__node	*ft_avl__internal_new_node(
					void *key,
					size_t key_length,
					void *value,
					size_t value_length);
t_ft_avl__node	*ft_avl__internal_rotate_l(
					t_ft_avl__node *z);
t_ft_avl__node	*ft_avl__internal_rotate_r(
					t_ft_avl__node *z);
t_ft_avl__node	*ft_avl__internal_balance_ll(
					t_ft_avl__node *z);
t_ft_avl__node	*ft_avl__internal_balance_lr(
					t_ft_avl__node *z);
t_ft_avl__node	*ft_avl__internal_balance_rl(
					t_ft_avl__node *z);
t_ft_avl__node	*ft_avl__internal_balance_rr(
					t_ft_avl__node *z);

#endif
