
//#include<stdio.h>
#include "cert.c"
#include "log.h"



int vpro()
{
    char pov[100];
    printf("\nEnter the Name vaccine Provider\n");
    scanf("%s",pov);

    if(pov=="cipla"||"mediplus" || "appllo")
    {

        printf("\nGet certificate\n");
        printf(" \n  \n   ");
		certificate(pov);

    }
    else
    {
        printf("\n Incorrect code");
    }



}