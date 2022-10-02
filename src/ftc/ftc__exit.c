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

#include "ftc__stdlib.h"

#include "ftw__stdlib.h"
#include "ftc__internal_global.h"

void	ftc__exit(int status)
{
	while (ftw__g()->exit.bonus_handler_count)
		ftw__g()->exit.bonus_handler[
		--ftw__g()->exit.bonus_handler_count]();
	while (ftw__g()->exit.mandatory_handler_count)
		ftw__g()->exit.mandatory_handler[
		--ftw__g()->exit.mandatory_handler_count]();
	ftw__exit(status);
}
