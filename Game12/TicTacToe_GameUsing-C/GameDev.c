#include <stdio.h>

char arr[3][3];
int indexes[9][2] = {
    {0, 0},
    {0, 1},
    {0, 2},
    {1, 0},
    {1, 1},
    {1, 2},
    {2, 0},
    {2, 1},
    {2, 2}};
int playerOneWin = 0;
int playerTwoWin = 0;

void show();                           //frontend er function
void userGuide();                      //user input 1 to 9
void logic(int userInput, int player); //logic function-play 1=x,2=0 bosacce
int validate(int userInput);           //er age ki same value input korci ki na?
int winningLogic();
void reset();
void showResult();

int main() //* main function
{
    //variable assign
    int userInput;
    int player = 1;
    int result;
    int count = 0;
    int play = 1;
    int playTime = 0;

    while (1)
    {
        if (playTime > 0)
        {
            showResult();
            printf("Press 1 to Play again : ");
            reset();
            scanf("%d", &play);
            player = 1;
            count = 0;
        }

        if (play != 1)
        {
            break;
        }

        while (play == 1)
        {
            system("cls"); // how clear console in c-stackoverfollow
            show();        //forntend function

            player = !player; //player varable man ultay jabe ; manea 1 hoia jabe 0

            /* if (player)
            {
                printf("Player-2 Truns...\n");
            }
            else
            {
                printf("Player-1 Truns...\n");
            } */
            player ? printf("Player-2 Truns...\n") : printf("Player-1 Truns...\n"); //code improve use ternary oparator

            userGuide(); //user input 1 to 9

            scanf("%d", &userInput);

            int value = validate(userInput); //er age ki same value input korci ki na?
            if (value == 1)
            {
                player = !player;
                printf("Value Already Exists!\n");
                continue;
            }

            if (userInput >= 1 && userInput <= 9)
            //1-9 input dile, konta ki kaj korbe tar condition
            {
                logic(userInput, player);
                result = winningLogic();
                count++;
                playTime++;

                if (result == 1)
                {
                    system("cls"); // how clear console in c-stackoverfollow
                    show();
                    printf("Player 1 wins !!\n");
                    playerOneWin++;
                    break;
                }
                else if (result == 2)
                {
                    system("cls"); // how clear console in c-stackoverfollow
                    show();
                    printf("Player 2 wins !!\n");
                    playerTwoWin++;
                    break;
                }

                if (count == 9)
                {
                    system("cls"); // how clear console in c-stackoverfollow
                    show();
                    printf("Match Draws !!\n");
                    break;
                }
            }
            else
            {
                system("cls"); // how clear console in c-stackoverfollow
                show();        //forntend function
                player = !player;
                printf("Wrong Input!\n");
                userGuide(); //user input 1 to 9
                continue;
            }
        }
    }

    return 0;
}

//frontend er function [][][] ei structure ta banaici
void show()
{
    for (int i = 0; i < 3; i++) //aray-row
    {
        for (int j = 0; j < 3; j++) //aray-column
        {
            if (arr[i][j] == '\0')
            {
                printf("[     ]  ");
            }
            else
            {
                printf("[  %c  ]  ", arr[i][j]);
            }
        }

        printf("\n");
    }
}

void userGuide() //user input 1 to 9
{
    printf("Input 1 to 9 : ");
}

void logic(int userInput, int player) //logic function
//1-9 input dile, konta ki kaj korbe tar condition
{
    /*
    if (userInput == 1)
    {
        if (player)
        {
            arr[0][0] = '0';
        }
        else
        {
            arr[0][0] = 'X';
        }
    }
    else if (userInput == 2)
    {
        if (player)
        {
            arr[0][1] = '0';
        }
        else
        {
            arr[0][1] = 'X';
        }
    }

    else if (userInput == 3)
    {
        if (player)
        {
            arr[0][2] = '0';
        }
        else
        {
            arr[0][2] = 'X';
        }
    }

    else if (userInput == 4)
    {
        if (player)
        {
            arr[1][0] = '0';
        }
        else
        {
            arr[1][0] = 'X';
        }
    }

    else if (userInput == 5)
    {
        if (player)
        {
            arr[1][1] = '0';
        }
        else
        {
            arr[1][1] = 'X';
        }
    }

    else if (userInput == 6)
    {
        if (player)
        {
            arr[1][2] = '0';
        }
        else
        {
            arr[1][2] = 'X';
        }
    }

    else if (userInput == 7)
    {
        if (player)
        {
            arr[2][0] = '0';
        }
        else
        {
            arr[2][0] = 'X';
        }
    }

    else if (userInput == 8)
    {
        if (player)
        {
            arr[2][1] = '0';
        }
        else
        {
            arr[2][1] = 'X';
        }
    }

    else if (userInput == 7)
    {
        if (player)
        {
            arr[2][2] = '0';
        }
        else
        {
            arr[2][2] = 'X';
        }
    }
    */

    //improve code
    //int indexes[9][2] = {{0, 0},{0, 1},{0, 2},{1, 0},{1, 1},{1, 2},{2, 0},{2, 1},{2, 2}};

    userInput = userInput - 1; //array start from 0, so 1 biog korci
    int row = indexes[userInput][0];
    int column = indexes[userInput][1];

    if (player)
    {
        arr[row][column] = '0';
    }
    else
    {
        arr[row][column] = 'X';
    }
}

int validate(int userInput) //er age ki same value input korci ki na?
{
    /*
    int row;
    int column;
    if (userInput == 1) //[0][0]
    {
        row = 0;
        column = 0;
    }
    else if (userInput == 2)
    {
        row = 0;
        column = 1;
    }
    else if (userInput == 3)
    {
        row = 0;
        column = 2;
    }
    else if (userInput == 4) //[1][0]
    {
        row = 1;
        column = 0;
    }
    else if (userInput == 5)
    {
        row = 1;
        column = 1;
    }
    else if (userInput == 6)
    {
        row = 1;
        column = 2;
    }
    else if (userInput == 7) //[2][0]
    {
        row = 2;
        column = 0;
    }
    else if (userInput == 8)
    {
        row = 2;
        column = 1;
    }
    else if (userInput == 9)
    {
        row = 2;
        column = 2;
    }
*/

    userInput = userInput - 1; //array start from 0, so 1 biog korci
    int row = indexes[userInput][0];
    int column = indexes[userInput][1];

    //===================
    if (arr[row][column] == 'X' || arr[row][column] == '0')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int winningLogic()
{
    if (
        (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X') /*vertical or row borabor */ ||
        (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X') /*vertical or row borabor*/ ||
        (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X') /*vertical or row borabor*/ ||
        (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X') /*horizontal or col borabor*/ ||
        (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X') /*horizontal or col borabor*/ ||
        (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X') /*horizontal or col borabor*/ ||
        (arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X') /*cross borabor*/ ||
        (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X') /*cross borabor*/
    )
    {
        return 1;
    }
    else if (
        (arr[0][0] == '0' && arr[0][1] == '0' && arr[0][2] == '0') /*vertical or row borabor */ ||
        (arr[1][0] == '0' && arr[1][1] == '0' && arr[1][2] == '0') /*vertical or row borabor*/ ||
        (arr[2][0] == '0' && arr[2][1] == '0' && arr[2][2] == '0') /*vertical or row borabor*/ ||
        (arr[0][0] == '0' && arr[1][0] == '0' && arr[2][0] == '0') /*horizontal or col borabor*/ ||
        (arr[0][1] == '0' && arr[1][1] == '0' && arr[2][1] == '0') /*horizontal or col borabor*/ ||
        (arr[0][2] == '0' && arr[1][2] == '0' && arr[2][2] == '0') /*horizontal or col borabor*/ ||
        (arr[0][2] == '0' && arr[1][1] == '0' && arr[2][0] == '0') /*cross borabor*/ ||
        (arr[0][0] == '0' && arr[1][1] == '0' && arr[2][2] == '0') /*cross borabor*/
    )
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

void reset() //rest all array
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = '\0';
        }
    }
}

void showResult()
{
    printf("Player 1 Wins : %d\n", playerOneWin);
    printf("Player 2 Wins : %d\n", playerTwoWin);
}