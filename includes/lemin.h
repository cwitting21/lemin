#ifndef LEMIN_H
# define LEMIN_H

# include "libft.h"
# include "libftprintf.h"

typedef enum	e_bool
{
	True = 1,
	False = !True
}				t_bool;

typedef struct	s_graf
{
	int			room_amount;
}				t_graf;

typedef struct	s_room
{
	char		*name;
	t_bool		visited;
}				t_room;

typedef struct	s_lemin
{
	t_graf		graf;
	t_room		*start;
	t_room		*end;
}				t_lemin;


#endif