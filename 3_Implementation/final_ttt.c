#include <stdio.h>

char square_values[10] = {'o','1','2','3','4','5','6','7','8','9'};

void gameBoard()
{
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square_values[1], square_values[2], square_values[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square_values[4], square_values[5], square_values[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square_values[7], square_values[8], square_values[9]);

    printf("     |     |     \n\n");
}


int checkWinner()
{
    if (square_values[1] == square_values[2] && square_values[2] == square_values[3])
        return 1;
        
    else if (square_values[4] == square_values[5] && square_values[5] == square_values[6])
        return 1;
        
    else if (square_values[7] == square_values[8] && square_values[8] == square_values[9])
        return 1;
        
    else if (square_values[1] == square_values[4] && square_values[4] == square_values[7])
        return 1;
        
    else if (square_values[2] == square_values[5] && square_values[5] == square_values[8])
        return 1;
        
    else if (square_values[3] == square_values[6] && square_values[6] == square_values[9])
        return 1;
        
    else if (square_values[1] == square_values[5] && square_values[5] == square_values[9])
        return 1;
        
    else if (square_values[3] == square_values[5] && square_values[5] == square_values[7])
        return 1;
        
    else if (square_values[1] != '1' && square_values[2] != '2' && square_values[3] != '3' &&
        square_values[4] != '4' && square_values[5] != '5' && square_values[6] != '6' && square_values[7] 
        != '7' && square_values[8] != '8' && square_values[9] != '9')
        return 0;
    else
        return  - 1;
}

int main()
{
    int player = 1, i, choice;
    char mark;
    do
    {
        gameBoard();
        player = (player%2) ? 1 : 2;

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square_values[1] == '1')
            square_values[1] = mark;
            
        else if (choice == 2 && square_values[2] == '2')
            square_values[2] = mark;
            
        else if (choice == 3 && square_values[3] == '3')
            square_values[3] = mark;
            
        else if (choice == 4 && square_values[4] == '4')
            square_values[4] = mark;
            
        else if (choice == 5 && square_values[5] == '5')
            square_values[5] = mark;
            
        else if (choice == 6 && square_values[6] == '6')
            square_values[6] = mark;
            
        else if (choice == 7 && square_values[7] == '7')
            square_values[7] = mark;
            
        else if (choice == 8 && square_values[8] == '8')
            square_values[8] = mark;
            
        else if (choice == 9 && square_values[9] == '9')
            square_values[9] = mark;
            
        else
        {
            printf("Invalid move ");
            player--;
        }
        
        i = checkWinner();
        player++;
        
    }while (i ==  - 1);
    
    gameBoard();
    
    if (i == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");

    return 0;
}

