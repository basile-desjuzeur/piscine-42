#include <string.h>


char *ft_strcpy(char *dest, char *src);


char *ft_strcpy(char *dest, char *src)
{
    int counter;

    counter = 0;
    while (src[counter] != 0)
    {
        dest[counter] = src[counter];
        counter++;
    }
    dest[counter] = '\0';
    return (dest);
}

int main(void)
{
    char src[] = "test";
    char *point_src = src;
    char dest[] = "a remplacer";
    char *point_dest = dest;


    ft_strcpy(point_dest, point_src);

    printf("src : ");
    for (int i = 0; i < (int)strlen(src) - 1; i++)
    {
        printf("%c", src[i]);
    }

    printf("\ndest : ");


    for (int i = 0; i < (int)strlen(dest) - 1; i++)
    {
        printf("%c", dest[i]);
    }
}