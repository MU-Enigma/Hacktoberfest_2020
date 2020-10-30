#include <iostream>

int main() 
{
  int n=0;
  std::cout <<"Enter value of n"<<std::endl;
  std::cin>>n;
  int n1=n;
  int check=0;
  int length = 0;
    while(n1 != 0)
    {
      n1 = n1/10;
      length++;
    }
  
  int s = 0;
  int n2= n;
  for (int i = 0; i <= length; i++)
  {
    s = n2%10;
    if (s != 0)
    {
    if (n % s == 0)
    check = check + 1;    
    }
    n2 = n2/10;
  }
  if (check > 0)
  std::cout <<"YES";
  else if( check == 0)
  std::cout <<"NO";
}