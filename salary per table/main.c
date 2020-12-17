/*
Example 2.6: Write a program to calculate the salary as per the
following table:
Gender Years of Service Qualifications Salary
Male         >= 10       Post-Graduate 15000
Male         >= 10         Graduate    10000
Male         < 10        Post-Graduate 10000
Male         < 10          Graduate     7000
Female       >= 10       Post-Graduate 12000
Female       >= 10         Graduate     9000
Female       < 10        Post-Graduate 10000
Female       < 10          Graduate     6000

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Years_of_service;
    char Qual,gender;
    printf("Hello world!\n");
    //taking the required details of the employee.
    printf("\n Please enter the Qualification, Gender of the Employee and Years of service \n");
    scanf("%c  %c %d", &Qual, &gender, &Years_of_service);
    printf("\n %c %c %d \n", Qual, gender ,Years_of_service);

    //if the employee is male
 if( gender == 'M' )
  {
   //if the years of service are more than 10
   if (Years_of_service >= 10)
   {
       //if the Qualification is Post-Graduate.
       if ( Qual == 'P')
       {
           printf(" \n The salary is 15000 \n ");
       }
       // if the employee is Graduate.
       else
       {
           printf(" \n The salary is 10000 \n ");
       }
   }

       // if the employee is male but the years of service is less than 10 years.
       else
       {
           //if the employee is post-Graduate.
           if ( Qual == 'P')
       {
           printf(" \n The salary is 10000 \n ");
       }
       //if the employee is Graduate.
       else
       {
           printf(" \n The salary is 7000 \n ");
       }

       }
   }
   //if the employee is female.
   else
   {
         //if employee is female and the years of service are equal to or more than 10
   if (Years_of_service >= 10)
   {
       //if the employee if female and Qualification is Post-Graduate.
       if ( Qual == 'P')
       {
           printf(" \n The salary is 12000 \n ");
       }
       //if the employee is female and the qualification is Graduate.
       else
       {
           printf(" \n The salary is 9000 \n ");
       }
   }

       // if the employee is female but the years of service is less than 10 years.
       else
       {
           // if the qualification is Post-Graduate
           if ( Qual == 'P')
       {
           printf(" \n The salary is 10000 \n ");
       }
       //if the qualification is Graduate.
       else
       {
           printf(" \n The salary is 6000 \n ");
       }

       }

   }

    return 0;
}
