/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 23:34:15 by mwuckert          #+#    #+#             */
/*   Updated: 2019/07/01 03:38:44 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strchri(char *str, char c)
{
	int i;

	i = -1;
	while (*(str + ++i))
		if (*(str + i) == c)
			return (i);
	return (-1);
}
