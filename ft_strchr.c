#include <string.h>
#include <stdio.h>

// sから始めに出現するcを見つけます。
// nullも考慮するため、cが'\0'であれば終端の'\0'が検知されます。
// strchrは初めのcのみ検索するのに対し、strrchrは最後のcも検索する
// 見つかった文字への戻り値を返します。
// 文字列内に文字が出現しなかった場合はNULLを返します
unsigned char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    if (c != 0)
        return (NULL);
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            return &(s[i]);
        }
        i++;
    }
    return (NULL);
}

int main(void)
{
    const char *str = "Hello World";
    int c = 'W';
    char *src;
    char *ft_src;

    src = strchr(str, c);
    ft_src = ft_strchr(str, c);

    printf("%s\n", src);
    printf("%s\n", ft_src);
    return 0;
}