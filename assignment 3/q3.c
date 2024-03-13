#include <stdio.h>

int main() 
/*{
// reverse number
 int num, reverse = 0, rem;

  printf("Enter the number: ");
  scanf("%d", &num);

  while (num != 0) 
  {
    rem = num % 10;
    reverse = reverse * 10 + rem;
    num =num/10;
  }

  printf("Reversed number = %d", reverse);

  return 0;
}



{
//sum of digits
int num,sum =0,rem;
printf("enter the number:");
scanf("%d",&num);
while(num !=0)
{
rem = num % 10;
sum = sum +rem;
num =num/10;
}
printf("sum of digit = %d",sum);
return 0;
}





{
//palindrome
int num,rem,sum=0,temp;
printf("enter the number=");
scanf("%d",&num);
temp=num;
while(num>0)
{
rem = num % 10;
sum =(sum*10)+rem;
num=num/10;
}
if(temp==sum)
printf("palindrome number");
else
printf("not palindrome");
*/
//armstrong number
    
{    
int num,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&num);    
temp=num;    
while(num>0)    
{    
r=num%10;    
sum=sum+(r*r*r);    
num=num/10;    
}    
if(temp==sum)    
printf("armstrong  number ");    
else    
printf("not armstrong number");    
return 0;  
}   

  


