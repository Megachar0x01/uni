#include <stdio.h>
#include <stdlib.h>
#define N 3
#define m 3
void add(int x[m][N],int y[m][N])
{
	int c[m][N];int i=0,k=0,j=0;
	while (i<=m ){
			while(j<=N)
				{c[i][j]=y[i][j]+x[i][j];
				j=j+1;}
			i=i+1;
			k=k+1;
			j=0;
			} 
	printf("Matric C:|j k l|\n         |m n o|\n         |p q r|\n");printf("j=%d,",c[0][0]);printf("k=%d,",c[0][1]);printf("l=%d,",c[0][2]);printf("m=%d,",c[1][0]);printf("n=%d,",c[1][1]);printf("o=%d,",c[1][2]);printf("p=%d,",c[2][0]);printf("q=%d,",c[2][1]);printf("r=%d,",c[2][2]);printf("\n");

}
	
void sub(int x[m][N],int y[m][N])
{
	int c[m][N];int i=0,k=0,j=0;
	while (i<=m ){
			while(j<=N)
				{c[i][j]=y[i][j]-x[i][j];
				j=j+1;}
			i=i+1;
			k=k+1;
			j=0;
			} 
	printf("Matric C:|j k l|\n         |m n o|\n         |p q r|\n");printf("j=%d,",c[0][0]);printf("k=%d,",c[0][1]);printf("l=%d,",c[0][2]);printf("m=%d,",c[1][0]);printf("n=%d,",c[1][1]);printf("o=%d,",c[1][2]);printf("p=%d,",c[2][0]);printf("q=%d,",c[2][1]);printf("r=%d,",c[2][2]);printf("\n");

}
void mul(int x[m][N], int y[m][N])
{
    int c[3][3];int i, j, k;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            c[i][j] = 0;
            for (k = 0; k < N; k++)
                c[i][j] += x[i][k] * y[k][j];
        }
    }

	
printf("Matric C:|j k l|\n         |m n o|\n         |p q r|\n");printf("j=%d,",c[0][0]);printf("k=%d,",c[0][1]);printf("l=%d,",c[0][2]);printf("m=%d,",c[1][0]);printf("n=%d,",c[1][1]);printf("o=%d,",c[1][2]);printf("p=%d,",c[2][0]);printf("q=%d,",c[2][1]);printf("r=%d,",c[2][2]);printf("\n");

}


void mul_s(int x[m][N],int f)
{
	int c[m][N];int i=0,j=0;
	while(i<3)
	{
		while(j<3)
		{
			c[i][j]=0;
			printf("c[%d][%d]=%d",i,j,c[i][j]);
			c[i][j]=f*x[i][j];j=j+1;
		}
		i=i+1;j=0;
	}
printf("Matric C:|j k l|\n         |m n o|\n         |p q r|\n");printf("j=%d,",c[0][0]);printf("k=%d,",c[0][1]);printf("l=%d,",c[0][2]);printf("m=%d,",c[1][0]);printf("n=%d,",c[1][1]);printf("o=%d,",c[1][2]);printf("p=%d,",c[2][0]);printf("q=%d,",c[2][1]);printf("r=%d,",c[2][2]);printf("\n");
}
void trans(int x[m][N])
{
	int c [3][3];int i=0,j=0;
	while(i<=2)
	{
		while(j<=2)
		{
			c[j][i]=0;
			c[j][i]=x[i][j];
			j=j+1;
		}
		i=i+1;j=0;
	}
printf("Matric C:|j k l|\n         |m n o|\n         |p q r|\n");printf("j=%d,",c[0][0]);printf("k=%d,",c[0][1]);printf("l=%d,",c[0][2]);printf("m=%d,",c[1][0]);printf("n=%d,",c[1][1]);printf("o=%d,",c[1][2]);printf("p=%d,",c[2][0]);printf("q=%d,",c[2][1]);printf("r=%d,",c[2][2]);printf("\n");

}


void  main (){
	int a[3][3],b[3][3],c[3][3];
	int ch,s,ch1;
	/* Menu */
	printf ("\n 1.Addition of Matrics \n 2.Subtraction of Matrices \n 3.Multiplication of Matrices \n 4.Scalar multiplication of Matric \n 5.Transpose od Matrix \n 6.Number of Elements in a matrix \n7.Exit \nNote:place zero in empty parts");
	printf("\n");
	printf("\n Enter your Choice: ");
	scanf("%d" ,&ch);
	printf("%d",ch); 
	printf("\n");

    printf("1. 2x2 Matrix ,2. 2x3 Matrix ,3. 3x2 Matrix ,4 3x3 matrix \n :");scanf("%d",&ch1);
	
	if (ch==4)
	{
	printf("Matric A:  |a b c| Matric B:  |r s t|\n           |d e f|	      |u v w|\n           |g h i|	      |x y z|\n");
	
	/*Matric A value Saves */
	printf("Enter a=");scanf("%d",&a[0][0]);
	printf("Enter b=");scanf("%d",&a[0][1]);
	printf("Enter c=");scanf("%d",&a[0][2]);
	printf("Enter d=");scanf("%d",&a[1][0]);
	printf("Enter e=");scanf("%d",&a[1][1]);
	printf("Enter f=");scanf("%d",&a[1][2]);
	printf("Enter g=");scanf("%d",&a[2][0]);
	printf("Enter h=");scanf("%d",&a[2][1]);
	printf("Enter i=");scanf("%d",&a[2][2]);
	
	/*Matric B value Saves */
	printf("Enter r=");scanf("%d",&b[0][0]);
	printf("Enter s=");scanf("%d",&b[0][1]);
	printf("Enter t=");scanf("%d",&b[0][2]);
	printf("Enter u=");scanf("%d",&b[1][0]);
	printf("Enter v=");scanf("%d",&b[1][1]);
	printf("Enter w=");scanf("%d",&b[1][2]);
	printf("Enter x=");scanf("%d",&b[2][0]);
	printf("Enter y=");scanf("%d",&b[2][1]);
	printf("Enter z=");scanf("%d",&b[2][2]);

	}
	else if (ch==3)
	{
	printf("Matric A:  |a b| Matric B:  |u v|\n           |c d|	      |w x|\n           |e f|	      |y z|\n");

	/*Matric A value Saves */
	printf("Enter a=");scanf("%d",&a[0][0]);
	printf("Enter b=");scanf("%d",&a[0][1]);
	printf("Enter c=");scanf("%d",&a[1][0]);
	printf("Enter d=");scanf("%d",&a[1][1]);
	printf("Enter e=");scanf("%d",&a[2][0]);
	printf("Enter f=");scanf("%d",&a[2][1]);

	
	/*Matric B value Saves */
	printf("Enter u=");scanf("%d",&b[0][0]);
	printf("Enter v=");scanf("%d",&b[0][1]);
	printf("Enter w=");scanf("%d",&b[1][0]);
	printf("Enter x=");scanf("%d",&b[1][1]);
	printf("Enter y=");scanf("%d",&b[2][0]);
	printf("Enter z=");scanf("%d",&b[2][1]);
	
	}
	else if (ch==2)
	{
	printf("Matric A:  |a b c| Matric B:  |u v w|\n           |d e f|	      |x y z|\n");

	/*Matric A value Saves */
	printf("Enter a=");scanf("%d",&a[0][0]);
	printf("Enter b=");scanf("%d",&a[0][1]);
	printf("Enter c=");scanf("%d",&a[0][2]);
	printf("Enter d=");scanf("%d",&a[1][0]);
	printf("Enter e=");scanf("%d",&a[1][1]);
	printf("Enter f=");scanf("%d",&a[1][2]);
	
	/*Matric B value Saves */
	printf("Enter u=");scanf("%d",&b[0][0]);
	printf("Enter v=");scanf("%d",&b[0][1]);
	printf("Enter w=");scanf("%d",&b[0][2]);
	printf("Enter x=");scanf("%d",&b[1][0]);
	printf("Enter y=");scanf("%d",&b[1][1]);
	printf("Enter z=");scanf("%d",&b[1][2]);
	
	}
	else if (ch==1)
	{
	printf("Matric A:  |a b| Matric B:  |w x|\n           |c d|	      |y z|\n");

	/*Matric A value Saves */
	printf("Enter a=");scanf("%d",&a[0][0]);
	printf("Enter b=");scanf("%d",&a[0][1]);
	printf("Enter c=");scanf("%d",&a[0][2]);
	printf("Enter d=");scanf("%d",&a[1][0]);
	
	/*Matric B value Saves */
	printf("Enter w=");scanf("%d",&b[0][0]);
	printf("Enter x=");scanf("%d",&b[0][1]);
	printf("Enter y=");scanf("%d",&b[0][2]);
	printf("Enter z=");scanf("%d",&b[1][0]);
	
	}
	else
	{printf("Wrong Entry:");}
	
	if (ch==1)
    	{add(a,b);}
    else if (ch==2)
    	{sub(a,b);}
    else if (ch==3)
    	{mul(a,b);}
    else if(ch==4)
    	{printf("Enter scalar Number for mul with Matric A:");scanf("%d",&s);mul_s(a,s);}
    else if (ch==5)
    	{trans(a);}
    else if(ch==6)
    	{int z=sizeof(a)/sizeof(int);printf("%d",z);printf("\n");}
    else
    	{printf("modules in working");}
	
		
}