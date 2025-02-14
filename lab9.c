#include <stdio.h>

#define SIZE 5

void initializeMap(int map[SIZE][SIZE]);
void displayMap(int map[SIZE][SIZE], int x, int y);
void move(int *row, int *col, char direction); // changed x and y to row and col for simplicity
int checkTreasure(int x, int y);

int main()
{
    int map[SIZE][SIZE] = {
        {0,1,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
    };

    printf("Welcome to Captain Codebeard's treasure hunt! \n");
    initializeMap(map);


    int rowCord =0;
    int colCord =0;
    char direction;
    int * rc = &rowCord;
    int * cc = &colCord;
    displayMap(map, rowCord, colCord);
    while (checkTreasure(*cc, *rc) != 1)
    { 
        printf("Your current location is (%d, %d) \n", colCord, rowCord);
        printf("enter direction (U/L/R/D): \n");

        scanf(" %c", &direction);

        move(rc, cc, direction);
        displayMap(map, *cc, *rc);
        checkTreasure(*cc,*rc);
    }
    printf("\nCongrats! you found the treasure! \n");
        
}

void initializeMap(int map[SIZE][SIZE])
{
    for (int r=0; r<SIZE; r++)
    {
        for (int c=0; c<SIZE; c++)
        {
            map[r][c] = 0; // fills map with zeros
        }

    }

}

void displayMap(int map[SIZE][SIZE], int x, int y)
{
    for (int r=0; r<SIZE; r++)
    {
        for (int c=0; c<SIZE; c++)
        {
            if (x==r && y==c)
            {
                printf("[P] "); // puts p at coordinate(s)
            }
            else
            {
                printf("[%d] ", map[r][c]); // fills rest with 0
            }
        }
        printf("\n");
    }
}

void move(int *row, int *col, char direction)
{
    
        if ((direction == 'u' || direction == 'U') && *col != 0)
        {
            (*col)--; // moves it up
        }
        else if ((direction == 'd' || direction == 'D') && *col < SIZE-1)
        {
            (*col)++; // moves it down
        }
        else if ((direction == 'l' || direction == 'L') && *row != 0)
        {
            (*row)--; // moves it left
        }
        else if ((direction == 'r' || direction == 'R')&& *row != SIZE-1)
        {
            (*row)++; //moves it right
        }
}

int checkTreasure(int x, int y)
{
    if (x==0 && y==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

