#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    system("cls");
    char ch = 'y';
    int n;
    long int sum;
    while(ch == 'y' )
    {
        cout<<"\nEnter value of n : ";
        cin>>n;
        sum=(n*(n+1))/2;
        cout<<"Sum : "<<sum;
        cout<<"\n\nDo you wish to continue(y/n) : ";
        cin>>ch;
    }
    return 0;
}
