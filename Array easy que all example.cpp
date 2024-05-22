//
//#include<stdio.h>
//
//int main()
//{
//	
//	
//	int i,n,m[10];
//	
//	 printf("Enter the array::\n");
//	
//	for(i=0;i<5;i++)
//	{
//      
//       scanf(" %i",&m[i]);                         //5 elements enter
//
//
//	}
//	
//	
//	printf("\nArray is::");
//
//		for(i=0;i<5;i++)
//	{
//      
//       printf("%i\t",m[i]);
//
//
//	}
//	
//	
//	
//}
//



//#include<stdio.h>
//
//int main()
//{
//	
//int i,j,n;
//float m[5] ,sum=0,avg;
//
//   printf("Enter the array::\n");
//	   
//	  for(i=1;i<=5;i++)
//	  {
//	   scanf("%f",&m[i]);
//	  	
//	  }
//	
//	
//	
//   printf("\nthe array is ::%i",m[i]);
//	
//	                                                          Addtion of array in float value.
//		for(i=1;i<=5;i++)
//		{
//			printf("\t%.2f\t",m[i]);
//		}
//	
//
//	
//	    for(i=1;i<=5;i++)
//	    {
//	    	sum=sum+0.18+m[i];
//            avg=(float)sum%10;
//	    	
//		}
//	
//		printf("\nAddtion of array is ::%.2f",sum);	
//		printf("\nAverage of array is ::%.2f",avg);	
//
//}
//
//
//
//




#include<stdio.h>

int main()
{
	
//int i,j,n;
//int m[5],temp=0;
//
//    printf("\nEnter the array ::");
//    
//    for(i=1;i<=5;i++)
//    {                                             //reverse array is
//    	scanf("%i",&m[i]);
//    	
//    	
//	}
//
//
//
//  
//    printf("\nreverse array is ::");
//    
//    for(i=5;i>=1;i--)
//    {
//        printf("\t%i\t",m[i]);
//	}
//	
 
    

	int i,r,arr13[100];
			
				printf("Enter the Size of aarray::\n");
				scanf("%i", &r);
				printf("\nEnter the Nos:- \n");

				for(i=0; i<r; i++) {

					scanf("%i",&arr13[i]);

				}
	           printf("\Reverse of Arrays element is ::");
				for(i=r; i>=1; i--) {

					
						 printf("\t%i\t",arr13[i]);
				}

 }


			





//#include<stdio.h>
//
//int main()
//{
//	
//	int i,j,n=1,found=1;
//	int m[5];
//	
//    printf("Enter the array::\n");
//    
//    for(i=1;i<=5;i++)                               // linnear serching element
//   {
//    	scanf("%i",&m[i]);
//    }
//    
//    
//   printf("\nPress any key::");
//   scanf("%i",&n);
//
//    for(i=1;i<=5;i++)                                //'n'Means which number you find & enter
//    { 
//       if(m[i]==n)
//       {
//       	 
// 
//       	 found=1;
//       	 break;
//       	
//	   }
//	   
//	}  
//	
//	    if(found==1)
//	   {
//	   	
//	   	 printf("number is found");
//	   	} 
//	   	 
//	   	 
//	   	 else
//	   	 {
//	   	 	 printf("number is not found");
//	   	 	 
//			}
//	   
//}
 

//    
//#include<stdio.h>
//
//int main()
//{
//	
//	int i,j,n,temp;
//	int m[5]={22,3,32,4,1};
//	
////    printf("Enter the array::\n");
////    
////    for(i=1;i<=5;i++)                               
////   {
////    	scanf("%i\t",&m[i]);
////    
////	  }
//    
//    
//    
//    for(i=0;i<=4;i++)
//     {
//	    for(j=i+1;j<=4;j++)
//	   {
//              if(m[i]>m[j])
//              {
//              	temp=m[i];
//              	m[i]=m[j];
//              	m[j]=temp;
//              	
//              	                               // acending &  decending sort array rivision
//			  }                                    //cheak
//			                                                             
//			
//    
//        }
//    
//    }
//    
//    
//    
//    
//    printf("Acending sorting the array::\n");
//    
//    for(i=0;i<=4;i++)                              
//   {
//    	printf("%i\t",m[i]);
//    
//      }
// 
//    
//    
//    
//       
//    printf("\n");
//    
//    
//    
//    
//    
//    for(i=0;i<=4;i++)
//     {
//	    for(j=i+1;j<=4;j++)
//	   {
//    
//    
//      if(m[i]<m[j])
//			  {
//			  	 
//				
//              
//              	temp=m[i];
//              	m[i]=m[j];
//              	m[j]=temp;
//              	
//			   
//			  	
//			  }
//			  
//		}
//	}
//    
//    
//     printf("\nDesending sorting the array::\n");
//    
//    for(i=0;i<=4;i++)                              
//   {
//   	
//    	printf("%i\t",m[i]);
//    }
//    
//
//}


//
//
//
//
//
//
//     
//#include<stdio.h>
//
//int main()
//{
//	
//	int i,j,n=1,found=1,c=0;
//	int m[5]={1,2,3,4,4};
//	
////    printf("Enter the array::\n");
////    
////    for(i=1;i<=5;i++)                               // duplicate array
////   {
////    	scanf("%i",&m[i]);
////    }
//
//
//
//    for(i=0;i<5;i++)
//      {
//	  
//	  for(j=i+1;j<=5;j++)
//      	
//		 {
//		 	
//			 if(m[i]==m[j])
//		 	
//			 printf("Duplicate number is ::%i",m[i]); 
//		 	
//		  } 
//		  
// 
//		  
//		  }	
//	
//}





//
//#include<stdio.h>
//int main()
//{
//
//int m[7]={1,2,-3,-4,5,0,0};
//int i,j,even=0,odd=0,sum=0,asum=0,pov=0,nev=0,esum=0,osum=0,count,min,max;	
//	
//	
//printf("array is::\n");	
//
// for(i=0;i<7;i++)
// {
// 	
// 	printf("%i\t",m[i]);
// 	
// }
// 
//
// printf("\n");
// 	
// for(i=0;i<7;i++)
// 
// {                                                       //addtion of arry
// asum+=m[i];                                             //count even & odd 
//                                                         //count pov & nev
//                                                         //count zero
//                                                         //addtion of evn & odd no
//                                                         //count min && max
// 
// } 
// 
// printf("\nTotaladdtion of array is::%i\n",asum);
//
//
// 
//	
//	
//for(i=0;i<7;i++)
//{
//	if(m[i]%2==0)
//	{
//		
//	  even++;
//		
//	}
//	
//	
//	
//	else
//	{
//	odd++;	
//	}
//	
//	
//	
//	
//}
//
// 	printf("\n");
//	printf("\n count Even number is::%i",even);
//	printf("\n");
//	printf("\n count odd  number is::%i",odd);
//	printf("\n");
//	
//
//	
//
//
//
//for(i=0;i<7;i++)
//{
//	if(m[i]>0)
//	{
//		
//	  pov++;
//		
//	}
//	
//	
//
//	if(m[i]<0)
//	{
//   
//   	nev++;	
//	}
//	
//	
//	
//	
//}
//     printf("\n");	
//	printf("\n count postive number is::%i",pov);
//	printf("\n");
//	
//		printf("\n count negative  number is::%i\n",nev);
//	
//
//                                                                      
//   printf("\n");
//   		
//	
//	for(i=0;i<7;i++)
//{
//	if(m[i]==0 )
//	{
//		
//	count++;
//	 
//		
//	}
//
//	  
//}
//
//
//	printf("\ncount zero number::%i",count );
//	
//	printf("\n");
//
//	printf("\neven number" );
//		
//	
//	for(i=0;i<7;i++)
//{
//	if(m[i]%2==0 )
//	{
//		
//	esum=esum+m[i];
//	 printf(" %i\t",m[i]);
//		
//	}
//
//	  
//}
//
//
//
//printf("\n esum=%d",esum);
//
//	printf("\n");
//
//printf("\nodd  number %i\t",m[i]);
//		
//for(i=0;i<7;i++)
//{
//	if(m[i]%2!=0 )
//	{
//		osum=osum+m[i];
//	 printf(" %i\t",m[i]);
//		
//	}
//
//
//
//}
//printf("\n osum=%d",osum);
//
//
//
//
//
//min=max=m[0];
//
//
//	    for(i=0;i<7;i++)
//		{
//			
//			if(min>m[i])
//		    min=m[i];   
//		    
//		   if(max<m[i])
//		    max=m[i]; 
//			
//     	}
//
//
// printf("\n\nminimum of element is : %d",min);
// printf("\nmaximum of element is : %d",max);
//
//}


//
//
//#include<stdio.h>
//int main()
//{
//   
//   int i,j,po,val;
//  // int m[5]={1,22,13,49,50};	
//	int m[5],n;
//	printf("\n enter no of elements");
//	scanf("%d",&n);
//	
//	printf("\n enter array elements");
//	for(i=0;i<n;i++)
//	{
//		
//	  scanf("%d",&m[i]);
//	 	
//		
//	}
//	
//	printf("Before adding array is::\n");
//
//	                                                     //insert & delte element in  array
//		for(i=0;i<n;i++)
//	{
//		
//	   printf("%i\t",m[i]);
//	 	
//		
//	}
//	
//	
//	printf("\n\nEnter the postion/index::");
//	scanf("%i",&po);
//	
//	
//	
//	
//	printf("\nEnter the  value  :: ");
//	scanf("%i",&val);
//	
//	
//	for(i=n-1;i>=po;i--)
//	{
//		
//		m[i+1]=m[i];
//		
//	}
//	n=n+1;
//	
//	m[po]=val;
//
//	
//		printf("\nAfter insert element in  array is::\n");
//	
//		for(i=0;i<n;i++)
//	{
//		
//	   printf("%i\t",m[i]);
//	 	
//		
//	}	
//}




























//qetion in mnc
//1)binary sercha
//2)bubble sort
//3)selction 
//4)insection
//5)merge
//6)radik
//7)bukket 
//8)quick


