// Programmer is : Zahra Yaghubi
// ID : 95440288

#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int binarySearch(int array[], int a, int b, int c)
{
    if (b >= a) { 
        int avg = a + (b - a) / 2; 
        if (array[avg] == c)
            return avg;
        if (array[avg] > c)
            return binarySearch(array, a, avg - a, c);
        return binarySearch(array, avg + 1, b, c);
    }
    return -1;
}

int main(void)
{
    int array[10];
    array[] = { 8,13,19,25,34,42,48,55,61,70};
    int num = sizeof(array) / sizeof(array[0]);
    int number;
    cout<<"Please Enter the Number : ";
    cin>>number;
    variable = num - 1;
    int output = binarySearch(array, 0, variable, number);
    cout<<"\n";
    if (output == -1)
        cout<<"This number is NOT in the array !";
    else
        cout<<"This number is in the array by " << output << " index";
    return 0;
}