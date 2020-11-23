/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/20 14:51:30 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2020/11/20 14:51:32 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int argc)
{
	if (argc >= 'A' && argc <= 'Z')
		argc += 32;
	return (argc);
}
