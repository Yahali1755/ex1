/******************
Name: Yahali Mashiach
ID: 214007346
Assignment: ex1
*******************/
#include <stdio.h>

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
    int evenOrOddSummary;
    int hexadecimaNumber;
    int octalNumber;

    // Ascii
    printf("Ascii:\nPlease enter a character\n");
    asciiChar = getchar();
    printf("Its numerical value is: %d", asciiChar);
    printf("\n0 for even, 1 for odd: %d\n", asciiChar & 1);
    /*. Scan one character from the user.
        Then, refer to it as an integer.
        a. Print its value.
        b:
        Print “0”, if its integer representation is even.
        print “1” if its integer representation is odd. */

    // 2's complement and other representations
    printf("\n2's complement to other representations:\n");
    printf("Please enter a negative integer\n");
    scanf("%d", &negativeNumber);
    printf("1's complement: -%d", ~negativeNumber);
    printf("\nunsigned: %u\n", negativeNumber);
    /*. Scan a negative integer. [2’s complement].
        Print its value in 1’s complement.
        Print its value as unsigned. */

    // Shifting right and left
    printf("\nShifting right and left:\n");
    printf("Please enter 3 integers\n");
    scanf("%d %d %d", &numberToShift, &shiftRightByNumber, &shiftLeftByNumber);
    printf("After shifting right and left: %d\n", (numberToShift >> shiftRightByNumber) << shiftLeftByNumber);
    /*. Scan 3 integers.
        The first one - the value you will play with.
        The second and the third - how much to shift right and left, respectively.
        Print the value after shifting right and then shifting left. */

    // Even - Odd
    printf("\nEven - Odd:\n");
    printf("Please enter 3 integers\n");
    scanf("%d %d %d", &evenOrOddFirstNumber, &evenOrOddSecondNumber, &evenOrOddThirdNumber);
    evenOrOddSummary = (evenOrOddFirstNumber & 1) + (evenOrOddSecondNumber & 1) + (evenOrOddThirdNumber & 1);
    printf("0 - most of them are even, 1 - most of them are odd: %d\n", evenOrOddSummary / 2);
    /* Scan 3 Integers.
    If at least two of them are even - print 0.
    If at least two of them are odd - print 1. */

    // Different Bases
    printf("\nDifferent Bases:\n");
    printf("Please enter two numbers in octal and hexadecimal bases\n");
    scanf("%o %x", &octalNumber, &hexadecimaNumber);
    printf("LSBs: %d %d\n", octalNumber & 1, hexadecimaNumber & 1);
    printf("MSBs: %d %d\n", (octalNumber >> (sizeof(int) * 8 - 1)) & 1, (hexadecimaNumber >> (sizeof(int) * 8 - 1)) & 1);
    printf("Bye!");
    /*  Scan two numbers:
        One in octal base, one in Hexadecimal base.
        Print their LSB’s.
        Print their MSB’s. */

    return 0;
}
