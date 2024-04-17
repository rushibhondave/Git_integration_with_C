#include<stdio.h>
int main(){

	
int i,j,temp;
int m[3][3]={1,2,0,4,0,8,7,3,6};


printf("before swapping array:\n");

for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{

printf("%i\t",m[i][j]);

}
printf("\n");
}	
 	
	

for (i=0;i<3;i++)
{
	
for (j=0;j;j++)
{

temp=m[i][j];
m[i][j]=m[j][i];
m[j][i]=temp;
	
}
	
	
}

printf("swapped array :\n");
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{

printf("%i\t",m[j][i]);

}
printf("\n");
}
}
