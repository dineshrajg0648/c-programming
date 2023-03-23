#include<stdio.h>

int main() 
    {
    int a[100][100], b[100][100], d[100][100],i,j,k,r,c;                           
    printf("enter how many rows and columns for a\n");                                 
    printf("enter rows   :" );                                                         
    scanf("%d",&r);                                                                    
    printf("enter column :" );                                                        
    scanf("%d",&c);                                                                    
    for (i = 0; i < r; ++i)// for row                                               
        {for (j = 0; j < c; ++j)// for column                                          
            {printf("Enter element a[%d][%d]: ", i + 1, j + 1);         
            scanf("%d", &a[i][j]);}}                                                   
    printf("enter how many rows and columns for b\n");                              
    printf("enter rows   :" );                                                        
    scanf("%d",&r);                                                                 
    printf("enter column :" );                                                        
    scanf("%d",&c);                                                                   
    printf("Enter elements of 2nd matrix\n");                                          
    for (i = 0; i < r; ++i)                                                            
        {for (j = 0; j < c; ++j)                                                      
            {printf("Enter element b[%d][%d]: ", i + 1, j + 1 );                      
            scanf("%d", &b[i][j]);}}                                                   
    printf("Enter elements of 1st matrix\n");                                         
    // multiplying two matrices
    printf("multiply of the matrix=\n");    
    for(i=0;i<r;i++)    
        {for(j=0;j<c;j++)    
            {d[i][j]=0;    
                for(k=0;k<c;k++)    
                    {d[i][j]+=a[i][k]*b[k][j];}}}  
    // printing the result
    printf("\nmultiply of two matrices: \n");
    for (i = 0; i < r; ++i)
        {for (j = 0; j < c; ++j)
            {printf("%d   ", d[i][j]);
            if (j == c - 1)
                {printf("\n\n");}}}

}
