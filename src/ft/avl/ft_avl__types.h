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

#ifndef FT_AVL__TYPES_H
# define FT_AVL__TYPES_H

# include <stddef.h>

typedef struct s_ft_avl__node
{
	struct s_ft_avl__node	*parent;
	struct s_ft_avl__node	*left;
	struct s_ft_avl__node	*right;
	void					*key;
	size_t					key_length;
	unsigned char			value[];
}	t_ft_avl__node;

typedef int	(*t_ft_avl__key_comparator)(
				void *a,
				size_t a_length,
				void *b,
				size_t b_length);

typedef struct s_ft_avl
{
	t_ft_avl__node				*root;
	size_t						sizeof_value;
	t_ft_avl__key_comparator	comparator;
}	t_ft_avl;

#endif
