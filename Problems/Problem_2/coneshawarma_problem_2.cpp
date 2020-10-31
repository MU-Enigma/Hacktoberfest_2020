  
#include<iostream>

int main() {
    int num, fact, val=0;
    std::cout<<"N = ";
    std::cin>>num;
    int temp=num;

    while (num!=0) {
        fact=num%10;
        if (temp%fact==0) {
            val=1;
            break;
        }
        num/=10;
    }

    if (val==1)
        std:cout<<"YES";
    else
        std::cout<<"NO";

    return 0;
}