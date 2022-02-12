
#include<stdio.h>
#include "cert.c"
#include "log.h"



void vpro()
{

    printf("\nEnter the Name vaccine Provider\n");
    scanf("%s",pov);

    if(pov=="cipla"||"mediplus" || "appllo")
    {

        printf("\nGet certificate\n");
        printf(" \n  \n   ");
		//certificate();

    }
    else
    {
        printf("\n Incorrect code");
    }



}