#include<stdio.h>
#include<limits.h>
int main()
{

printf("----------------------------------------------------------------\n");

printf("Data type           FS           Size           Range           \n");

printf("----------------------------------------------------------------\n");

printf("signed char         %%c          %d             %d to %d        \n",sizeof(char),SCHAR_MIN,SCHAR_MAX);

printf("----------------------------------------------------------------\n");

printf("int                 %%d          %d             %d to %d        \n",sizeof(int),INT_MIN,INT_MAX);

printf("----------------------------------------------------------------\n");

printf("short int           %%hd         %d             %hd to %hd      \n",sizeof(short int),SHRT_MIN,SHRT_MAX);

printf("----------------------------------------------------------------\n");

printf("char                 %c          %d             %d to %d        \n",sizeof(char int),SHRT_MIN,SHRT_MAX);

printf("----------------------------------------------------------------\n");

printf("long int            %ld          %d             %d to %d        \n",sizeof(long int),SHRT_MIN,SHRT_MAX);






 return 0;
}


