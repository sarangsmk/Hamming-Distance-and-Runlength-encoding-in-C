//code subjected to copyright
//created by SARANG MK
//http://www.smktech.tk
#include<stdio.h>
#include<conio.h>
void main()
{
long int bin=0,rem,num,p=1,c=0,i=0,a[20],encoded[20],j;
int rlc=0,index=0;
clrscr();
printf("ENTER THE NUMBER\n");
scanf("%ld",&num);
while(num>0)
{
  rem=num%2;
  bin=bin+(rem*p);
  a[i]=rem;
  p*=10;
  num/=2;
  c++;
  i++;
}

if(c!=16)
{
  for(i=c;i<=15;i++)
   {
    a[i]=0;
   }
}
//REVERSING
for(i=0,j=15;i<16,j>=0;i++,j--)
{
encoded[i]=a[j];
}

printf("\n");
//RUN LENGTH ENCODING
printf("RUN LENGTH ENCODING\n-------------------\n");
printf("  INDEX\tLENGTH\n");
for(i=0;i<16;i++)
{
if(encoded[i]==1)      //1
   {
   rlc++;
    if(encoded[i-1]!=1)
      {
      index=i;
      }
   }
 else
     if(i!=0&&encoded[i]==0)
     {
      if(index!=0&&rlc!=0)
       {
	printf("  %d\t%d\n",index,rlc);
	rlc=index=0;
       }
     }
}
getch();
}