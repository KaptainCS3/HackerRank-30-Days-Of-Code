#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int x; double y; char str[105];
    // Read and save an integer, double, and String to your variables.
    scanf("%d %lf %s", &x, &y, s);
    // Print the sum of both integer variables on a new line.
    printf("%d\n", i + x);
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n", d + y);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s", s);
    printf("%s", str);
    return 0;
}