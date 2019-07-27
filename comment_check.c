/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comment_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 10:33:54 by akorol            #+#    #+#             */
/*   Updated: 2019/07/14 10:33:56 by akorol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core_war.h"

char		*delete_comments(char *line)
{
	char	*ptr;
	size_t	n;

	ptr = ft_strchr(line, '#');
	if (ptr)
	{
		n = ptr - line;
		ptr = ft_strndup(line, n);
	}
	else
		ptr = ft_strdup(line);
	return (ptr);
}