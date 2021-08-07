#include <stdio.h>

// main () 
// {
//     helloWorldExercise();
//     printExercise();
//     scanExercise();
// }

// void helloWorldExercise () 
// {
//     int x = 5;
//     printf("Hello World");

// }

// void printExercise ()
// {
//     int x = 32;
//     x %= 2;
//     printf("%i\n", x);

// }

// int main() //scanExercise
// {
//     int a, b;

//     printf("Please input the first number to add: ");
//     scanf("%d", &a);
//     printf("\nSecond number: ");
//     scanf("%d", &b);

//     int c = a + b;

//     printf("\nThe result is %d", c);
// }

// int main () { //Type Casting Exercise

//   printf("The number of eggs for the day: ");

//     int eggs;
//     scanf("%i", &eggs);

//     double dozen;
//     dozen = (double) eggs / 12;     //type casting allows eggs to be converted from int to double
// //     dozen = eggs / 12;      //this approach will be incorrect since the eggs variable is integer, 
// //                             //the output for the operation will be in integer and then the result 
// //                             //will be saved in dozen as double i.e. 18 / 2 will be 1.000000 instead of 1.5
// //     dozen = ((double) (eggs / 12));     //enclosing the operation before casting it to double will also 
// //                                         //be the same as the previous approach. It will also be computed 
// //                                         //as integer and then be converted after.

//     printf("You have %f dozen of eggs", dozen);

//  }

// int main()  //Strings Exercise
// {
//     char name[31];
//     printf("Hi, what's your name? ");
//     scanf("%s", name);

//     printf("Hello, %s!\n", name);
//     printf("Have a nice day!");

// }

// int main()  //Int Double and Float Exercise
// {
//     printf("%i   %f   %f", 1, 1111.1111, 1111.1111F);  
//     //output: 1    1111.111100    1111.111084
//     //integers uses whole number as a value. use %d for signed integers
//     //double is a more precise floating point numbers as its size is double than the float
//     //float. Characterized by F beside the decimal value, show a lesser precise value but 
//             //takes up less memory than the double

    
// }

// int main()  //Format Characters Exercise
// {
//     //25000 = 2.5 * 10^4
//     int num = 2.5e4;   //In scientific notation, we adjust the decimal point to until 1 decimal
//                         //number is on the left and take up any number that is not a zero
//                         //Then we add 'e' which is short for "x10" and then on what power of e (i.e. 4)

//         /*Conversion Characters
//         -----------------------
//         %f - Decimal notation
//         %e - Scientific notation
//         %g - Computer decides
//                 exp < -4 = Scientific notation
//                 exp >  5 = Scientific notation
//                 Otherwise, Decimal notation
//         */

//     double dogs = 2.5e4;
//     printf("f - %f\ne - %e\ng - %g\ng - %g\n", dogs, dogs, dogs, 2.5e6);
//     scanf("%lf", &dogs); //We use %lf for double precision numbers on scanf

// }

// int main() //ASCII and Int Conversion
// {
//     char ASCII;
//     printf("Please enter a character: ");
//     scanf(" %c", &ASCII);
//     printf("%c integer value is %d \n", ASCII, ASCII);

//     int integer;
//     printf("Please enter a number from 0 to 127: ");
//     scanf("%i", &integer);
//     printf("ASCII value of %i is %c \n", integer, integer);

//     char firstChar, secondChar, resultChar;
//     printf("Please enter first character: ");
//     scanf(" %c", &firstChar);
    
//     printf("Please enter second character: ");
//     scanf(" %c", &secondChar);

//     printf("\n");
//     resultChar = firstChar + secondChar;

//     printf("%c(%d) + %c(%d) = %c(%d) ", firstChar, firstChar, secondChar, secondChar, resultChar, resultChar);

// }

// #include <stdbool.h>
// int main()  //Boolean Exercise
// {
//     _Bool monixIsAlive = 9001;  //_Bool is used as a regular boolean where 0 is false, 1 and above is true.
//     bool monIsAlive = true; //bool is used when stdbool is imported.
//     printf("Is Mon still alive? %i\n", monIsAlive);

// }

// #include <math.h>
// int main()  //Coding Challenge
// {
// /**
// create a program that takes two doubles as inputs,
// calculates the hypotenuse of a right triangle
// and outputs it
// **/

// double firstAngle, secondAngle, hypotenuse;
// printf("Please insert first angle: ");
// scanf("%lf", &firstAngle);
// printf("Second angle: ");
// scanf("%lf", &secondAngle);

// //hypotenuse = pow( firstAngle, 2);
// hypotenuse = sqrt(pow(firstAngle, 2) + pow(secondAngle, 2));
// printf("The hypotenuse is: %f", hypotenuse);

// }

// #include <stdbool.h>
// int main()  //If Statement Exercise
// {
//      int age;
//      printf("Please input your age: ");
//      scanf("%i", &age);

//      if (age >= 18 && age <= 100)
//      {
//          printf("You are allowed. Please come in.");
//      }
     
//      else if (age > 0 && age < 18)
//      {
//          printf("Age below 18 is not allowed. Kindly leave the area. Thank you!");
//      } 

//      else 
//      {
//          printf("Age is invalid. Please re-run the program.");
//      }
// }

// #include <stdlib.h>
// #include <stdbool.h>
// #include <time.h>
// int main()  //Random Number Exercise
// {

//     int maxValue = 5;
//     srand(time(NULL));
//     system("cls");
//     START:  //label for goto statement where code can restart
//     printf("Guess the number from 0 - %i: ", maxValue);
//     int userInput;
//     scanf("%i", &userInput);

//     //Generate number and compare user input number
//     int randomNumber = rand() % maxValue + 1;
//     if (userInput > maxValue)
//     {
//         system("cls");
//         printf("Number out of range. Please try again.");
//         printf("\n\n");
//         goto START;
//     } 
//     else if (userInput == randomNumber)
//     {
//         system("cls");
//         printf("You won! %i is the correct number!\n", randomNumber);
//         printf("\n\n");
//     }
//     else 
//     {
//         system("cls");
//         printf("Wrong guess. Please try again. Correct number is %i", randomNumber);
//         printf("\n\n");
//         goto START;
//     }
// }

// int main()  //Ternary Operator Exercise
// {
//     double money = 20;
//     double cost = 18;

//     //Ternary Operator
//     money > cost ? printf("Yes you can buy it ") : printf("Sorry, you need %lf more money", cost - money);

//     /** //This works same as the ternary
//     if (money > cost )
//     {
//         printf("Yes you can buy it ");
//     } 
//     else
//     {
//         printf("Sorry, you need %lf more money", cost - money);
//     }
//     */
    
// }

/**
 * Output Exercise
 * 0
 * 1 0
 * 2 1 0
 * 3 2 1 0
 * 4 3 2 1 0
 * 5 4 3 2 1 0
*/

// #include <stdlib.h>
// int main()  //Printing Logic Exercise
// {
//     int max;
//     printf("Enter maximum number from 1 to 10: ");
//     scanf("%d", &max);

//     (max >= 1 && max <= 10) ? system("cls") : exit(0);
    
//     int i, k;
//     for (i = 0; i < max; i++)
//     {
//         for (k = i; k >= 0; k--)
//         {
//             printf("%i ", k);
//         }
//         printf("\n");
//     }
// }

// #include <stdlib.h>
// #include <math.h>
// int main()  //Prime Numbers Exercise
// {
//     int num;

//     do
//     {
//         printf("Please enter a number greater than 0 to check if it is a prime number: ");
//         scanf("%i", &num);
//     } while(num <= 0);

//     // //#SAMPLE CODE on WHILE LOOP        
//     // int comparator = num - 1;
//     // while(comparator > 1)
//     // {
//     //     if(num % comparator == 0)
//     //     {
//     //         printf("%i is NOT a prime number", num);
//     //         exit(0);
//     //     }
//     //     comparator--;
//     // }

//     // printf("%i is a PRIME NUMBER\n", num);

//     //Per math logic, you can start from the square root of the input to compare
//     //comparator = sqrt(num). Still comparator = num - 1 is doable but takes longer to process
//     for (int comparator = sqrt(num); comparator > 1; comparator--)
//     {
//         if(num % comparator == 0)
//         {
//             printf("%i is NOT a prime number", num);
//             exit(0);
//         }
//     }

//     printf("%i is a PRIME NUMBER", num);
// }


int main() // String Exercise
{
    printf("What is your favorite food? ");
    char faveFood[50];
    scanf("%49s", faveFood);
    printf("%s", faveFood);

    int charCount = 0;
    while(faveFood[charCount] != '\0')
    {
        charCount++;
    }

    printf("\nCharacter count is %d\n", charCount);
}