
/*
Alex Hughes
CS 110B
5/11/19
Professor Dave
Assignment 15.1

Assignment calls for a program that contains two void functions. One function named reverseWithinBounds that takes an
argument of an array of characters and two arguments that are bounds for array indices. The function needs to reverse
the array that has indices between the two bounds.

The second function is named reverseCString and takes a single character argument and reverses it. It includes the a
call to the function from the first part of this assignment.
 */


#include <iostream>

using namespace std;


void reverseWithinBounds(char[], int, int);
void reverseCstring(char[]);

//Main
int main()
{
    char str[] = {'A', 'B', 'C', 'D', 'E', '\0'};

    char name[] = "Hello how are you?";


    cout << "Char array before reversing : " << str << " \n";

    reverseWithinBounds(str, 1, 4);

    cout << "Char array after reversing with bounds (1, 4): " << str << " \n";

    cout << "String before reversing: " << name << " \n";

    reverseCstring(name);

    cout << "String after reversing: " << name << " \n";

    cout << "\n\n";

    return 0;
}



// has an argument that is an array of characters and two arguments that are bounds on array indices. The function
// reverses the order of those entries in the array whose indices are between the two bounds
void reverseWithinBounds(char str[], int lowerBound, int upperBound)
{
    int i, j;
    char temp;

    j = lowerBound;

    for(i=upperBound; i>(upperBound)/2; i--)
    {
// swap
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j++;
    }
}





//Function that reverses the string and takes one char str argument to be reversed
void reverseCstring(char str[])
{
    int lBound = 0, hBound = strlen(str)-1;
    reverseWithinBounds(str, lBound, hBound);
}



/* OUTPUT:
/Users/alexhughes/CLionProjects/15_1/cmake-build-debug/15_1

Char array before reversing : ABCDE
Char array after reversing with bounds (1, 4): AEDCB
String before reversing: Hello how are you?
String after reversing: ?uoy era woh olleH

*/