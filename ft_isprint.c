/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:41:41 by yehara            #+#    #+#             */
/*   Updated: 2024/04/23 14:35:41 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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