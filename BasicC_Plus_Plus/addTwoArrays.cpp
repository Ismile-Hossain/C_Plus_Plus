/*
Write a program to add the corresponding elements of two arrays, each of size N and print the sums. N can be any integer between 1 and 100. 

Instructions:

We have defined an integer variable N for you.
We have provided the code to get the input for variable N.
We have defined integer arrays numArrayA[i],numArrayB[i]  and sumArray[i] .
We have provided the code to get the input for the array elements.
You have to write the logic to add the array elements.
Store the sum values in respective elements of variable 
Print all the elements of  with space between them
Sample Input:
N = 3
numArrayA[i] = 3 9 8
numArrayB[i] = 8 12 74

Sample Output:
11 21 82
*/

#include <iostream>
using namespace std;

int main(void) {
    int N, i;
    cin >> N;
    // Declare the two arrays
    int numArrayA[N], numArrayB[N], sumArray[N];
    
    for(i=0;i<N;i++) sumArray[i]=0;
    
    // Get the numArrayA
    for (i=0; i<N; i++) {
        cin >> numArrayA[i];
    }
    
    // Get the numArrayB
    for (i=0; i<N; i++) {
       cin >> numArrayB[i];
    }
    
    // Write your logic here:
    for(i=0;i<N;i++) 
    {
        sumArray[i]=numArrayA[i]+numArrayB[i];
    }

    // Print the sumArray
    for (i=0; i<N; i++) {
        cout << sumArray[i] << " ";
    }
    cout << endl;
    return 0;
}
