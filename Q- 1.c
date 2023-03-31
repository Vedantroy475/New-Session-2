//C program to add and multiply two 2D arrays
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3], b[3][3], c[3][3]={0}, d[3][3]={0};
	int i,j,k,mo,N,p,q;//Section for taking coding input
	printf("Enter no. of rows and columns in matrix A: ");
	scanf("%d%d",&mo,&N);
	printf("Enter no. of rows and columns in matrix B: ");
	scanf("%d%d",&p,&q);
	if(mo!=p || N!=q)
	{
		printf("Matrix Addition is not possible");
		return;
	}// Name- Vedant Roy, Enrollment No.- 1201901121, Branch- B. Tech AI and ML
	else if(N!=p)
	{
		printf("Matrix Multiplication is not possible");
		return;
	}
	else
	{
		printf("Enter elements of matrix A: ");
		for(i=0;i<mo;i++)
			for(j=0;j<N;j++)
				scanf("%d", &a[i][j]);
		printf("Enter elements of matrix B: ");
		for(i=0;i<p;i++)
			for(j=0;j<q;j++)
				scanf("%d", &b[i][j]);
		//Matrix Addition
		for(i=0;i<mo;i++)
			for(j=0;j<N;j++)
				c[i][j] = a[i][j] + b[i][j];
		printf("\nResult of Matirx Addition:\n");
		for(i=0;i<mo;i++)
		{
			for(j=0;j<N;j++)
				printf("%d ", c[i][j]);
			printf("\n");
		}
		//Matrix Multiplication
		for(i=0;i<mo;i++)
			for(j=0;j<q;j++)
				for(k=0;k<p;k++)
					d[i][j] += a[i][k]*b[k][j];
		printf("\nResult of Matirx Multiplication:\n");
		for(i=0;i<mo;i++)
		{
			for(j=0;j<q;j++)
				printf("%d ", d[i][j]);
			printf("\n");
		}
	}
    return 0;
}
