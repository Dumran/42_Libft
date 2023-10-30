/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:29:06 by mehkekli          #+#    #+#             */
/*   Updated: 2023/10/05 14:29:09 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	make_job(long nb, int *level, int fd)
{
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb > 9)
	{
		make_job(nb / 10, level, fd);
		make_job(nb % 10, level, fd);
	}
	else
	{
		ft_putchar_fd(nb + '0', fd);
		(*level)++;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int		level;
	long	nb;

	level = 0;
	nb = n;
	make_job(nb, &level, fd);
}
