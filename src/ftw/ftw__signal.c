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

#include <signal.h>

#ifdef FTW_ALLOWED_FUNCTIONS_SIGNAL

t_ftw__signal_handler	ftw__signal(int sig, t_ftw__signal_handler handler)
{
	return (signal(sig, handler));
}

#else

t_ftw__signal_handler	ftw__signal(int sig, t_ftw__signal_handler handler)
{
	(void)sig;
	(void)handler;
	return (SIG_ERR);
}

#endif
