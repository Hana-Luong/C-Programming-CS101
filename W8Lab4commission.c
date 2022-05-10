#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*3. (Sales-Commission Calculator) One large chemical company pays its salespeople 
on a commission basis. The sales person receives $200 per week plus 9% of their 
gross sales for that week. Develop a C program that will input each person's gross 
sales for that week and will calculate and display that salesperson's earnings.

Process one salesperson's figures at a time.*/
  

int main()
{             
    char name[50];
    double grossSale;  
    const double baseSalary = 200;  
    double earning;  
    
    while(true)                         //what does true mean? 
    {
        printf("What is the employee's name, (enter -1 to end)? ", name);
        scanf("%s", name);

        if (name != "-1")        //equal method?
        {
            printf("Pls enter %s's gross sale of this week: ", name);
            scanf("%lf", &grossSale);
            earning = baseSalary + grossSale*9/100;
            printf("%s's earning of this week is %.2f\n", name, earning);
        }
        else
            break;
    }  
    
    return 0;
}

