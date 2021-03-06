/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharvol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 18:40:42 by lcharvol          #+#    #+#             */
/*   Updated: 2016/11/06 15:49:15 by lcharvol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_striter(char *str, void (*f)(char *))
{
	if (str == NULL || f == NULL)
		return ;
	while (str != NULL && *str)
		f(str++);
}
