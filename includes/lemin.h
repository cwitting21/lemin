#ifndef LEMIN_H
# define LEMIN_H

# include "libft.h"
# include "libftprintf.h"

typedef enum		e_bool
{
	True = 1,
	False = !True
}					t_bool;

typedef struct		s_edge
{
	t_node		*next_node;
}					t_edge;

typedef struct		s_graf
{
	int			nodes_amount;
	t_node		**nodes;

}					t_graf;

typedef struct		s_node
{
	char		*name;
	t_bool		visited;
	t_edge		**arr_edge; // array of edges for each node
}					t_node;

typedef struct		s_lemin
{
	t_graf		graf;
	t_node		*start;
	t_node		*end;
}					t_lemin;

typedef struct			s_lst_save
{
	char				*str;
	struct s_lst_save	*next;
}						t_lst_save;

typedef struct		s_save
{
	t_lst_save		*head;
	t_lst_save		*lst;
}					t_save;

typedef struct		s_valid
{
	int			start;
	int			end;
	int			nodes_amount;
	t_save		*save;
}					t_valid;

#endif