/*04
string functions
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="freeCodeCamp";
    ///length function->>
    cout<<str.length()<<endl;
    cout<<str[0]<<endl;
    str[0]='F';
    cout<<str<<endl;

    ///Find function->>
    cout<<str.find("Code")<<endl;
    cout<<str.find("Ca",0)<<endl; ///after 0 index the word Code start in which index

    ///sub string function->>
    cout<<str.substr(4)<<endl;
    cout<<str.substr(4,8)<<endl;///strat from 4 but print from 8 index
    return 0;
}
