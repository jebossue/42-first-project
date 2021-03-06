/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebossue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 18:22:08 by jebossue          #+#    #+#             */
/*   Updated: 2016/11/04 10:48:40 by jebossue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	if (nb <= 0)
		return (0);
	while (result * result < nb && result < 46341)
		result++;
	if (result * result == nb)
		return (result);
	else
		return (0);
}
