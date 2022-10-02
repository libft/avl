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

#ifndef FT_AVL_H
# define FT_AVL_H

# include "ft_avl__types.h"

# include "ft_types.h"

typedef t_err	(*t_ft_avl__iterate_param)(
					void *context,
					void *key,
					size_t key_length,
					bool *out_continue);

t_ft_avl	*new_ft_avl(
				size_t sizeof_value,
				t_ft_avl__key_comparator comparator);
t_err		ft_avl__put(
				t_ft_avl *self,
				void *key,
				size_t key_length,
				void *value);
bool		ft_avl__pop(
				t_ft_avl *self,
				void *key,
				size_t key_length,
				void *value);
bool		ft_avl__get(
				t_ft_avl *self,
				void *key,
				size_t key_length,
				void *value);
t_err		ft_avl__iterate(
				t_ft_avl *self,
				t_ft_avl__iterate_param	param);

#endif
