#include<iostream>
#include<string.h>
using namespace std;

int main() {

    int year = 2020, year_set[20], count = 0;

    cout<<"The next 20 leap years after "<<year<<":\n";
    for(int i = 1; count < 20; i++) {

        year++;
        if(year % 4 == 0) {

            year_set[count] = year;
            count++;
        }
    }
    for(count = 0; count < 20; count ++)
        cout<<year_set[count]<<"\t";

    return 0;
}