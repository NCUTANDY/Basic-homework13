#include<stdio.h>  
#include<iostream> 
int main()
{
    int gender,age; 

    printf("�p�G�k�ʽп�J1,�k�ʽп�J2�C\n"); 

    printf("�п�J�ʧO�M�~�֡G");

 	scanf("%d %d",&gender,&age); 

    if( gender==1 && age>=18 )  

    {

    printf("�A�i�H���B\n");

    }

    if( gender==1 && age<18 )

    {

    printf("�A���i�H���B\n");

    }

    if( gender==2 && age>=16 )

    {

    printf("�p�i�H���B\n");

    }

    if( gender==2 && age<16 )

    {

    printf("�p���i�H���B\n");

    }

    return 0; 

}
