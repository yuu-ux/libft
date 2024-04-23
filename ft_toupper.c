/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:38:43 by yehara            #+#    #+#             */
/*   Updated: 2024/04/23 11:39:19 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if (!(c >= 'a' && c <= 'z'))
	{
		return (c);
	}
	else
	{
		return (c - 32);
	}
}
// int	main(void)
// {
// 	int c;
// 	int d;
// 	c = toupper('a');
// 	d = ft_toupper('a');
// 	printf("%c\n", c);
// 	printf("%c\n", d);
// }