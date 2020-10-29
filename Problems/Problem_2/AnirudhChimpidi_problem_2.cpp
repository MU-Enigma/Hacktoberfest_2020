#include<iostream>
using namespace std;

int main() {
    int num, fact, val=0;
    cout<<"N = ";
    cin>>num;
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
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}