// C program to check if a number is Armstrong 
// using command line arguments 
  
#include <stdio.h> 
#include <stdlib.h> /* atoi */ 
  
// Function to calculate x raised to the power y 
int power(int x, unsigned int y) 
{ 
    if (y == 0) 
        return 1; 
    if (y % 2 == 0) 
        return power(x, y / 2) * power(x, y / 2); 
    return x * power(x, y / 2) * power(x, y / 2); 
} 
  
// Function to calculate order of the number 
int order(int x) 
{ 
    int n = 0; 
    while (x) { 
        n++; 
        x = x / 10; 
    } 
    return n; 
} 
  
// Function to check whether the given number is 
// Armstrong number or not 
int isArmstrong(int x) 
{ 
    // Calling order function 
    int n = order(x); 
    int temp = x, sum = 0; 
    while (temp) { 
  
        int r = temp % 10; 
        sum += power(r, n); 
        temp = temp / 10; 
    } 
  
    // If satisfies Armstrong condition 
    if (sum == x) 
        return 1; 
    else
        return 0; 
} 
  
// Driver code 
int main(int argc, char* argv[]) 
{ 
  
    int num, res = 0; 
  
    // Check if the length of args array is 1 
    if (argc == 1) 
        printf("No command line arguments found.\n"); 
  
    else { 
  
        // Get the command line argument and 
        // Convert it from string type to integer type 
        // using function "atoi( argument)" 
        num = atoi(argv[1]); 
  
        // Check if it is Armstrong 
        res = isArmstrong(num); 
  
        // Check if res is 0 or 1 
        if (res == 0) 
            // Print No 
            printf("No\n"); 
        else
            // Print Yes 
            printf("Yes\n"); 
    } 
    return 0; 
} 
