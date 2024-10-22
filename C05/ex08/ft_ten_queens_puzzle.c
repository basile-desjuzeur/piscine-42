#include <unistd.h>

/*The idea is the following one :
We will start from a 10*10 grid  filled with 1s. Indiccating
that the queen can be placed in any of the 100 squares.
When a queen is placed somewhere, all the diagonals is 
set to 0, as it would be eaten by the queen.
We then recursively call the function with the new grid
and the new queen to place.
When we reach the last queen, we print the grid.
*/

// Prototypes of the functions that will be used
void ft_putchar(char c);
void ft_print_grid(int grid[10][10]);
void ft_place_queen(int grid[10][10], int queen, int *count);

// main function
int ft_ten_queens_puzzle(void)
{
    int i;
    int j;
    int count;
    int *pointer;
    int grid[10][10];

    i = 0;
    j = 0;
    count = 0;
    pointer = &count;
    while (i < 10)
    {
        j = 0;
        while (j < 10)
        {
            grid[i][j] = 1;
            j++;
        }
        i++;
    }
    ft_place_queen(grid, 0, pointer);
}

// given a grid, a number of queen to place 
// searches for next queen to place
void ft_place_queen(int grid[10][10], int nb_placed_queens, int *count)
{   
        
