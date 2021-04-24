/*
Given the size and the elements of array A, print all the elements in reverse order.

Input:
First line of input contains, N - size of the array.
Following N lines, each contains one integer, i{th} element of the array i.e. A[i].

Output:
Print all the elements of the array in reverse order, each element in a new line.
*/

#include <iostream>
 
using namespace std;
 
int main() {
	int N;
	cin >> N;
	int A[N];
    for(int idx=0; idx<N; idx++)
    {
        cin>>A[idx];
    }
	for(int idx=N-1; idx>=0; idx--)
    {
        cout<<A[idx]<<endl;
    }
    return 0;										
			
}
