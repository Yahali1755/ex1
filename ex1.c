/******************
Name:
ID:
Assignment:
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE. not even "==, &&, ||, !="

int main()
{

    int asciiChar;
    int negativeNumber;
    int numberToShift;
    int shiftLeftByNumber;
    int shiftRightByNumber;
    int evenOrOddFirstNumber;
    int evenOrOddSecondNumber;
    int evenOrOddThirdNumber;
    int hexadecimaNumber;
    int octalNumber;
    const int bitsToShiftRightBy = 31;
    int firstNumberLsb;
    int secondNumberLsb;
    int thirdNumberLsb;

    // Ascii
    /*. 
    Scan one character from the user.  
    Then, refer to it as an integer.
    a. Print its value.
    b:
    Print “0”, if its integer representation is even.
    print “1” if its integer representation is odd.
    */
    printf("Ascii:\nPlease enter a character\n");
    asciiChar = getchar();
    printf("Its numerical value is: %d", asciiChar);
    printf("\n0 for even, 1 for odd: %d\n", asciiChar & 1);

    // 2's complement and other representations
    /*. 
    Scan a negative integer. [2’s complement].
    Print its value in 1’s complement.
    Print its value as unsigned. 
    */
    printf("\n2's complement to other representations:\n");
    printf("Please enter a negative integer\n");
    scanf("%d", &negativeNumber);
    printf("1's complement: %d", -(~negativeNumber));
    printf("\nunsigned: %u\n", negativeNumber);

    // Shifting right and left
    printf("\nShifting right and left:\n");
    /*. Scan 3 integers.
        The first one - the value you will play with.
        The second and the third - how much to shift right and left, respectively.
        Print the value after shifting right and then shifting left. */

    // Even - Odd
    printf("\nEven - Odd:\n");
    /* Scan 3 Integers.
    If at least two of them are even - print 0.
    If at least two of them are odd - print 1. */

    // Different Bases
    printf("\nDifferent Bases:\n");
    /*  Scan two numbers:
        One in octal base, one in Hexadecimal base.
        Print their LSB’s.
        Print their MSB’s. */

    printf("Bye!\n");

    return 0;
}
