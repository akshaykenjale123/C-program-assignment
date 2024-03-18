#include<stdio.h>
void leap_year(int Year);
void leap_year_day(int Year,int month);
int main()
{

	int Year,month;

	printf("Enter a year : ");
	scanf("%d",&Year);
   
    printf("Enter a month : ");
    scanf("%d",&month);


	leap_year(Year);
	leap_year_day(Year,month);


	return 0;


}
void leap_year(int Year)
{
	if(Year%100==0)
	{
		if(Year%400==0)
		{
			printf("%d The year is leap year",Year);
		}
		else
		{
			printf("%d Not a leap year",Year);
		}

	}
	else
	{
		if(Year%4==0)
		{

			printf("%d The year is leap year",Year);
		}
		else
		{
			printf("%d The year is not leap year",Year);
		}

	}




}

void leap_year_day(int Year,int month)
{

	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12 )
	{
		printf(" 31 days are in this month 366 days in year \n");
	}

	else if(month==4 || month==6 || month==9 || month==11)
	{
		printf(" 30 days in month and 365 days in year");
	}

	else
	{
		if((Year % 4 == 0 && Year % 100 !=0) || (Year % 400 == 0))
		{
			printf(" 29 days are in  month and 366 days in year");
		}
		else{
			printf(" 28 days are in  month and 366 days in year");
		}

	}

}





