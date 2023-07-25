/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darkwater <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 07:53:39 by darkwater         #+#    #+#             */
/*   Updated: 2023/07/26 01:40:42 by darkwater        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <string.h>

void	end_of_game(bool victory, char *secret, unsigned int lives)
{
	system("clear");
	if (victory == true)
	{
		printf("\n\n\n\t ~ ~ ~ CONGRATULATIONS! ~ ~ ~\n\n");
		printf("\n\t     ~ ~ ~ YOU WIN! ~ ~ ~\n\n");
	}
	else
	{
		printf("\n\n\n\t   Better luck next time!\n\n");
	}
	printf("\n\t   The answer was '%s'.\n\n", secret);
	ft_print_art(lives);
	printf("\n\n");
}

void	ft_prn_current(char *result)
{
	unsigned int	i;

	i = 0;
	printf("\nCurrent Solution: ");
	while (result[i] != 0)
	{
		printf("%c  ", result[i]);
		i++;
	}
	printf("\n");
}

void	user_guess(char *secret, char *result, unsigned int *lives)
{
	unsigned int	i;
	bool			valid_guess;
	char			guess;

	i = 0;
	valid_guess = false;
	guess = get_user_input(*lives);
	while (secret[i] != 0)
	{
		if (secret[i] == guess)
		{
			result[i] = secret[i];
			valid_guess = true;
		}
		i++;
	}
	system("clear");
	if (valid_guess != true)
	{
		printf("\nThat\'s not right...\n");
		*lives = *lives - 1;
	}
	else
		printf("\nCorrect!\n");
}

void	ft_gameplay(char *secret, size_t secret_len)
{
	unsigned int	lives;
	char			*result;

	lives = 5;
	system("clear");
	printf("\nPLAYER 2'S TURN!\n");
	result = (char *)malloc(sizeof(char) * secret_len + 1);
	if (result == NULL)
	{
		printf("\nError!\n");
		exit(139);
	}
	result = ft_strset(result, '_', secret_len + 1);
	ft_prn_current(result);
	while (lives > 0 && ft_strcmp(result, secret) != true)
	{
		user_guess(secret, result, &lives);
		ft_prn_current(result);
	}
	end_of_game(ft_strcmp(result, secret), secret, lives);
	free(result);
}

int	main(void)
{
	char	*secret_word;
	size_t	secret_len;

	system("clear");
	printf("\n\t - - - READY TO PLAY HANGMAN? - - - \n");
	secret_word = get_secret();
	secret_len = ft_strlen(secret_word);
	ft_gameplay(secret_word, secret_len);
	free(secret_word);
	return (0);
}
