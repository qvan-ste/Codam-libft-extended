/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/09 12:05:37 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/03/06 14:31:53 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_lstsize(t_list *lst)
{
	int	n;

	n = 0;
	while (lst)
	{
		lst = lst -> next;
		n++;
	}
	return (n);
}