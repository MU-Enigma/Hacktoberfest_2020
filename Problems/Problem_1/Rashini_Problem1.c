#include <stdio.h>
char week();
char check();
int main()
{
    week();
    
}
char week(){
	int week;
    printf("Enter week number (1-7): ");
    scanf("%d", &week);


    if(week == 1)
    {
        printf("Monday");
        check();
    }
    else if(week == 2)
    {
        printf("Tuesday");
        check();
    }
    else if(week == 3)
    {
        printf("Wednesday");
        check();
    }
    else if(week == 4)
    {
        printf("Thursday");
        check();
    }
    else if(week == 5)
    {
        printf("Friday");
        check();
    }
    else if(week == 6)
    {
        printf("Saturday");
        check();
    }
    else if(week == 7)
    {
        printf("Sunday");
        check();
    }
    else
    {
        printf("Invalid Input! Please enter week number between 1-7.");
    }

    return 0;
}
char check(){
		printf("\ndo you want serch again..? (Y/N)\n ");
	
	if(getch()=='y'){
				week();
				}
				
			else{
				return 0;
				}
}

