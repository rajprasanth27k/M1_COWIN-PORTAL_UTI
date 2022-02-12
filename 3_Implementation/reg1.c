#include<stdio.h>
#include "log.h"
#include "provider.c"


void reg()
{
	rear=rear+1;
	printf("\n\n\t\t\t\t#####   COWIN PORTAL   ##### \n");
	printf("\n\t\t\t\t  ##### Registration page ##### \n");
	printf("\n\nFill the details\n");
	printf("\nEnter the NAME:\n\n");

	scanf("%s",name);
	printf("\nEnter the Aadhar number:\n\n");
	scanf("%d",&data[rear]);
	printf("\nEnter the Phone number:\n\n");
	scanf("%d",&phone[rear]);
	printf("\nEnter the Age:\n\n");
	scanf("%d",&age[rear]);

    printf("\n\n1.covishield vaccine \n\n 2.covaxin vaccine\n");
    scanf("%d",&cov);
    printf("\n\npress enter to submit \n");
    vac1[rear]=0;
    vac2[rear]=0;
   // vpro();
}
