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

#ifndef FTW__INTERNAL_PRELUDE_H
# define FTW__INTERNAL_PRELUDE_H

# ifdef FTW_ALLOWED_ALL
#  define FTW_ALLOWED_FUNCTIONS_EXIT
#  define FTW_ALLOWED_FUNCTIONS_RAISE
#  define FTW_ALLOWED_FUNCTIONS_SIGNAL
# endif

#endif
