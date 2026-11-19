#include<stdio.h>
int main ()
{
	int choice=11,quantity;
	char name[50];
	float price=0,total=0;
	
	printf("----Welcome to Danphe cafe----\n");
	printf("ORDER AS U LIKE FROM THE GIVEN MENU\n");
	printf("       --------------MENU----------------       \n");
	printf("                 DRINK/BEVERAGES               \n");
	printf("   NO ITEM                         PRICE\n");
	printf("    1-Iced americano                    $4.00\n");
	printf("    2-Espresso                          $2.50\n");
	printf("    3-Cappuccino                        $3.50\n");
	printf("    4-Hot chocolate                     $3.50\n");
	printf("    5-Americano                         $3.50\n");
	printf("           BAKERY,DESERTS & PATISSERINE               \n");
	printf("       ITEM                         PRICE\n");
	printf("    6-Butter Croissant                  $3.50\n");
	printf("    7-Chocolate Croissant               $4.00\n");
	printf("    8-Classic Tiramisu                  $5.50\n");
	printf("    9-Chocolate Fondant                 $5.00\n");
	printf("    0-Finish order                       ****\n");
	printf("                 Bon Appétit!               \n");
	printf("Enter your name:");
	scanf("%s",&name);
	printf("ENTER ITEM NO TO ORDER:");
	scanf("%d",&choice);
	goto skip;
	while(choice!=0)
	{
	
	printf("Order anything else:");
	scanf("%d",&choice);
skip:
	switch(choice)
{
    case 1:
        price = 4.00;
        break;

    case 2:
        price = 2.50;
        break;

    case 3:
        price = 3.50;
        break;

    case 4:
        price = 3.50;
        break;

    case 5:
        price = 3.50;
        break;

    case 6:
        price = 3.50;
        break;

    case 7:
        price = 4.00;
        break;

    case 8:
        price = 5.50;
        break;

    case 9:
        price = 5.00;
        break;

    case 0:
        printf("Order finished!");
        break;

    default:
        printf("Invalid choice!");
}
if(choice>=1 && choice<=9)
{
	printf("Enter the amount u want:");
	scanf("%d",&quantity);
	total=total+(price*quantity);
}
}

	
	
	
	
	
	
	
	return 0;
}