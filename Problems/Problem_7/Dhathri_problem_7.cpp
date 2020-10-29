/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


int main()
{int i,n,s=0;
 cout<<"Enter the value of n";
 cin>>n;
 for(i=1;i<=n;++i)
  {cout<<i<<" ";
   s=s+i;
  }
  cout<<"Sum of n natural numbers"<<s;

    return 0;
}
