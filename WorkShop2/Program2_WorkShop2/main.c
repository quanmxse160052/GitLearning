#include <stdio.h>
#include <stdlib.h>
#define PA 9000000 //Personal pending amount
#define PD 3600000 //Alimony (tiền cấp dưỡng) for each his/her dependent

int main()
{
    double incomePerYear = 0, taxFreeIncome = 0, taxableIncome = 0;
    int nod = 0;
    float incomeTax = 0;

   printf("Enter your income of this year: ");
   scanf("%lf", &incomePerYear);
   printf("Number of dependents: ");
   scanf("%d", &nod);

   taxFreeIncome = 12 * (PA + nod * PD);
   printf("Tax-free income: %lf", taxFreeIncome);
   taxableIncome = incomePerYear - taxFreeIncome;
   printf("\nTaxable income: %lf",(taxableIncome > 0) ? taxableIncome : (taxableIncome = 0));

   if(taxableIncome <= 0)
            incomeTax = 0;
   else if(taxableIncome <= 5000000)
        incomeTax = 0.05 * taxableIncome;
   else if(taxableIncome <= 10000000)
        incomeTax = 0.05 * 5000000 + 0.1 * (taxableIncome - 5000000);
   else if(taxableIncome <= 18000000)
        incomeTax = 0.05 * 5000000 + 0.1 * 5000000 + 0.15 * (taxableIncome - 10000000);
   else
        incomeTax = 0.05 * 5000000 + 0.1 * 5000000 + 0.15 * 8000000 + 0.2 * (taxableIncome - 18000000);

   printf("\nThe tax income of you is %.2lf", incomeTax);


    return 0;
}
