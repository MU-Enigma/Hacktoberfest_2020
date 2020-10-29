/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


int main()
{int i,j,n;
 cout<<"Enter the value of n";
 cin>>n;
 for(i=1;i<=n;i++)
 {
    for(j=1;j<=i;++j)
    cout<<j<<" ";
    cout<<endl;
 }

    return 0;
}


