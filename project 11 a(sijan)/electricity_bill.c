#include<stdio.h>
int main()
{
	int units,days,amount;
	char name[50],category,again='Y';
	float vat,discount,fine,bill;
	
	
	
	printf("\n---Electricity Bill---\n");
    while (again == 'Y' || again == 'y')
	{
		discount=0;
         fine=0;
         vat=0;
		printf("Enter customer name:");
		scanf("%s",&name);
		units:
		printf("enter units used:");
		scanf("%d",&units);
		if ( units < 0)
		{
			printf("Invalid units\n Try again\n");
			goto units;
		}
		category:
		printf("Enter category (D for Domestic, N for Non-Domestic):");
		scanf(" %c",&category);
		if ( category !='d' && category !='D'&&
		category !='n' && category !='N')
		{
			printf("Invalid category\n");
		goto category;
		}
		printf("enter the day of payment of the bill:");
		scanf("%d",&days);
		// no vat applied base amount//
		if(units <=100)
		{
			amount=units*5;
		}
		else if (units <=200)
		{
			amount=100*5+(units-100)*7;
		}
		else if (units<=300)
		{
			amount=100*5+100*7+(units-200)*10;
		}
		else if (units<=500)
		{
			amount=100*5+100*7+100*10+(units-300)*12;
		}
		else
		{
			amount=100*5+100*7+100*10+200*12+(units-500)*13;
		}
		// VAT according to the category//
		if (category=='d'||category=='D')
		{
			vat=(5*amount)/100;
		}else if (category=='n'||category=='N')
		{
			vat=(13*amount)/100;
		}
		else
		{
			printf("Invalid category listed above");
		}
		//discount//
		if (days<=5)
		{
			discount=(5*amount)/100;
			bill=amount+vat-discount;
		}
		// Fine//
		else if (days>15)
		{
			fine=(5*amount)/100;
			bill=amount+vat+fine;
		}
		else {
			//no dicount or fine added//
			bill=amount+vat;
		}
		printf("\n");
		//bill printing//
		printf("\n--- Electricity Bill ---\n");
		printf("Customer name:%s \n",name);
	if(category=='D'||category=='d')
	{
		printf("Category:Domestic \n");
	}
	else if(category=='n'||category=='N')
	{
		printf("Category:Non-domestic \n");
	}
	printf("Units Used: %d \n",units);
	printf("Energy Charge: Rs%d\n",amount);
	printf("VAT:Rs %.2f\n",vat);
	printf("Discount: Rs %.2f\n",discount);
	printf("Fine: Rs %.2f\n",fine);
	printf("Final Bill: Rs %.2f\n",bill);
	printf("\n");
	printf("do you want to calculate another bill? (Y/N):");
	scanf(" %c",&again);
}
	printf("\n");
	printf("\n");
	printf("Thank you!!");
	
	
	return 0;
	
	
	}
