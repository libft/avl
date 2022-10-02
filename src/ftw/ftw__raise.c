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

#include "ftw__internal_prelude.h"

#include "ftw__signal.h"

#ifdef FTW_ALLOWED_FUNCTIONS_RAISE

# include <signal.h>

int	ftw__raise(int sig)
{
	return (raise(sig));
}

#else

int	ftw__raise(int sig)
{
	(void)sig;
	return (-1);
}

#endif
