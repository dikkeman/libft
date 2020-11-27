/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/20 14:58:13 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2020/11/20 14:58:14 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	s = (const unsigned char*)src;
	d = (unsigned char*)dest;
	if (src != NULL || dest != NULL)
	{
		while (n)
		{
			n--;
			*d = *s;
			d++;
			s++;
		}
	}
	return (dest);
}
