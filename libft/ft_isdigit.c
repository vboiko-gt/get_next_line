/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboiko <vboiko@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 20:54:48 by vboiko            #+#    #+#             */
/*   Updated: 2017/01/13 15:06:21 by vboiko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_isdigit(int a)
{
	if (a >= 48 && a <= 57)
		return (1);
	return (0);
}
