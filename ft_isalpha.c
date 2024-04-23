/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:42:03 by yehara            #+#    #+#             */
/*   Updated: 2024/04/23 11:42:04 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
// 空白は0を返す
// 数字も0
// 文字のみ1が帰る

// int	main(void)
// {
//     int a;
//     int b;
//     // 文字であれば０以外の数字
// 	int ft_a = ft_isalpha('');
// 	a = isalpha('');
//     // 数字であれば０が帰ってくる
// 	int ft_b = ft_isalpha('1');
// 	b = isalpha('1');

//     printf("%d\n", ft_a);
//     printf("%d\n", a);
//     printf("%d\n", ft_b);
//     printf("%d\n", b);

//     return (0);
// }