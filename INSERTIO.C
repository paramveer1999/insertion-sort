#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<dos.h>
#include<stdlib.h>
void insertionsort(int a[],int n)
{
int i,j,temp;
for(i=1;i<n;i++)
{
delay(20);
temp=a[i];
for(j=i-1;j>=0&&temp<a[j];j--)
{
a[j+1]=a[j];
}
a[j+1]=temp;
}}
void main()
{
int start,end,i,j,n,ch,a[10],k;
float time;
clrscr();
printf("how many numbers");
scanf("%d",&n);
printf("enter your choice");
printf("\n1-best case");
printf("\n2-average case");
printf("\n3-worstcase");
printf("\n4-exit");
scanf("%d",&ch);

switch(ch)
{
case 1:for(i=0;i<n;i++)
{
a[i]=i;
}
start=clock();
insertionsort(a,n);
end=clock();
time=(end-start)/CLK_TCK;
printf("time complexityis %f",time);
break;
case 2:

for(i=0;i<n;i++)
{
a[i]=rand();
}
start=clock();
insertionsort(a,n);
end=clock();
time=(end-start)/CLK_TCK;
printf("%f",time);
break;



case 3:  k=n;
for(i=0;i<n;i++)
{
a[i]=k;
k--;
}
start=clock();
insertionsort(a,n);
end=clock();
time=(end-start)/CLK_TCK;
printf("%f",time);
break;



case 4:
exit(1);
break;
deafult :
	printf("wrong choice entered");
	break;
	}
getch();
}
