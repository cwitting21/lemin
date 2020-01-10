#include "lemin.h"

int				main(int ac, char **av)
{
	t_lemin		lem;

	ft_bzero(&lem, sizeof(t_lemin));
	validation(&lem);
	return (0);
}