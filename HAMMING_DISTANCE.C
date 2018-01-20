//code subjected to copyright
//created by SARANG MK
//http://www.smktech.tk
#include<stdio.h>
#include<conio.h>
long int bds(int);
void main()
{
 int lmt,i,f=1,hd=0,j;
 clrscr();
 printf("ENETR THE LIMIT\n");
 scanf("%d",&lmt);
 for(i=0;i<lmt;i++)
 {
  j=i+1;
   if(f%2!=0)
     {
       hd=hd+(i ^ j);
     }
     else
      {
       hd=hd+bds(i ^ j);
      }
   f++;
  }
printf("HAMMING DISTANCE=%d",hd);
getch();
}
//code subjected to copyright
//created by SARANG MK
//http://www.smktech.tk
long int bds(int dec)
{
int rem,bds=0;
while(dec>0)
{
 rem=dec%2;
 bds=bds+rem;
 dec=dec/2;
}
return(bds);
}