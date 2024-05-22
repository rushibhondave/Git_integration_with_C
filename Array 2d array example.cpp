//qetion in mnc
//1)binary sercha
//2)bubble sort
//3)selction 
//4)insection
//5)merge
//6)radik
//7)bukket 
//8)quick



//
//#include<stdio.h>
//
//int main()
//{
//	int i,j,n;
//	int m[3][3];
//	
//	
//	printf("Enter the arry elements::\n ");
//   
//    for(i=0;i<3;i++)
//    {  
//	  for(j=0;j<3;j++) 
//	  {                                        //2d  print array is
//    	scanf("%i",&m[i][j]);
//    	
//    	
//	  }
//    }
//	
//	
//	printf("\n The arry elements::\n");
//	
//	
//	
//	 for(i=0;i<3;i++)
//    {  
//	  for(j=0;j<3;j++) 
//	  {
//										                                       
//    	printf("\t%i",m[i][j]);
//    	
//    	}
//    	
//    	printf("\n");
//	
//	}
//	
//	
//	
//	
//}








//
//#include<stdio.h>
//
//int main()
//{
//	int m[3][3],b[3][3],i,j;
//
//	
//	printf("Enter the arrays element::\n");
//	  
//	  for(i=0;i<3;i++)
//	  {
//	  	  for(j=0;j<3;j++)
//		{
//	  	scanf("%i",&m[i][j]); 
//		                          
//	    }
//	  }
//	  
//	  
//	
//		printf("The arrays element::\n");
//	  
//	  for(i=0;i<3;i++)
//	  {
//	  	  for(j=0;j<3;j++)
//		{
//	  	printf("%i\t",m[i][j]); 
//		                          
//	    }
//	    
//	    printf("\n");
//	  }                                                     //Transpose arrays
//	
//	
//	printf("\n");
//	
//	 
//	  
//	  for(i=0;i<3;i++)
//	  {
//	  	  for(j=0;j<3;j++)
//		{
//	  	  
//	  	  b[j][i]=m[i][j];
//		                           
//	    }
//	     
//	  }
//	  
//	  	printf("The Transpose arrays element::\n");
//	  
//	  
//	  
//	  for(i=0;i<3;i++)
//	  {
//	  	  for(j=0;j<3;j++)
//		{
//	  	  
//	  	  	printf("%i\t",b[i][j]);
//		                          
//	    }
//	     printf("\n");
//	  }
//	  
//
//	   
//	     
//}


//
//#include<stdio.h>
//
//int main()
//{
//	int m[3][3],i,j;
//
//	
//	printf("Enter the arrays element::\n");
//	  
//	  for(i=0;i<3;i++)
//	  {
//	  	  for(j=0;j<3;j++)
//		{                                                   
//	  	scanf("%i",&m[i][j]); 
//		                          
//	    }
//	  }
//	  
//	  printf("\n");
//	  
//	
//		printf("The arrays element::\n");
//	  
//	  for(i=0;i<3;i++)
//	  {
//	  	  for(j=0;j<3;j++)                                             //lower & upper  matrix
//		{
//	  	printf("%i\t",m[i][j]); 
//		                          
//	    }
//	    
//	    printf("\n");
//	  }
//	  
//	  
//	  printf("\n");
//	  
//	  
//	  	printf("upper triangle matrix ::\n");
//	  
//	  for(i=0;i<3;i++)
//	  {
//	  	  for(j=0;j<3;j++)
//		{
//		  if(i>j)
//		  {
//		  	 printf("0\t");
//		  	
//		  }
//		  
//		  else
//		  {
//		  	
//		  	printf("%i\t",m[i][j]);
//		  	
//		   } 
//		                          
//	    }
//	    
//	    printf("\n");
//	  }
//	  
//	  
//	  
//	  printf("\n");
//	  
//	  
//	  
//	  	printf("lower triangle matrix ::\n");
//	  
//	  for(i=0;i<3;i++)
//	  {
//	  	  for(j=0;j<3;j++)
//		{
//		  if(i<j)
//		  {
//		  	 printf("0\t");
//		  	
//		  }
//		  
//		  else
//		  {
//		  	
//		  	printf("%i\t",m[i][j]);
//		  	
//		   } 
//		                          
//	    }
//	    
//	    printf("\n");
//	  }
//	  
//	  
//	  
//	  
//}





//
//#include<stdio.h>
//
//int main()
//{
//	int m[3][3],i,j,sum=0;
//
//	
//	printf("Enter the arrays element::\n");
//	  
//	  for(i=0;i<3;i++)
//	  {
//	  	  for(j=0;j<3;j++)
//		{                                                   
//	  	scanf("%i",&m[i][j]); 
//		                          
//	    }
//	  }
//	  
//	  printf("\n");
//	  
//	
//		printf("The arrays element::\n");
//	  
//	  for(i=0;i<3;i++)
//	  {
//	  	  for(j=0;j<3;j++)                                         //diagonal  matrix print 
//		{                                                          //diagonal matrix print add
//	  	printf("%i\t",m[i][j]); 
//		                          
//	    }
//	    
//	    printf("\n");
//	  }
//	  
//	  
//	 
//	   
//	   
//	   
//	   
//	  printf("\nThe  diagonal element::\n");
//	  
//	  
//	  for(i=0;i<3;i++)
//	   {
//		   	for(j=0;j<3;j++)
//		   	{
//		   		
//		   		if( i==j ||2-i==j ) // i+j==4
//		   		{
//		   			printf("0\t");
//				}
//				
//				else
//				{
//					printf("%i\t",m[i][j]);
//				}
//		   		
//			}
//			
//			printf("\n");
//	   }
	
	
	
//	  printf("\n addtion of diagonal element::\n");
//	  
//	  
//	  for(i=0;i<3;i++)
//	   {
//		   	for(j=0;j<3;j++)
//		   	{
//		   		
//		   		if(2-i==j)
//		   		{
//		   			printf("%i\t",m[i][j]);
//		   		
//				}
//					sum+=m[i][j];
//				
//		   		
//			}
//			
//			printf("%i",m[i][j]);
//			
//			printf("\n");
//	   }
//}
	  
//
//#include<Stdio.h>
//int main()
//{
//	int a[3][3],b[3][3],c[3][3],i,j,k,ch,exist;
//	
//	do
//	{
//	
//	printf("Enter the choice::\n1.Addtion\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulas\n6.Exist::\n");
//	scanf("%i",&ch);
//	
//	
//	switch(ch)
//	{
//		case 1:
//			
//			
//			printf("\n\nEnte the array element::\n");
//			
//			for(i=0;i<3;i++)
//			 {
//		  		 for(j=0;j<3;j++)
//			   	{
//				                                                // arithamtic  opetation (+*-/)
//				scanf("%i",&a[i][j]);
//				
//			    }
//			
//    	   }
//    	   
//    	   printf("\n\nThe array element::\n");
//    	   
//    	   for(i=0;i<3;i++)
//			{
//		  		 for(j=0;j<3;j++)
//			   	{  
//				
//				scanf("%i\t",&b[i][j]);
//				
//			    }
//			    
//			    printf("\n");
//    	    }
//    	   
//    	   
//    	     
//    	   
//    	   for(i=0;i<3;i++)
//			{
//		  		 for(j=0;j<3;j++)
//			   	{
//				      c[i][j]=a[i][j]+b[i][j];
//				
//			    }
//			    
//			    printf("\n");
//			
//    	    }
//    	    
//    	    printf("\n\nAddtion array element::\n");
//    	    
//    	   for(i=0;i<3;i++)
//			{
//		  		 for(j=0;j<3;j++)
//			   	{
//				     	printf("%i\t",c[i][j]);
//				
//			    }
//			    
//			    printf("\n");
//			
//    	    }
//    	   
//    	   
//    	   printf("\n\n");
//    	   
//    	   
//			  break;
//			  
//			  
//		case 2:
//			
//			
//			
//			printf("\n\nEnte the array element::\n");
//			
//			for(i=0;i<3;i++)
//			 {
//		  		 for(j=0;j<3;j++)
//			   	{
//				                                               
//				scanf("%i",&a[i][j]);
//				
//			    }
//			
//    	   }
//    	   
//    	   printf("\n\nThe array element::\n");
//    	   
//    	   for(i=0;i<3;i++)
//			{
//		  		 for(j=0;j<3;j++)
//			   	{  
//				
//				scanf("%i\t",&b[i][j]);
//				
//			    }
//			    
//			    printf("\n");
//    	    }
//    	   
//    	   
//    	     
//    	   
//    	   for(i=0;i<3;i++)
//			{
//		  		 for(j=0;j<3;j++)
//			   	{
//				      c[i][j]=a[i][j]-b[i][j];
//				
//			    }
//			    
//			    printf("\n");
//			
//    	    }
//    	    
//    	    printf("\n\nSubtraction array element::\n");
//    	    
//    	   for(i=0;i<3;i++)
//			{
//		  		 for(j=0;j<3;j++)
//			   	{
//				     	printf("%i\t",c[i][j]);
//				
//			    }
//			    
//			    printf("\n");
//			
//    	    }
//    	   
//    	   
//    	   printf("\n\n");
//    	   
//			
//			  break;
//		
//		
//		
//		case 3:
//			
//			
//			
//			printf("\n\nEnte the array element::\n");
//			
//			
//			for(i=0;i<3;i++)
//			 {
//		  		 for(j=0;j<3;j++)
//			   	{
//				                                               
//				scanf("%i",&a[i][j]);
//				
//			    }
//			
//    	   }
//    	   
//    	   printf("\n\nThe array element::\n");
//    	   
//    	   for(i=0;i<3;i++)
//			{
//		  		 for(j=0;j<3;j++)
//			   	{  
//				
//				scanf("%i\t",&b[i][j]);
//				
//			    }
//			    
//			    printf("\n");
//    	    }
//    	   
//    	   
//    	     
//    	   
//    	   for(i=0;i<3;i++)
//			{
//		  		 for(j=0;j<3;j++)
//		  		{ 
//			  		{  for(k=0;k<3;k++)
//			  		  	c[i][j]=a[i][k]*b[k][j];
//			  		  	
//						
//					}
//		
//			    }
//			    
//			    printf("\n");
//			
//    	    }
//    	    
//    	    printf("\n\n Multiplication array element::\n");
//    	      
//    	      
//    	      for(i=0;i<3;i++)
//			{
//		  		 for(j=0;j<3;j++)
//		  		{
//			  		 for(k=0;k<i;k++)
//			  		{
//					  
//					  printf("%i\t",c[i][j]);
//				        
//					}
//					
//				      
//				
//			    }
//			    
//			    	printf("\n");
//			
//    	    }
//    	  
//    	   
//    	   
//    	   printf("\n\n");
//    	   
//			
//			
//			  break;
//		
//		
//		
//		
//		case 4:
//			
//				
//			printf("\n\nEnte the array element::\n");
//			
//			for(i=0;i<3;i++)
//			 {
//		  		 for(j=0;j<3;j++)
//			   	{
//				                                               
//				scanf("%i",&a[i][j]);
//				
//			    }
//			
//    	   }
//    	   
//    	   printf("\n\nThe array element::\n");
//    	   
//    	   for(i=0;i<3;i++)
//			{
//		  		 for(j=0;j<3;j++)
//			   	{  
//				
//				scanf("%i\t",&b[i][j]);
//				
//			    }
//			    
//			    printf("\n");
//    	    }
//    	   
//    	   
//    	     
//    	   
//    	   for(i=0;i<3;i++)
//			{
//		  		 for(j=0;j<3;j++)
//			   	{
//				      c[i][j]=a[i][j]/b[i][j];
//				
//			    }
//			    
//			    printf("\n");
//			
//    	    }
//    	    
//    	    printf("\n\n division array element::\n");
//    	    
//    	   for(i=0;i<3;i++)
//			{
//		  		 for(j=0;j<3;j++)
//			   	{
//				     	printf("%i\t",c[i][j]);
//				
//			    }
//			    
//			    printf("\n");
//			
//    	    }
//    	   
//    	   
//    	   printf("\n\n");
//    	   
//			
//			  break;
//		
//
//        case 5:
//			
//				printf("\n\nEnte the array element::\n");
//			
//			for(i=0;i<3;i++)
//			 {
//		  		 for(j=0;j<3;j++)
//			   	{
//				                                               
//				scanf("%i",&a[i][j]);
//				
//			    }
//			
//    	   }
//    	   
//    	   printf("\n\nThe array element::\n");
//    	   
//    	   for(i=0;i<3;i++)
//			{
//		  		 for(j=0;j<3;j++)
//			   	{  
//				
//				scanf("%i\t",&b[i][j]);
//				
//			    }
//			    
//			    printf("\n");
//    	    }
//    	   
//    	   
//    	     
//    	   
//    	   for(i=0;i<3;i++)
//			{
//		  		 for(j=0;j<3;j++)
//			   	{
//				      c[i][j]=a[i][j]%b[i][j];
//				
//			    }
//			    
//			    printf("\n");
//			
//    	    }
//    	    
//    	    printf("\n\n Modulas  array element::\n");
//    	    
//    	   for(i=0;i<3;i++)
//			{
//		  		 for(j=0;j<3;j++)
//			   	{
//				     	printf("%i\t",c[i][j]);
//				
//			    }
//			    
//			    printf("\n");
//			
//    	    }
//    	   
//    	   
//    	   printf("\n\n");
//    	   
//		
//			
//			  break;
//	
//		
//		
//		case 6:
//			
//			exist;
//			
//			  break;
//	
//		
//		
//	}
//	
//   
//   }while(ch!=6);
//	
//	
//}
//


//
//#include<stdio.h>
//int main()
//{
//	int m[3][3],i,j,n,rsum[3],csum[3];
//
//	printf("Enetr the array::\n");
//	
//	for(i=0;i<3;i++)
//	{	
//	   for(j=0;j<3;j++)
//		{  
//		
//		  scanf("%i",&m[i][j]);
//			
//		}
//		
//	}
//	
//	
//	printf("The array::\n");
//	
//	for(i=0;i<3;i++)
//	{	
//	   for(j=0;j<3;j++)
//		{  
//		                                              //sum of each column and row
//		  printf("%i",m[i][j]);
//			
//		}
//		
//	}
//	
//
//   
//   printf("Addtion of array is ::");
//	
//	for(i=0;i<3;i++)
//	{		
//	   rsum[i]=0;
//	
//	   for(j=0;j<3;j++)
//		 
//		
//		  rsum[i]=rsum[i]+m[i][j];
//	
//	}
//	printf("\n");
//	
//		printf("%i\t",rsum);
//		  		
//
//
//
//	
//}







//
//#include <stdio.h>
//
//int main()
//{
//     int i,j,k,arr1[10][10],rsum[10],csum[10],n;
//	 
//       for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//	           scanf("%d",&arr1[i][j]);
//            }
//        }  
//        
//        
//        
//	 printf("The matrix is :\n");
//	 
//	 for(i=0;i<n;i++)
//	 {
//	   for(j=0;j<n ;j++)
//	     printf("% 4d",arr1[i][j]);
//	    printf("\n");
//	 }
//	 
//
//    
//     for(i=0;i<n;i++)
//     {
//	  rsum[i]=0;
//	  
//	  for(j=0;j<n;j++)
//	  
//	  rsum[i]=rsum[i]+arr1[i][j];
//     }
// 
//      
//      
//      for(i=0;i<n;i++)
//      {
//	  csum[i]=0;
//	  
//	  for(j=0;j<n;j++)
//	  
//		csum[i]=csum[i]+arr1[j][i];
//      }
// 
// 
//      printf("The sum or rows and columns of the matrix is :\n");
//      for(i=0;i<n;i++)
//      {
//	   for(j=0;j<n;j++)
//	   
//	      printf("% 4d",arr1[i][j]);
//	      
//	   printf("% 8d",rsum[i]);
//	   
//	   printf("\n");
//       }
//       printf("\n");
//	    for(j=0;j<n;j++)
//             {
//	        printf("% 4d",csum[j]);
//             }
//            printf("\n\n"); 
//  }
//
//
//

