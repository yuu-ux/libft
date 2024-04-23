/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:41:58 by yehara            #+#    #+#             */
/*   Updated: 2024/04/23 11:41:59 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int main(void)
// {
//     int a;
//     int b;

//     a = 128;
//     b = 3;
//     printf("%d\n", ft_isascii(a));
//     printf("%d\n", isascii(a));
//     printf("%d\n", ft_isascii(b));
//     printf("%d\n", isascii(b));
// }