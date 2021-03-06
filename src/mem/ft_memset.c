/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharvol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 20:36:24 by lcharvol          #+#    #+#             */
/*   Updated: 2016/11/08 19:14:08 by lcharvol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void		*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*new;

	i = 0;
	if (n == 0)
		return (s);
	new = s;
	while (i < n)
	{
		new[i++] = c;
	}
	return (s);
}
