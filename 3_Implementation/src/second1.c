#include<stdio.h>
#include "log.h"
#include "provider.c"

void second()
{

    printf("\n1.covishield  2nd short vaccine \n\n2.covaxin 2nd vaccine\n\n");
    scanf("%d",&v1);
    if(v1==1)
    {
        vac1[rear]=1;
        vac2[rear]=1;

        //vpro();
    }
    else
    {
        vac1[rear]=1;
        vac2[rear]=1;
        //vpro();
    }
    printf("\n press Enter to submit\n");


}