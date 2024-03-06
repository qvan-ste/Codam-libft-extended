/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 12:14:00 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/03/06 14:32:26 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_dupe;
	int		i;

	i = 0;
	s_dupe = malloc(ft_strlen(s) * sizeof(const char) + 1);
	if (!s_dupe)
		return (NULL);
	while (s[i])
	{
		s_dupe[i] = s[i];
		i++;
	}
	s_dupe[i] = '\0';
	return (s_dupe);
}