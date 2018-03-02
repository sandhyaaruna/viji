#include<stdio.h>
#include<conio.h>
void main()
{
int hr,min,rem;
scanf("%d",&min);
hr=min/60;
rem=min-(hr*60);
printf("%d\t%d",hr,rem);
getch();
}
