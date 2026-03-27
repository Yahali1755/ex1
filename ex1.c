/******************
Name: Yahali Mashiach
ID: 214007346
Assignment: ex1
*******************/
#include <stdio.h>

int main()
{
    int negativeNumber;
    int asciiChar;
    int numberToShift;
    int shiftLeftByNumber;
    int shiftRightByNumber;
    int evenOrOdd1;
    int evenOrOdd2;
    int evenOrOdd3;
    int hexaNumber;
    int octalNumber;
    int firstNumberLsb;
    int secondNumberLsb;
    int thirdNumberLsb;
    const int BITS_TO_SHIFT_RIGHT_BY = 31;

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
    /*. 
    Scan 3 integers.
    The first one - the value you will play with.
    The second and the third - how much to shift right and left, respectively.
    Print the value after shifting right and then shifting left. 
    */
    printf("\nShifting right and left:\n");
    printf("Please enter 3 integers\n");
    scanf("%d %d %d", &numberToShift, &shiftRightByNumber, &shiftLeftByNumber);
    printf("After shifting right and left: %d\n", (numberToShift >> shiftRightByNumber) << shiftLeftByNumber);

    // Even - Odd
    /* 
    Scan 3 Integers.
    If at least two of them are even - print 0.
    If at least two of them are odd - print 1. 
    */
    printf("\nEven - Odd:\n");
    printf("Please enter 3 integers\n");
    scanf("%d %d %d", &evenOrOdd1, &evenOrOdd2, &evenOrOdd3);
    firstNumberLsb = evenOrOdd1 & 1;
    secondNumberLsb = evenOrOdd2 & 1;
    thirdNumberLsb = evenOrOdd3 & 1;
    printf("0 - most of them are even, 1 - most of them are odd: %d\n", (firstNumberLsb & secondNumberLsb) |
    (secondNumberLsb & thirdNumberLsb) | (firstNumberLsb & thirdNumberLsb));

    // Different Bases
    /*  
    Scan two numbers:
    One in octal base, one in Hexadecimal base.
    Print their LSB’s.
    Print their MSB’s. 
    */
    printf("\nDifferent Bases:\n");
    printf("Please enter two numbers in octal and hexadecimal bases\n");
    scanf("%o %x", &octalNumber, &hexaNumber);
    printf("LSBs: %d %d\n", octalNumber & 1, hexaNumber & 1);
    printf("MSBs: %d %d\n", (octalNumber >> BITS_TO_SHIFT_RIGHT_BY) & 1, (hexaNumber >> BITS_TO_SHIFT_RIGHT_BY) & 1);
    printf("Bye!");

    return 0;
}
