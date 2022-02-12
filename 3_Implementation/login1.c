//#include<stdio.h>
#include "second1.c"
#include "log.h"
#include "reg1.c"
void login()
{


	int n=100,p=0,i=0;
	int aadhar;

    printf("\n1.Enter the Aadhar number : \n");
    printf("\n2.Enter sign up           : \n\n");
    scanf("%d",&p);
    switch(p)
    {
        case 1:
            printf("\nEnter the Aadhar number \n\n");
            scanf("%d",&aadhar);
            for(i=0;i<=n;i++)
            {
                if(aadhar==data[i])
                {
                     rear=i;
                     second();
                     break;
                }
                else
                {
                    printf("\n \t Incorrect code");
                    break;
                }
            }
            break;
      case 2:
             reg();
             break;
      default:
          break;
    }
}