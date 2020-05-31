#include <stdio.h>
#include <string.h>
#include "phone.h"

extern void registerPhoneData();
extern void printAll();
extern void searchByName();
extern void deleteByName();

static int count_service = 0;

int main()
{
	int service;
	do
	{
		printf("============Telephone Book Management============");
		printf("\n <<<1. Register\t 2. Print All \t 3. Search by ID \t 4. Delete \t 5. Exit >>>\n");
       		printf("Please enter your service number (1-5)> ");
		scanf("%d", &service);

		switch(service)
		{
			case 1: registerPhoneData();
			       	count_service++;	
				break;
			case 2: printAll();
				count_service++;
			       	break;
			case 3: searchByName();
				count_service++;
			       	break;
			case 4: deleteByName();
				count_service++;
			       	break;
		}
	}while(service != 5);
	return 0;
}
