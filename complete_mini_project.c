#include<stdio.h>
#include<stdlib.h>
void add()
{
int i,j,r,c,re,u,v;
int a[50][50],b[50][50],add[50][50];
printf("Rules for two matrix adddition:\nThe rows and columns of the both the matrices are same then and then addition is possible:\nenter 1 for addition:\n");
scanf("%d",&re);
if(re==1)
{

printf("enter the rows of matrix 1:\n");
scanf("%d",&r);
printf("enter the columns of matrix 1:\n");
scanf("%d",&c);
printf("enter the first matrix elements:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the rows of matrix 2:\n");
scanf("%d",&u);
printf("enter the columns of matrix 2:\n");
scanf("%d",&v);
printf("enter the second matrix elements:\n");
for(i=0;i<u;i++)
{
for(j=0;j<v;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("the elements of matrix 1:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%5d",a[i][j]);
}
printf("\n");
}

printf("the elements of matrix 2:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%5d",b[i][j]);
}
printf("\n");
}

if(v==c&&u==r)
{
for(i=0;i<u;i++)
{
for(j=0;j<v;j++)
{
add[i][j]=a[i][j]+b[i][j];
}
}
printf("the addition of two matrixes:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%5d",add[i][j]);
}
printf("\n");
}
}
else
{
	printf("the addition is not possible!\n");
}
}
}
void sub()
{
int i,j,r,c,re,v,u;
int a[50][50],b[50][50],add[50][50];
printf("Rules for two matrix substrcation:\nThe rows and columns of the both the matrices are same then and then subtraction is possible:\nenter 1 for substrction:\n");
scanf("%d",&re);
if(re==1)
{
printf("enter the rows of matrix 1:\n");
scanf("%d",&r);
printf("enter the columns of matrix 1:\n");
scanf("%d",&c);
printf("enter the first matrix elements:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the rows of matrix 2:\n");
scanf("%d",&u);
printf("enter the columns of matrix 2:\n");
scanf("%d",&v);
printf("enter the second matrix elements:\n");
for(i=0;i<u;i++)
{
for(j=0;j<v;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("the elements of matrix 1:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%5d",a[i][j]);
}
printf("\n");
}
printf("the elements of matrix 2:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%5d",b[i][j]);
}
printf("\n");
}

if(r==u&&c==v)
{
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
add[i][j]=a[i][j]-b[i][j];
}
}
printf("the substraction of two matrixes:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%5d",add[i][j]);
}
printf("\n");
}
}
else
{
	printf("substraction cannot calculate!\n");

}
}
}
void trans()
{
	int i,j;
	int a[10][10],b[10][10];
	int r,c,re;
	printf("the rule for matrix transpose:\nIf M[ ij ] is a m x n matrix, and we want to find the transpose of this matrix, \nwe need to interchange the rows to columns and columns to rows.\n It would be denoted by MT or M'.\n So if M = [M[ ij ] ]m x n is the original matrix, then M' = [M[ ji ] ]n x m is the transpose of it.\n");
	printf("enter the 1 for matrix transpose\n");
	scanf("%d",&re);
	if(re==1)
	{
	printf("enter the rows of matrix:\n");
	scanf("%d",&r);
	printf("enter the columns of matrix:\n");
	scanf("%d",&c);
	printf("enter the elements of matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	printf("entered matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("matrix transpose\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d  ",b[i][j]);
		}
		printf("\n");
	}
}
}
void mult()
{
	int a[20][20],b[20][20],sum[20][20];
	int r,c,i,j,k,s,t,sum1=0,re;
	printf("the rule for two matrix multiplication is\n the number of columns in the first matrix should be equal to the number of rows in the second matrix.\n");
	printf("enter 1 for multiplication :\n");
	scanf("%d",&re);
	if(re==1)
	{
	printf("enter the rows of first marix:\n");
	scanf("%d",&r);
	printf("enter the columns of first marix:\n");
	scanf("%d",&c);
	printf("enter the elements of first matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the rows of second marix:\n");
	scanf("%d",&s);
	printf("enter the columns of second marix:\n");
	scanf("%d",&t);
	printf("enter the elements of second matrix:\n");
	for(i=0;i<s;i++)
	{
		for(j=0;j<t;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("element of first matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	printf("element of second matrix\n");
	for(i=0;i<s;i++)
	{
		for(j=0;j<t;j++)
		{
			printf("%5d",b[i][j]);
		}
		printf("\n");
	}
	if(c!=s)
	{
		printf("ERROR!");
	}
	else
	{
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<t;j++)
		{	
		sum1=0;
			for(k=0;k<s;k++)
			{
				sum1=sum1+(a[i][k]*b[k][j]);	
			}
			sum[i][j]=sum1;
		}
	}
	
	printf("the multiplication is :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<t;j++)
		{
			printf("%d  ",sum[i][j]);
		}
		printf("\n");
	}
}
}
}
void det()
{
	int det=0,a[10][10],i,j;
	int r,c,re;
	printf("rule for the determinant of matrix:\nmatrix must have order nxn\n");
	printf("enter 1 for calculation:\n");
	scanf("%d",&re);
	if(re==1)
	{
	printf("enter the order of matrix:\n");
	scanf("%d%d",&r,&c);
	printf("enter the matrix elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the entered matrix is :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	if(r!=c)
	{
		printf("determinant cannot calculate!");
	}
	if(r==2&&c==2)
	{
		det=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
		printf("the determinant is %d",det);
	}
	if(r==3&&c==3)
	{
		det=a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1]))-a[0][1]*((a[1][0]*a[2][2])-(a[1][2]*a[2][0]))+a[0][2]*((a[1][0]*a[2][1])-(a[1][1]*a[2][0]));
		printf("the determinant is %d",det);
	}
	if(r==4&&c==4)
	{
		det=a[0][0]*(a[1][1]*(a[2][2]*a[3][3])-(a[2][3]*a[3][2]))-(a[1][2]*(a[2][1]*a[3][3])-(a[2][3]*a[3][1]))+(a[1][3]*(a[2][1]*a[3][2]-a[2][2]*a[3][1]))-a[0][1]*(a[1][0]*(a[2][2]*a[3][3])-(a[2][3]*a[3][2]))-(a[1][2]*(a[2][0]*a[3][3])-(a[2][3]*a[3][0]))+(a[1][3]*(a[2][0]*a[3][2])-(a[2][2]*a[3][0]))+a[0][2]*(a[1][0]*(a[2][1]*a[3][3])-(a[2][3]*a[3][1]))-(a[1][1]*(a[2][0]*a[3][3])-(a[2][3]*a[3][0]))+(a[1][3]*(a[2][0]*a[3][1])-(a[2][1]*a[3][0]))-a[0][3]*(a[1][0]*(a[2][1]*a[3][2])-(a[2][2]*a[3][1]))-(a[1][1]*(a[2][0]*a[3][2])-(a[2][2]*a[3][0]))+(a[1][2]*(a[2][0]*a[3][1])-(a[2][1]*a[3][0]));
		printf("the determinant is %d",det);
	}
}
}
void adj()
{
	int a[100][100],adj[100][100];
	int i,j,re,r,c;
	printf("the rules for the calcylatin adjiont of matix:\nthe adjoint should be order nxn\n");
	printf("enter 1 for the calculation:\n");
	scanf("%d",&re);
	if(re==1)
	{
		printf("enter the order of matrix:\n");
		scanf("%d%d",&r,&c);
		printf("enter the elements of matrix:\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("entered matrix is:\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%5d",a[i][j]);
			}
			printf("\n");
		}
		if(r!=c)
		{
			printf("adjoint cannot calculate!");
		}
		if(r==2&&c==2)
		{
			adj[0][0]=a[1][1];
			adj[0][1]=a[1][0];
			adj[1][0]=a[0][1];
			adj[1][1]=a[0][0];
			printf("the adjoint is :\n");
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					printf("%5d",adj[j][i]);
				}
				printf("\n");
			}
		}
		if(r==3&&c==3)
		{
			adj[0][0]=(a[1][1]*a[2][2])-(a[1][2]*a[2][1]);
			adj[0][1]=(a[1][0]*a[2][2])-(a[1][2]*a[2][0]);
			adj[0][2]=(a[1][0]*a[2][1])-(a[1][1]*a[2][0]);
			adj[1][0]=(a[0][1]*a[2][2])-(a[0][2]*a[2][1]);
			adj[1][1]=(a[0][0]*a[2][2])-(a[0][2]*a[2][0]);
			adj[1][2]=(a[0][0]*a[2][1])-(a[0][1]*a[2][0]);
			adj[2][0]=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
			adj[2][1]=(a[0][0]*a[1][2])-(a[0][2]*a[1][0]);
			adj[2][2]=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
			printf("the adjoint of matrix:\n");
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					printf("%5d",adj[j][i]);
				}
				printf("\n");
			}
			

		}
	}
}
void inverse()
{
	int r,c,i,j,re;
	int a[50][50],adj[50][50],in[50][50],ad[50][50];
	int det;
	printf("rule for the calculation inverse of matrix is\nthe matrix must have order nxn\n");
	printf("enter 1 for calculation\n");
	scanf("%d",&re);
	if(re==1)
	{
	printf("enter the order of matrix:\n");
	scanf("%d%d",&r,&c);
	printf("enter the elements of matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("entered the elements of matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	if(r!=c)
	{
		printf("inverse cannot calculate!");
	}
	if(r==2&&c==2)
	{
		det=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
			adj[0][0]=a[1][1];
			adj[0][1]=a[1][0];
			adj[1][0]=a[0][1];
			adj[1][1]=a[0][0];
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					ad[i][j]=adj[j][i];
				}
			}
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					in[i][j]=ad[j][i]/det;
				}
			}
			printf("the inverse is :\n");
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					printf("%5d",in[j][i]);
				}
				printf("\n");
			}
	}
		if(r==3&&c==3)
		{
			det=a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1]))-a[0][1]*((a[1][0]*a[2][2])-(a[1][2]*a[2][0]))+a[0][2]*((a[1][0]*a[2][1])-(a[1][1]*a[2][0]));
			adj[0][0]=(a[1][1]*a[2][2])-(a[1][2]*a[2][1]);
			adj[0][1]=(a[1][0]*a[2][2])-(a[1][2]*a[2][0]);
			adj[0][2]=(a[1][0]*a[2][1])-(a[1][1]*a[2][0]);
			adj[1][0]=(a[0][1]*a[2][2])-(a[0][2]*a[2][1]);
			adj[1][1]=(a[0][0]*a[2][2])-(a[0][2]*a[2][0]);
			adj[1][2]=(a[0][0]*a[2][1])-(a[0][1]*a[2][0]);
			adj[2][0]=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
			adj[2][1]=(a[0][0]*a[1][2])-(a[0][2]*a[1][0]);
			adj[2][2]=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					ad[i][j]=adj[j][i];
				}
			}
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					in[i][j]=ad[j][i]/det;
				}
			}
			printf("the inverse is :\n");
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					printf("%5d",in[j][i]);
				}
				printf("\n");
			}
 	}
}
}
void main ()
{
while(1)
{
char op;
printf("\n\n\t\t\t\t\t!!!!WELCOME TO MATRIX CALCULATOR!!!!\n\n\n");
printf("enter the operation:\n");
printf("for addition enter +\n");
printf("for substraction enter -\n");
printf("for multiplication enter *\n");
printf("for transpose enter T\n");
printf("for determinant enter D\n");
printf("for adjoint enter A\n");
printf("for inverse enter I\n");
printf("for exit enter X\n");
scanf("%s",&op);
switch(op)
{
case '+':
add();
break;
case '-':
sub();
break;
case'*':
mult();
break;
case'T':
trans();
break;
case'D':
det();
break;
case'A':
adj();
break;
case'I':
inverse();
break;
case'X':
exit(0);
default:
printf("ERROR!");
break;
}
}
}
