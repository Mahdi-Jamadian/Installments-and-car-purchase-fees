#include <stdio.h>
#include <math.h>
/* My name Is : Mahdi Jamadian.
 * My Gmail :  Mr.jamadian@gmail.com
 * Instagram :Mahdi_Jamadian
 * My Git hub : Mahdi_Jamadian
 * */
int main() {
    printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");
    printf(" Installments and car purchase fees \n");
    printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");
    float money_saved,car_prices,wage,number_installments,
            amount_paid_including_commission,Amount_per_installment;
    printf("Enter money Saved  : ");
    scanf("%f",&money_saved);
    printf("Enter Car Prices : ");
    scanf("%f",&car_prices);
    printf("Enter Wage in Year : ");
    scanf("%f",&wage);
    printf("Enter Number of installments : ");
    scanf("%f",&number_installments);
    wage = wage /12 ;
   /*
    * ----- other route ------
    *-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
    * amount_paid_including_commission = (car_prices - money_saved)/number_installments;
    amount_paid_including_commission = amount_paid_including_commission + (amount_paid_including_commission * wage);
    amount_paid_including_commission = amount_paid_including_commission * number_installments;
   -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
    */
   amount_paid_including_commission = ( ( wage * ( car_prices - money_saved ) ) / ( 1 - (powf((1 + wage),-number_installments))));
    printf("installment Prices :%2.f $  \n ",amount_paid_including_commission);
    printf("Total Prices : %2.f $ \n",amount_paid_including_commission*number_installments);
    printf("Number of installments : %1.f Month." , number_installments);
    return 0;
}
