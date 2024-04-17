/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:36:48 by yehara            #+#    #+#             */
/*   Updated: 2024/04/16 22:00:22 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c)
{
	if (!((c >= 0 && c <= 31) || (c == 127)))
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

//     a = '!';
//     b = '$';
//     printf("%d\n", isprint(a)); //表示できないから0を返す
//     printf("%d\n", ft_isprint(a)); //表示できないから0を返す
//     printf("%d\n", isprint(b)); //表示できるから1
//     printf("%d\n", ft_isprint(b)); //表示できるから1

//     return (0);
// }