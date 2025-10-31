#include <stdio.h>

int main(void){

	int item = 0;
	int money = 0;
	
	
	printf("You are currently inside a supermarket.\n");
	printf("How much worth of items are in the basket you're holding?\n");
	printf("Enter your purchase amount → ");
	scanf("%d", &item);
	
	if(item < 10000)
	{
		printf("Okay, let's go to the register.\n");
	}
	else if(item < 100000)
	{
		printf("I might have gone a bit overboard with that purchase...\n");
		printf("I don't want to see the total amount...\n");
	}
	else
	{
		printf("Why is it so expensive at the supermarket????");
	}
	
	
	
	printf("\nClerk >> Your total purchase amount is %d yen.\n", item);
	printf("You   >> OK, how much cash do I have on me right now...?\n");
	printf("Enter your pocket money → ");
	scanf("%d", &money);
	
	if(money > item)
	{
		printf("\nI can buy this!\n");
		printf("Clerk >> Thank you for your purchase!");
	}
	else if(money == item)
	{
		printf("\nI barely had enough money.\n");
		printf("Oh no! I've run out of money for the train fare home!:(");
	}
	else if(money < item)
	{
		printf("\nClerk >> You don't had enough money! get out!!");
	}
	return 0;
}
	