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

#ifndef FTC__STRING_H
# define FTC__STRING_H

# include <stddef.h>

void	ftc__bzero(
			void *buffer,
			size_t length);
void	*ftc__memchr(
			const void *dest,
			int c,
			size_t length);
void	*ftc__memcmp(
			const void *m1,
			const void *m2,
			size_t length);
void	*ftc__memcpy(
			void *dest,
			const void *source,
			size_t length);
void	*ftc__memmove(
			void *dest,
			const void *source,
			size_t length);
void	*ftc__memset(
			void *buffer,
			int c,
			size_t length);
char	*ftc__strcat(
			char *dest,
			const char *append);
char	*ftc__strchr(
			const char *str,
			int c);
int		ftc__strcmp(
			const char *s1,
			const char *s2);
char	*ftc__strcpy(
			char *dest,
			const char *source);
size_t	ftc__strcspn(
			const char *haystack,
			const char *separators);
size_t	ftc__strlen(
			const char *str);
char	*ftc__strncat(
			char *dest,
			const char *append,
			size_t max_length_append);
int		ftc__strncmp(
			const char *s1,
			const char *s2,
			size_t max_length);
char	*ftc__strncpy(
			char *buffer,
			const char *str,
			size_t buffer_length);
size_t	ftc__strnlen(
			const char *str,
			size_t max_length);
char	*ftc__strnstr(
			const char *haystack,
			const char *needle,
			size_t max_length_haystack);
char	*ftc__strpbrk(
			const char *haystack,
			const char *separators);
char	*ftc__strrchr(
			const char *str,
			int c);
size_t	ftc__strspn(
			const char *haystack,
			const char *separators);
char	*ftc__strstr(
			const char *haystack,
			const char *needle);
char	*ftc__strtok(
			char *dest,
			const char *separators);
char	*ftc__strtok_r(
			char *dest,
			const char *separators,
			char **lasts);

char	*ftc__strdup(
			const char *source);
size_t	ftc__strlcpy(
			char *buffer,
			const char *source,
			size_t buffer_length);
size_t	ftc__strlcat(
			char *buffer,
			const char *source,
			size_t buffer_length);
char	*ftc__strndup(
			const char *source,
			size_t max_length);

#endif
