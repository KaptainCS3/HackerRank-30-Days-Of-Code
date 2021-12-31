#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int x = 2; double y = 2.0; char str[] = "is the best place to learn and practice coding!";
    // Read and save an integer, double, and String to your variables.
    scanf("%d", &x);
    scanf("%lf", &y);
    scanf("%[^\n]s", s);
    // Print the sum of both integer variables on a new line.
    printf("%d\n", i + x);
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n", d + y);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s%s", s, str);
    return 0;