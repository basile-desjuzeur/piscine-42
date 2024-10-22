
void ft_sort_int_tab(int *tab, int size);


int find_min_index(int *tab, int size_tab)
{ 
    int min;
    int index;
    int counter;

    printf("table to sort :");

    for (int i = 0; i < size_tab; i++)
    {
        printf("%d", tab[i]);
    }

    printf("\n");

    counter = 1;
    min = tab[0];
    index = 0;
    while (counter < size_tab)
    {   
        if (tab[counter] < min)
        {
            min = tab[counter];
            index = counter;
        }
        counter++;
    }
    return (index);
}

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void ft_sort_int_tab(int *tab, int size)
{
    int counter;
    int min_index;

    counter = 0;
    while (counter < size)
    {
        min_index = find_min_index(tab + counter, size - counter);
        printf("min  : %d\n", min_index);
        printf("Swapping %d et %d \n",tab[counter],tab[min_index]);
        ft_swap(&tab[counter], &tab[min_index+counter]);
        counter++;
    }
}

/*
int main(void)
{
    int tab[] = {};
    int size = 0;

    ft_sort_int_tab(tab, size);

    printf("tab : \n");

    for (int i = 0; i < size; i++)
    {
        printf("%d", tab[i]);
    }
}*/