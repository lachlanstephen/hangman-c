/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darkwater <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 04:37:10 by darkwater         #+#    #+#             */
/*   Updated: 2023/07/25 04:57:28 by darkwater        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

bool	ft_strcmp(char *result, char *secret)
{
	unsigned int	i;

	i = 0;
	while (secret[i] != 0)
	{
		if (secret[i] != result[i])
		{
			return (false);
		}
		i++;
	}
	return (true);
}

char	*ft_strset(char *result, char c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		result[i] = c;
		i++;
	}
	result[i] = '\0';
	return (result);
}
