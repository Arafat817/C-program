#include<stdio.h>
int main()
{
    double loan_amount,interest_rate,number_of_years;
    printf("Loan amount:");
    scanf("%lf ",&loan_amount);
    printf("Interest rate:");
    scanf("%lf",&interest_rate);
    printf("Number of years:");
    scanf("%lf",&number_of_years);
   // scanf("%lf %lf %lf",&loan_amount,&interest_rate,&number_of_years);
    double total_amount= (loan_amount+loan_amount*interest_rate*number_of_years)/100;
    printf("%lf",total_amount);



}
