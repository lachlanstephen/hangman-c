/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   secret_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darkwater <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 07:56:08 by darkwater         #+#    #+#             */
/*   Updated: 2023/07/25 08:33:33 by darkwater        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

size_t	ft_strlen(char *secret)
{
	size_t	len;

	len = 0;
	while (secret[len] != 0)
	{
		len++;
	}
	return (len - 1);
}

bool	val_secret_input(char *secret)
{
	size_t	i;

	printf("\nEnter your hidden word (lowercase alphabetical): ");
	fgets(secret, 26, stdin);
	i = 0;
	while (secret[i] != '\n')
	{
		if (secret[i] < 'a' || secret[i] > 'z')
		{
			printf("\nPlease input a lowercase alphabetical word!\n");
			return (false);
		}
		i++;
	}
	return (true);
}

char	*get_secret(void)
{
	char	*secret;
	bool	valid_secret;
	size_t	len;

	valid_secret = false;
	printf("\nPLAYER 1'S TURN!\n\nMake sure player 2 can't see.\n");
	secret = (char *)malloc(sizeof(char) * 26);
	if (secret == NULL)
		return (NULL);
	while (valid_secret == false)
	{
		valid_secret = val_secret_input(secret);
	}
	len = ft_strlen(secret);
	secret[len] = '\0';
	return (secret);
}
