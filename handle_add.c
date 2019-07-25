/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 16:21:57 by akorol            #+#    #+#             */
/*   Updated: 2019/07/25 16:22:13 by akorol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core_war.h"

int			handle_add(t_pack *data, char **arr)
{
	int		res;

	res = 0;
	if (arr[0] && arr[0][0] == 'r' && register_check(arr[0]))
	{
		if (arr[1] && arr[1][0] == 'r' && register_check(arr[1]))
		{
			if (arr[2] && arr[2][0] == 'r' && register_check(arr[2]))
			{
				res = 1;
			}
			else
				res = 0;
		}
		else
			res = 0;
	}
	else
		res = 0;
	if (res)
		args_to_cmnds(data, arr);
	return (res);
}