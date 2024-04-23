/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:39:23 by yehara            #+#    #+#             */
/*   Updated: 2024/04/23 11:39:48 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if (!(c >= 'A' && c <= 'Z'))
	{
		return (c);
	}
	else
	{
		return (c + 32);
	}
}
// int main(void)
// {
//     int c;
//     int d;
//     c = tolower('\0');
//     d = ft_tolower('\0');
//     printf("%c\n", c);
//     printf("%c\n", d);
// }