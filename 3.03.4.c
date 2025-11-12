#include <stdio.h>

int main() {
    int customerID;
    char name[50];
    float units, chargePerUnit, amount, surcharge = 0, totalAmount;


    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Units Consumed: ");
    scanf("%f", &units);


    if (units <= 199)
        chargePerUnit = 1.20;
    else if (units >= 200 && units < 400)
        chargePerUnit = 1.50;
    else if (units >= 400 && units < 600)
        chargePerUnit = 1.80;
    else
        chargePerUnit = 2.00;


    amount = units * chargePerUnit;


    if (amount > 400)
        surcharge = amount * 0.15;

    totalAmount = amount + surcharge;


    if (totalAmount < 100)
        totalAmount = 100;


    printf("\n--- ELECTRICITY BILL ---\n");
    printf("Customer ID       : %d\n", customerID);
    printf("Customer Name     : %s\n", name);
    printf("Units Consumed    : %.2f\n", units);
    printf("Charge per Unit   : ₹%.2f\n", chargePerUnit);
    printf("Amount            : ₹%.2f\n", amount);
    printf("Surcharge         : ₹%.2f\n", surcharge);
    printf("Total Amount to Pay: ₹%.2f\n", totalAmount);

    return 0;
}
