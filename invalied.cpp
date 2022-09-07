#include<stdio.h>
int main()
{
	int i,j,N;
	printf("Enter the N: ");
	scanf("%d",&N);
	if(N<=0)
	printf("invalid no of rows");
	else 
	{	
	     for(i=1;i<=N;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i*i);
		}
		printf("\n");
	}
}
		printf("\n");

	return 0;
}
 int rows, num = 1;
 
    cout << "Enter number of rows: ";
    cin >> rows;
