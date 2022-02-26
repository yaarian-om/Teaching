#include <stdio.h>

int main()
{
    double baseSalary = 1500.00;
    double bonusPerPC = 200.00;
    double commissionOnSale = 0.02;
    double bonus;
    double commission;
    int numberOfComputers;
    int price;
    printf("Enter The Number of Computers = ");
    scanf("%d", &numberOfComputers);
    printf("Enter The Price of each Computers = ");
    scanf("%d", &price);

    bonus = bonusPerPC * numberOfComputers;
    printf("Bonus = %f", bonus);
    printf("\n");

    commission = (price * numberOfComputers * commissionOnSale);
    printf("Commission = %f", commission);
    printf("\n");
    return 0;
}
