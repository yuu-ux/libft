#include "libft.h"

int	handle_overflow(const char *str, int sign)
{
	unsigned long	ret;

	ret = 0;
	while (*str >= '0' && *str <= '9')
	{
		ret *= 10;
		if (sign == 1 && ret > (unsigned long)LONG_MAX - (*str - '0'))
			return ((int)LONG_MAX);
		if (sign == -1 && ret > (unsigned long)LONG_MAX + 1 - (*str - '0'))
			return ((int)LONG_MIN);
		ret += *str - '0';
		str++;
	}
	return (ret);
}

int	ft_atoi(const char *str)
{
	long	stack;
	long	result;
	int		sign;

	stack = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	result = handle_overflow(str, sign);
	return ((int)(sign * result));
}

int main(void)
{
    char *str = "18446744073709551616";
    printf("%d\n", atoi(str));
    printf("%d\n", ft_atoi(str));
    return (0);
}