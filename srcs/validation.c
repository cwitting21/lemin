#include "lemin.h"

static void		check_ants_amount(char *line)
{
	if (!ft_isdigit(line[0]) || line[0] == '-')
	{
		ft_memdel(&line);
		error_exit();
	}
}

static void		node_validation(t_valid *vd, char *line)
{
	if (!ft_strcmp(line, "##start"))
	{
		if (vd->start > 0)
			error_exit(); // multiple start nodes
		vd->start = 1;
	}
	else if (!ft_strcmp(line, "##start"))
	{
		if (vd->end > 0)
			error_exit(); // multiple end nodes
		vd->end = 1;
		save_str_to_lst();
	}
}

void			validation(t_lemin *lem)
{
	t_valid		vd;
	int			tmp;
	char		*line;
	int			tmp2;

	tmp2 = 1;
	ft_bzero(&vd, sizeof(t_valid));
	while ((tmp = get_next_line(0, line)) > 0)
	{
		if (tmp2 == 1)
		{
			tmp2 = 0;
			check_ants_amount(line);
			vd->save = ;
		}
		else if (line[0] == '#' && line[1] != '#')
		{
			// just skip
		}
		else if (!ft_strchr(line, '-'))
			node_validation(&vd, line);

	}
	if (tmp == -1)
		error_exit();
	if (!vd.end || !vd.start)
		error_exit();
}