#include<stdio.h>
int main()
{
int num,i=1;
printf("enter the number:");
scanf("%d",&num);

while(i<=num)
{
      int j=1;
      while(j<=num)
           {
             if (i*j==num)
  
                 {
                   printf("%d X %d = %d\n",i,j,(i*j));
                 }
              j++;
            }
              i++;
}
}



	

