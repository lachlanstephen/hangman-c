/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darkwater <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 07:38:14 by darkwater         #+#    #+#             */
/*   Updated: 2023/07/25 04:52:46 by darkwater        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H
# include <stdio.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdlib.h>

bool	ft_strcmp(char *result, char *secret);

char	*get_secret(void);
char	*ft_strset(char *result, char c, size_t len);
char	get_user_input(unsigned int lives);

size_t	ft_strlen(char *secret);

#endif
