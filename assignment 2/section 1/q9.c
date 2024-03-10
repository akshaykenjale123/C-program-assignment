#include<stdio.h>
int main()
{
int month,year,days;
printf("enter year");
scanf("%d",&year);
printf("enter month");
scanf("%d",&month);


if(month<1 || month>12)
{
printf("invalid month\n");

return 1;
}
if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12 )
  printf("31 days are in month and 366 days in year\n");
  else if(month==4 || month==6 || month==9 || month==11)
  printf("30 days in month and 365 days in year");
  
  
  else
  {
  if((year % 4 == 0 && year % 100 !=0) || (year % 400 == 0))
  printf("29 days are in  month and 366 days in year");
  
  else 
   printf("28 days are in  month and 365 days in year");
   }
  
  // printf("no.of days in %d %d\n",month,year,days);
  
  return 0;
  
  }








