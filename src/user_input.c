/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darkwater <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 08:13:50 by darkwater         #+#    #+#             */
/*   Updated: 2023/07/26 01:12:18 by darkwater        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

char	get_user_input(unsigned int lives)
{
	char	guess;

	guess = 0;
	printf("\nCurrent lives: %d\n", lives);
	ft_print_art(lives);
	while (guess < 'a' || guess > 'z')
	{
		printf("\nWhat letter would you like to guess? ");
		scanf("\n%c", &guess);
		if (guess < 'a' || guess > 'z')
		{
			printf("\nPlease input a lowercase alphabetical character!\n");
		}
	}
	return (guess);
}
