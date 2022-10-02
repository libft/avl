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

#include "ftc__ctype.h"

#include <stdio.h>

#ifdef DEVELOPMENT
# include <assert.h>
# include <limits.h>
#endif

static const int	g_map[256] = {
	0, 0, 0, 0, 0, 0, 0, 0, // 0000 ~ 0007
	0, 0, 0, 0, 0, 0, 0, 0, // 0010 ~ 0017
	0, 0, 0, 0, 0, 0, 0, 0, // 0020 ~ 0027
	0, 0, 0, 0, 0, 0, 0, 0, // 0030 ~ 0037
	0, 1, 1, 1, 1, 1, 1, 1, // 0040 ~ 0047
	1, 1, 1, 1, 1, 1, 1, 1, // 0050 ~ 0057
	0, 0, 0, 0, 0, 0, 0, 0, // 0060 ~ 0067
	0, 0, 1, 1, 1, 1, 1, 1, // 0070 ~ 0077
	1, 0, 0, 0, 0, 0, 0, 0, // 0100 ~ 0107
	0, 0, 0, 0, 0, 0, 0, 0, // 0110 ~ 0117
	0, 0, 0, 0, 0, 0, 0, 0, // 0120 ~ 0127
	0, 0, 0, 1, 1, 1, 1, 1, // 0130 ~ 0137
	1, 0, 0, 0, 0, 0, 0, 0, // 0140 ~ 0147
	0, 0, 0, 0, 0, 0, 0, 0, // 0150 ~ 0157
	0, 0, 0, 0, 0, 0, 0, 0, // 0160 ~ 0167
	0, 0, 0, 0, 1, 1, 1, 0, // 0170 ~ 0177
	0, 0, 0, 0, 0, 0, 0, 0, // 0200 ~ 0207
	0, 0, 0, 0, 0, 0, 0, 0, // 0210 ~ 0217
	0, 0, 0, 0, 0, 0, 0, 0, // 0220 ~ 0227
	0, 0, 0, 0, 0, 0, 0, 0, // 0230 ~ 0237
	0, 0, 0, 0, 0, 0, 0, 0, // 0240 ~ 0247
	0, 0, 0, 0, 0, 0, 0, 0, // 0250 ~ 0257
	0, 0, 0, 0, 0, 0, 0, 0, // 0260 ~ 0267
	0, 0, 0, 0, 0, 0, 0, 0, // 0270 ~ 0277
	0, 0, 0, 0, 0, 0, 0, 0, // 0300 ~ 0307
	0, 0, 0, 0, 0, 0, 0, 0, // 0310 ~ 0317
	0, 0, 0, 0, 0, 0, 0, 0, // 0320 ~ 0327
	0, 0, 0, 0, 0, 0, 0, 0, // 0330 ~ 0337
	0, 0, 0, 0, 0, 0, 0, 0, // 0340 ~ 0347
	0, 0, 0, 0, 0, 0, 0, 0, // 0350 ~ 0357
	0, 0, 0, 0, 0, 0, 0, 0, // 0360 ~ 0367
	0, 0, 0, 0, 0, 0, 0, 0, // 0370 ~ 0377
};

#ifndef DEVELOPMENT

int	ftc__ispunct(int c)
{
	if (c == EOF)
		return (0);
	return (g_map[(unsigned char)c]);
}

#else

int	ftc__ispunct(int c)
{
	assert(c == EOF || (0 <= c && c <= UCHAR_MAX));
	if (c == EOF)
		return (0);
	return (g_map[(unsigned char)c]);
}

#endif
