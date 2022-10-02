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

#ifndef FTC__INTERNAL_GLOBAL_H
# define FTC__INTERNAL_GLOBAL_H

# include <stddef.h>

typedef struct s_ftc__internal_global_rand
{
	unsigned int	seed;
}	t_ftc__internal_global_rand;

typedef struct s_ftc__internal_global_exit
{
	void	(*mandatory_handler[32])(void);
	size_t	mandatory_handler_count;
	void	(**bonus_handler)(void);
	size_t	bonus_handler_capacity;
	size_t	bonus_handler_count;
}	t_ftc__internal_global_exit;

typedef struct s_ftc__internal_global
{
	t_ftc__internal_global_rand	rand;
	t_ftc__internal_global_exit	exit;
	t_ftc__internal_global_exit	quick_exit;
}	t_ftc__internal_global;

extern t_ftc__internal_global	*ftw__g(void);

#endif
