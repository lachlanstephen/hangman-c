/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ascii_art.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darkwater <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 01:43:48 by darkwater         #+#    #+#             */
/*   Updated: 2023/07/26 01:48:43 by darkwater        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	prn_hangman_end(void)
{
	printf("\n\t\t+----+"
		"\n\t\t|    |"
		"\n\t\t|    O"
		"\n\t\t|   /|\\"
		"\n\t\t|   / \\"
		"\n\t\t|"
		"\n\t\t+=========\n");
}

void	ft_print_art(unsigned int lives)
{
	if (lives == 5)
		prn_hangman_5();
	else if (lives == 4)
		prn_hangman_4();
	else if (lives == 3)
		prn_hangman_3();
	else if (lives == 2)
		prn_hangman_2();
	else if (lives == 1)
		prn_hangman_1();
	else
		prn_hangman_end();
}
