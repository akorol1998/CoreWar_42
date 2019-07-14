/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_instructions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 13:41:15 by akorol            #+#    #+#             */
/*   Updated: 2019/07/07 13:41:24 by akorol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core_war.h"

//2 & 5
int			read_first_element(t_pack *data, int line)
{
	if (label_check(data, line))
		return (1);
	return (0);
	ft_printf("start checking for label");
}

int			actual_instructions(t_pack *data)
{
	int		line;

	line = -1;
	// ft_printf("darou");
	while (data->tokens[++line])
	{
		if (!label_check(data, line))
			ft_printf("WEll it is really weird error\n");
	}
	line = -1;
	while (data->tokens[++line])
	{
		if (!check_if_label(data, line))
		{
			ft_printf("Line is %d\n", line);
			if (!check_for_being_op(data, line))
				ft_printf("pizdz\n");
			else
				ft_printf("all systems are steady\n");
		}
	}
	for(int i=0;data->labels[i];i++)
	{
		ft_printf("LBL [%s]\n", data->labels[i]);
	}
	system("leaks asm");
	exit(1);
	return (1);
}

int			read_instructions(t_pack *data)
{
	char	*line;
	int		i;

	if (!(data->tokens = (char***)malloc(sizeof(char**) * CHAMP_MAX_SIZE + 1)))
		return (0); //free structure and exit the program
	data->tokens[CHAMP_MAX_SIZE] = NULL;
	i = -1;
	while (get_next_line(data->dsc, &line) && ++i < CHAMP_MAX_SIZE)
	{
		data->tokens[i] = ft_space_tab_split(line);
		if (!data->tokens[i])
			i--;
		free(line);
	}
	print_tokens(data);
	actual_instructions(data);
	return (1);
}