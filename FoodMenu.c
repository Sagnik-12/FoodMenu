//Program to search for food item in a menu
#include<stdio.h>
int main()
{
	int choice;
	printf("Enter your choice: ");//choice should be between 1 to 5
	scanf("%d",&choice);
	switch(choice)
	{
	case 1: printf("Food Item - Pizza\t Price - Rs.239");
	break;
	case 2: printf("Food Item - Burger\t Price - Rs.129");
	break;
	case 3: printf("Food Item - Pasta\t Price - Rs.179");
	break;
	case 4: printf("Food Item - French Fries\t Price - Rs.99");
	break;
	case 5: printf("Food Item - Sandwich\t Price - Rs.149");
	break;
	default : printf("Choice is invalid");
	}
	return 0;
}
