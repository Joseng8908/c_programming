#include <stdio.h>

int main(void)
{
	int number, month, date, year;
	float price;

	printf("Enter item number: ");
	scanf("%d", &number);

	printf("enter unit price: ");
	scanf("%f", &price);

	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &date, &year);

	printf("\nItem\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%-d\t\t$%7.2f\t%-d/%-d/%-d", number, price, month, date, year);

	return 0;
}
