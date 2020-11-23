/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/20 14:55:19 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2020/11/20 14:55:20 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int argc)
{
	if ((argc < 'a' || argc > 'z') && (argc < 'A' || argc > 'Z'))
		return (0);
	return (1);
}
