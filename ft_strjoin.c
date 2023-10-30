/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:29:53 by mehkekli          #+#    #+#             */
/*   Updated: 2023/10/05 14:29:55 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	size_t	i;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = (size_t)ft_strlen(s1);
	len2 = (size_t)ft_strlen(s2);
	tab = (char *)malloc(sizeof(char) * (len1 + len2) + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		tab[i] = s1[i];
		i++;
	}
	while (i < (len1 + len2))
	{
		tab[i] = s2[i - len1];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
