#include <stdio.h>
#include "phone.h"

extern int size;

void printAll()
{
		printf("Print all contants int the PhoneBook\n");
		int i = 0;
		printf("<<Display all contacts in the PhoneBook>>\n");
		for(i = 0; i < size; i++){
			printf("%s\t\t", PhoneBook[i].Name);
			printf("%s\n", PhoneBook[i].PhoneNumber);
		}
		return ;
}
