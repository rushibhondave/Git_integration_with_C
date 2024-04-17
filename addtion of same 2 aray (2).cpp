#include<stdio.h>
int main(){
	
int i,sum[5];

int m[5]={10,12,13,14,15};
int s[5]={10,12,13,14,15};		
printf("first array is\n");	
 for(i = 0; i<5; i++)
{

printf("%i\t",m[i]);
   
}	
printf("\nsecond array is\n");
 for(i = 0; i<5; i++)
{

printf("%i \t",s[i]);

}
	
for(i = 0; i<5; i++){

sum[i]=m[i]+s[i];
	
}
printf ("\nadddtion of two array\n");	
for(i=0;i<5;i++)
{
	printf("%d\t",sum[i]);
}

  
}
