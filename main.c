//
//  main.c
//  loadsort1
//
//  Created by 20161104583 on 17/6/15.
//  Copyright © 2017年 20161104583. All rights reserved.
//

#include <stdio.h>

int main()
{
    FILE *fr;
    FILE *fw;
    fr=fopen("//Users//a20161104583//Desktop//排序//sort.txt","r+");
    fw=fopen("//Users//a20161104583//Desktop//排序//sortout.txt","w");
    int a[10],t,i,j;
    for(i=0;i<10;i++)
    {
        fscanf(fr,"%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
        fprintf(fw,"%d\t",a[i]);
    }
    fclose(fr);
    fclose(fw);
    return 0;
}
