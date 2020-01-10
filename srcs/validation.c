#include "lemin.h"

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
			check_ants_amount();

		}
		else if (line[0] == '#' && line[1] != '#')
			// just skip
		else if ()

	}
	if (tmp == -1)
		error_exit();
	if (!vd.end || !vd.start)
		error_exit();
}