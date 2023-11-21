#include<stdio.h>
int main(void)
{
    int temp;
    printf("enter the temperature degree of today:");
    scanf("%d",&temp);
    if(temp<=4)
	printf("the weather is cold");
  else if(temp>=25)
    printf("the weather is hot");
  else 
	printf("the weather is normal");
