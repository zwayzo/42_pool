/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:54:20 by moazzedd          #+#    #+#             */
/*   Updated: 2022/07/23 02:06:32 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	w;
	int	y;

	w = *a / *b;
	y = *a % *b;
	*a = w;
	*b = y;
}