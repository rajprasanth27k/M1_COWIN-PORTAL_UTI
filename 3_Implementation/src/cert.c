#include<stdio.h>
#include "log.h"



void certificate()

{
    int dose=0;
    if(vac1[rear]==0 || vac2[rear]==0)
    {
       dose=1;
    }
    else if(vac1[rear]==1|| vac2[rear]==1)
    {
        dose=2;
    }


  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
  printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  certificate for COVID-19 vaccination - %d st Dose ",dose);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  printf("\n\t==========================================================================================================\n");


    printf("\n\tBeneficiary Details");
        printf("\n\n\t\tBeneficiary Name       :");
        printf("\t\t\t%s",name);
        printf("\n\t\tPhone Number             :");
        printf("\t\t\t%d",phone[rear]);
        printf("\n\t\tAge                      :");
        printf("\t\t\t%d",age[rear]);


    printf("\n\n\t Vaccination Details");
        printf("\n\n\t\t vaccination  Name        :");
        if(cov==1)
            printf("\t\t\t COVISHIELD");
        else
            printf("\t\t\t COVAXIN");

        if(dose==1)
         {
            printf("\n\t\tFirst Dose               :\t\t\tCompleted");
            printf("\n\t\tsecond Dose              :\t\t\tNOT Completed");
         }
        else if(dose==2)
        {
            printf("\n\t\tFirst Dose              :\t\t\tCompleted");
            printf("\n\t\tsecond Dose              :\t\t\tCompleted");
        }


	printf("\n\t\tVaccinated by           :");
	printf("\t\t\t%s",pov);
	printf("\n\t==========================================================================================================\n");


	printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");


  }