/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{int n;
char ans;
 do{
 cout<<"Enter a number";
 cin>>n;
 switch(n)
 { case 1:cout<<"That's sunday!";
          break;
   case 2:cout<<"That's Monday!";
          break;
   case 3:cout<<"That's Tuesday!";
          break;
   case 4:cout<<"That's Wednesday!";
          break;
   case 5:cout<<"That's Thursday!";
          break;
   case 6:cout<<"That's Friday!";
          break;
   case 7:cout<<"That's Saturday!";
          break;
  }
  cout<<"\n Do you want to continue??";
  cin>>ans;
  }while(ans=='y'||ans=='Y');


    return 0;
}
