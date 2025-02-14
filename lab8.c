#include <stdio.h>

#define ROWS 5
#define COLS 5

void displayGrid (char grid[ROWS][COLS], int reveal);
int checkHit(char grid[ROWS][COLS], int rowguess, int colguess);
void updateGrid(char grid[ROWS][COLS], int row, int col,int hit);
int allShipsSunk(char grid[ROWS][COLS]);

int main()
{
    char grid[ROWS][COLS] = {
    {'S', '~', '~', 'S', '~'},
    {'S', '~', '~', 'S', '~'},
    {'~', '~', '~', '~', '~'},
    {'~', 'S', 'S', 'S', '~'},
    {'~', '~', '~', '~', '~'},

    };
    int reveal = 0;
    int rowguess = 0;
    int colguess = 0;

    while (!allShipsSunk(grid))
    {
        displayGrid(grid,reveal);
        printf("Enter your guess (Row and column): \n" );
        scanf(" %d %d", &rowguess, &colguess);

         if (checkHit(grid, rowguess,colguess) == 1)
         {
            printf("HIT! \n");
         }
         else
         {
            printf("MISS! \n");
         }

         updateGrid(grid, rowguess, colguess, checkHit(grid, rowguess, colguess));
         
        
    }

    printf("Welcome to sink the alien ship! \n");
    displayGrid(grid,reveal);
    reveal = 1;
    checkHit(grid, rowguess, colguess);


    updateGrid(grid, rowguess, colguess, checkHit(grid, rowguess, colguess));
    //displayGrid(grid,reveal);
    printf("End of game");
}
void displayGrid (char grid[][COLS], int reveal)
{
        for (int i=0; i<ROWS; i++)
    {
        for (int c=0; c<COLS; c++)
        {
            if (grid[i][c] == 'X' || grid[i][c] == 'O')
            {
                printf("%c ", grid[i][c]);
            }
            else
            {
                printf("~ ");
            }
        }
        printf("\n");
    }
    }

int checkHit(char grid[ROWS][COLS], int rowguess, int colguess)
{
    if (grid[rowguess][colguess] == 'S')
    {
        return 1;
    }
    return 0;
}

void updateGrid(char grid[ROWS][COLS], int row, int col, int hit)
{
    if (hit ==1)
    {
        grid[row][col] = 'X';
    }
    else
    {
        grid[row][col] = 'O';
    }
}

int allShipsSunk(char grid[ROWS][COLS])
{

    for (int r =0; r< ROWS; r++)
    {
        for (int c = 0; c<COLS; c++)
        {
            if (grid[r][c] == 'S')
            {
                return 0;
            }
        }
    }
    return 1;
}
