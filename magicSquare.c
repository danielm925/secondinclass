#include <stdio.h>
int LoShuMagicSquare();

int main()
{
    int workingMagicSquare[3][3] = {{4,9,2},
                                    {3,5,7},
                                    {8,1,6}};

    int nonWorkingMagicSquare[3][3] = {{1,4,8},
                                       {3,9,2},
                                       {5,7,6}};

    LoShuMagicSquare(workingMagicSquare); //Test Working
    LoShuMagicSquare(nonWorkingMagicSquare); //Test NonWorking

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
        }
    }
    else
    {
        printf("This is not a Lo Shu Magic Square!\n");
    }
    return 0;
}
