/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharvol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:51:26 by lcharvol          #+#    #+#             */
/*   Updated: 2016/11/11 16:52:31 by lcharvol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_putendl(char const *str)
{
	int i;

	i = 0;
	while (str != NULL && str[i])
		ft_putchar(str[i++]);
	ft_putchar('\n');
}
