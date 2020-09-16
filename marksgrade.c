#include<stdio.h>
main()
{
    printf("enter your marks");
    int marks=0;
    scanf("%d", &marks);
    if (marks>=85 && marks<=100)
    {
        printf("The Grade is A");
    }
        else
        {
        if (marks>=70 && marks<=84)
        {
            printf("The Grade is B");
        }
          else
         {

          if (marks>=55 && marks<=69)
          {
          printf("The Grade is c");
          }
          else
         {
           if (marks>=40 && marks<=54)
          {
             printf("The Grade is D");
            }
               else
               {
                 if (marks<40)
                  {
                     printf("The Grade is Fail");
                    }
                       }
                       }
                       }
                       }
}
