#include<iostream>
using namespace std;
int main()
{
    int num ,nnum, mod , last;
    last =0;
    cout << " enter a number";
    cin >> num;
    nnum=num;
    while (nnum != 0 )
    {
       last = nnum %10 ;
       nnum/=10;
       if (num%last == 0;last !=0 )
       {
           cout << "yes\n";
       }
       else 
       {
           cout << "no\n";
       }
    } 
}
