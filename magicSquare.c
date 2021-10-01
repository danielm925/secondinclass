#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int LoShuMagicSquare();
int createRandomArray();
int randomArray[3][3];
int arrayAttempt[3][3];
int success;

int main()
{
    int attempts = 0;

    /* practice case
    int workingMagicSquare[3][3] = {{4,9,2},
                                    {3,5,7},
                                    {8,1,6}};

    int nonWorkingMagicSquare[3][3] = {{1,4,8},
                                       {3,9,2},
                                       {5,7,6}};

    LoShuMagicSquare(workingMagicSquare); //Test Working
    LoShuMagicSquare(nonWorkingMagicSquare); //Test NonWorking */

    do
    {
        createRandomArray(arrayAttempt);
        attempts++;
    } while (success == 0);
    
    
    printf("The total number of squares generated and testted before success was: %d\n", attempts);
    printf("The array that worked was:\n");
    printf("[%d %d %d]\n", randomArray[0][0], randomArray[0][1], randomArray[0][2]);
    printf("[%d %d %d]\n", randomArray[1][0], randomArray[1][1], randomArray[1][2]);
    printf("[%d %d %d]\n", randomArray[2][0], randomArray[2][1], randomArray[2][2]);

}

int LoShuMagicSquare(int squareArray[3][3])
{
    int magicSum = 15;

    if(squareArray[0][0] + squareArray[0][1] + squareArray[0][2] == magicSum)   //Check 1st Row
    {
        if(squareArray[1][0] + squareArray[1][1] + squareArray[1][2] == magicSum)   //Check 2nd Row
        
        if(squareArray[2][0] + squareArray[2][1] + squareArray[2][2] == magicSum)   //Check 3rd Row
            
        if(squareArray[0][0] + squareArray[1][0] + squareArray[2][0] == magicSum)   //Check 1st Column
                
        if(squareArray[0][1] + squareArray[1][1] + squareArray[2][1] == magicSum)   //Check 2nd Column
                    
        if(squareArray[0][2] + squareArray[1][2] + squareArray[2][2] == magicSum)   //Check 3rd Column
                        
        if(squareArray[0][0] + squareArray[1][1] + squareArray[2][2] == magicSum)   //Check 1st Diagonal
                        
        if(squareArray[0][2] + squareArray[1][1] + squareArray[2][0] == magicSum)   //Check 2nd Diagonal
        {
            printf("This is a Lo Shu Magic Square!\n");
            success = 1;
        }
    }
    else
    {
        printf("This is not a Lo Shu Magic Square!\n");
        success = 0;
    }
    return 0;
}

int createRandomArray(int squareArray[3][3])
{
    /* Variables for array*/
    int randomArray[3][3];
    int exclusiveNumbers[9] = {0,0,0,0,0,0,0,0,0};

    /* Variables for random Generator*/
    int n, i, k;
    time_t t;
    n = 10;
    i = 0;
    

    /* Init random number generator */
    srand((unsigned) time(&t));

    
    randomArray[0][0] = (rand() % 9) + 1;

    do
    {
        randomArray[0][1] = (rand() % 9) + 1;
    } while (randomArray[0][1] == randomArray[0][0]);

    do
    {
        randomArray[0][2] = (rand() % 9) + 1;
    } while (randomArray[0][2] == randomArray[0][0]
        || randomArray[0][2] == randomArray[0][1]);
    do
    {
        randomArray[1][0] = (rand() % 9) + 1;
    } while (randomArray[1][0] == randomArray[0][0]
        || randomArray[1][0] == randomArray[0][1]
        || randomArray[1][0] == randomArray[0][2]);
    do
    {
        randomArray[1][1] = (rand() % 9) + 1;
    } while (randomArray[1][1] == randomArray[0][0]
        || randomArray[1][1] == randomArray[0][1]
        || randomArray[1][1] == randomArray[0][2]
        || randomArray[1][1] == randomArray[1][0]);
    do
    {
        randomArray[1][2] = (rand() % 9) + 1;
    } while (randomArray[1][2] == randomArray[0][0]
        || randomArray[1][2] == randomArray[0][1]
        || randomArray[1][2] == randomArray[0][2]
        || randomArray[1][2] == randomArray[1][0]
        || randomArray[1][2] == randomArray[1][1]);
    do
    {
        randomArray[2][0] = (rand() % 9) + 1;
    } while (randomArray[2][0] == randomArray[0][0]
        || randomArray[2][0] == randomArray[0][1]
        || randomArray[2][0] == randomArray[0][2]
        || randomArray[2][0] == randomArray[1][0]
        || randomArray[2][0] == randomArray[1][1]
        || randomArray[2][0] == randomArray[1][2]);
    do
    {
        randomArray[2][1] = (rand() % 9) + 1;
    } while (randomArray[2][1] == randomArray[0][0]
        || randomArray[2][1] == randomArray[0][1]
        || randomArray[2][1] == randomArray[0][2]
        || randomArray[2][1] == randomArray[1][0]
        || randomArray[2][1] == randomArray[1][1]
        || randomArray[2][1] == randomArray[1][2]
        || randomArray[2][1] == randomArray[2][0]);
    do
    {
        randomArray[2][2] = (rand() % 9) + 1;
    } while (randomArray[2][2] == randomArray[0][0]
        || randomArray[2][2] == randomArray[0][1]
        || randomArray[2][2] == randomArray[0][2]
        || randomArray[2][2] == randomArray[1][0]
        || randomArray[2][2] == randomArray[1][1]
        || randomArray[2][2] == randomArray[1][2]
        || randomArray[2][2] == randomArray[2][0]
        || randomArray[2][2] == randomArray[2][1]);
    for(int row = 0; row < 3; row++)
    {
        for(int colm = 0; colm <3; colm++)
        {
            squareArray[row][colm] = randomArray[row][colm];
        }
    }
    return 0;
}