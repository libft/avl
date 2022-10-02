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

#include "ftw__stdlib.h"

#ifdef FTW_ALLOWED_FUNCTIONS_EXIT

# include <stdlib.h>

void	ftw__exit(int status)
{
	exit(status);
}

#else

// TODO: print status

void	ftw__exit(int status)
{
	(void)status;
	while (1)
		;
}

#endif
