/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:20:36 by yehara            #+#    #+#             */
/*   Updated: 2024/04/16 21:20:43 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
// // 数値であれば１を返す
// // 数値以外であれば0を返す
// int main(void)
// {
//     int ft_a = ' ';
//     int a = ' ';
//     int ft_b = ' ';
//     int b = ' ';

//     printf("%d\n", ft_isdigit(ft_a));
//     printf("%d\n", isdigit(a));
//     printf("%d\n", ft_isdigit(ft_b));
//     printf("%d\n", isdigit(b));

//     return (0);
// }