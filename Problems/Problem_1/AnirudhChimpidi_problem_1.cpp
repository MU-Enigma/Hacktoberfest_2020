#include<iostream>
#include<string.h>

using namespace std;

void WeekDay(int num) {

    char day[10];

    switch (num) {
        case 1:
            strcpy(day, "Monday");
            cout<<"That's "<<day<<"!\n";
            break;

        case 2:
            strcpy(day, "Tuesday");
            cout<<"That's "<<day<<"!\n";
            break;

        case 3:
            strcpy(day, "Wednesday");
            cout<<"That's "<<day<<"!\n";
            break;

        case 4:
            strcpy(day, "Thursday");
            cout<<"That's "<<day<<"!\n";
            break;

        case 5:
            strcpy(day, "Friday");
            cout<<"That's "<<day<<"!\n";
            break;

        case 6:
            strcpy(day, "Saturday");
            cout<<"That's "<<day<<"!\n";
            break;

        case 7:
            strcpy(day, "Sunday");
            cout<<"That's "<<day<<"!\n";
            break;
            
        default:
            cout<<"Invalid week number. Choose from 1 - 7\n";
            break;
    }
}

int main() {

    int week;
    char ch[10] = "y";

    do {

        if(strcmp(ch, "y") == 0) {

            cout<<"Enter a week number... ";
            cin>>week;
            WeekDay(week);

        } else if(strcmp(ch, "n") == 0) {

            break;

        } else {

            cout<<"No "<<ch<<". Please provide answer as y(yes) or n(no) \n";

        }
        
        cout<<"Another one? y or n.. ";
        cin>>ch;

    } while(strcmp(ch, "n") != 0);
    
    return 0;
}