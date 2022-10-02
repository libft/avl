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

#ifndef FTC__STDLIB_H
# define FTC__STDLIB_H

# include <stddef.h>

void	*ftc__malloc(size_t size);
void	*ftc__calloc(size_t count, size_t size);
void	*ftc__realloc(void *ptr, size_t size);
void	ftc__free(void *ptr);

void	ftc__srand(unsigned int seed);
int		ftc__rand(void);
int		ftc__rand_r(unsigned int *seed);

void	ftc__abort(void);
void	ftc__exit(int status);
int		ftc__atexit(void (*function)(void));
void	ftc__quick_exit(int status);
int		ftc__at_quick_exit(void (*function)(void));

int		ftc__atoi(const char *str);

#endif
