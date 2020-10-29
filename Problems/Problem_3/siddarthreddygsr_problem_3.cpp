#include<iostream>
using namespace std;
int main()
{   
    int a,b,c;
    cout << "enter 3 numbers:";
    cin >> a >> b >> c ;
    if (a*a == b*b + c*c)
    {
        cout <<  a << ","<< b<< ","<< c;
    }
    else if (b*b==c*c+a*a)
    {
        cout <<  b << ","<< c<< ","<< a;
    }
    else if(c*c==b*b+a*a)
    {
        cout << c << ","<< b<< ","<< a;
    }
    else 
    {
        cout << "nope";
    }
}