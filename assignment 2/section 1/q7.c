#include<stdio.h>
int main()
{

int year;
printf("enter the year");
scanf("%d",&year);

if( year % 400 == 0)
		printf("Leap Year and 366 days\n");
	else if( year %100 == 0 )
		printf("Not Leap and 365 days \n");
	else if( year % 4 == 0 )
		printf("Leap Year and 366 days \n");
	else
		printf("Not leap and 365 days\n");
		
		

if((year % 4 == 0) && (year % 100 !=0))
{
printf("leap year");
}
else if (year % 400 == 0)
{
printf("leap year");
}
else
{
printf("not leap year");
}

return 0;
}


if((year % 4 == 0 && year % 100 != 0)?printf("Leap1\n")  : (year % 400 == 0)?printf("Leap2\n") : printf("Non-Leap\n"));

}

