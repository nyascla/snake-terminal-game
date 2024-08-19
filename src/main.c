#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define WIDTH 40
#define HEIGHT 10

char board[HEIGHT][WIDTH];

typedef struct
{
    int x;
    int y;
} Snake;

void initBoard()
{
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            if (i == 0 || i == HEIGHT - 1)
                board[i][j] = '@';

            else if (j == 0 || j == WIDTH - 1)
                board[i][j] = '@';

            else
                board[i][j] = ' ';
        }
    }
}

void printBoard()
{
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
}

void move(Snake *snake, char c)
{
    // board[snake->y][snake->x] = ' ';

    switch (c)
    {
    case 'w':
        snake->y--;
        break;
    case 'a':
        snake->x--;

        break;
    case 's':
        snake->y++;

        break;
    case 'd':
        snake->x++;

        break;
    default:
        break;
    }
    printf("%d", snake->x);

    board[snake->y][snake->x] = 'x';
}

int main()
{
    initBoard();

    Snake snake = {
        .x = 1,
        .y = 1};

    char c;

    while (1)
    {
        // system("clear");
        printBoard();

        c = getchar();
        move(&snake, c);
    }

    return 0;
}
