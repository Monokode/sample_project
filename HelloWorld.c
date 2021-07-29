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