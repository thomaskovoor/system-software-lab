#include<stdio.h>
#include <stdlib.h>
int main()
{
	int f[50],st,j,len,c,k;
    //start =st , length = len
 
	for (int i = 0; i < 50; ++i)
	{
		f[i]=0; //initializing all location as unalllocated
	}

	X:
	printf("\nEnter the starting block & length of file :");
	scanf("%d%d",&st,&len);

	for (int j = st; j < (st+len); ++j)	
	{
		if (f[j] == 0)
		{
			f[j] = 1;
			printf("\n%d->%d",j,f[j]);
		}
		else
		{
			printf("Block already allocated");
			break;
		}
	}

	if(j==(st+len))
		printf("\n the file is allocated to disk");
	printf("\n if u want to enter more files?(y-1/n-0)");
	scanf("%d",&c);
	if(c==1)
	 	goto X;
	else
	 	exit(0);

	return 0;
}