#include<stdio.h>
int main(){
	
int i,j;
int sum [3][3],m[3][3]={1,2,3,4,5,6,8,9,7},g[3][3]={2,5,6,8,7,1,7,9,5};

printf("declare the 1st array:\n");
	
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%i\t",m[i][j]);
	}

printf("\n");
 	
	}	
	
printf("\ndeclare the 2nd array:\n");
	
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%i\t",g[i][j]);
		
	}
	printf("\n");
	
}

printf("\nsum array is\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	
	sum[i][j]=m[i][j]+g[i][j];	
	printf("%i\t",sum[i][j]);

	}
	printf("\n");
	
	
}
}

