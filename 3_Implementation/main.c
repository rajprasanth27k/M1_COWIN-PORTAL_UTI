#include<stdio.h>
#include "head.h"

int data[100]={1234,2345,3456};
char name[100];
long int phone[100]={9954778556,8900665334,99674432229};
int age[100]={23,56,34};
int vac1[100],vac2 [100],v1=0,v2=0,cov,rear=4,Rsec=0,SRprov,RRprov,Rdose=0,dose,flag;
char pov[100];
int Vaccino;
int main()
{
    printf("\n\n\t ########################## COWIN PORTAL  ######################");
    printf("\n\n\t******************* WELCOME TO THE MAIN MENU****************************\n\n");
    int n=100,p=0,i=0;
    int aadhar ,Raadhar; 
    printf("\n1.Enter the Aadhar number : \n");
    printf("\n2.Enter sign up           : \n\n");
    scanf("%d",&p);

    switch(p)
    {
        case 1:
            printf("\nEnter the Aadhar number \n\n");
            scanf("%d",&aadhar);
            Raadhar=login(aadhar);
            if(Raadhar==1)
            {
                rear=i;
                printf("\n1.covishield  2nd short vaccine \n\n2.covaxin 2nd vaccine\n\n");
                scanf("%d",&v1);
                Rsec=second(v1);
                printf("\n press Enter to submit\n");
                printf("\nEnter the Name vaccine Provider\n");
                scanf("%s",pov);
                Rsec=2;
                Vaccino=prov(pov);    
                if(Vaccino==1)  
                    dose=Ddose(Rsec);      
                flag=1;  
            }
            else
                printf("\n \t Incorrect code");
            break;

        case 2:
            rear=rear+1;
            printf("\n\n\t\t\t\t#####           COWIN PORTAL   ##### \n");
            printf("\n\t\t\t\t  ##### Registration page ##### \n");
            printf("\n\nFill the details\n");
            printf("\nEnter the NAME:\n\n");
            scanf("%s",name);
            printf("\nEnter the Aadhar number:\n\n");
            scanf("%d",&data[rear]);
            printf("\nEnter the Phone number:\n\n");
            scanf("%ld",&phone[rear]);
            printf("\nEnter the Age:\n\n");
            scanf("%d",&age[rear]);
            printf("\n\n1.covishield vaccine \n\n 2.covaxin vaccine\n");
            scanf("%d",&cov);
            printf("\n\npress enter to submit \n");
            vac1[rear]=0;
            vac2[rear]=0;
            printf("\n press Enter to submit\n");
            printf("\nEnter the Name vaccine Provider\n");
            scanf("%s",pov);
            Rsec=1;
            Vaccino=prov(pov);
            if(Vaccino==1)
                dose=Ddose(Rsec);  
            flag=1; 
            break;
        default:
            break;
    }
    if(flag==1)
    {
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\n\t===========================================================================================\n");
        printf("\t\t         certificate for COVID-19 vaccination - %d st Dose ",dose);
        printf("\n\t===========================================================================================\n");
        printf("\n\tBeneficiary Details");
        printf("\n\n\t\tBeneficiary Name         :");
        printf("\t\t\t%s",name);
        printf("\n\t\tPhone Number             :");
        printf("\t\t\t%ld",phone[rear]);
        printf("\n\t\tAge                      :");
        printf("\t\t\t%d",age[rear]);
        printf("\n\n\t Vaccination Details");
        printf("\n\n\t\t vaccination  Name         :");
        if(cov==1)
            printf("\t\t\t COVISHIELD");
        else
            printf("\t\t\t COVAXIN");
        if(dose==1)
        {
            printf("\n\t\tFirst Dose                 :\t\t\tCompleted");
            printf("\n\t\tsecond Dose                :\t\t\tNOT Completed");
        }
        else if(dose==2)
        {
            printf("\n\t\tFirst Dose                 :\t\t\tCompleted");
            printf("\n\t\tsecond Dose                :\t\t\tCompleted");
        }
        printf("\n\t\tVaccinated by              :");
        printf("\t\t\t%s",pov);
        printf("\n\t=======================================================================================\n");
         printf("\t\t\t\t\t!!!! STAY SAFE !!!!");
        printf("\n\t===========================================================================================\n");
        flag=0;
    }
    else
        printf("Enter the Correct Statement");
    
     return 0;



}

