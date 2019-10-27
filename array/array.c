#include "stdio.h"



int main()
{
	char d1[4];
	char d2[4][6];
	char d3[4][6][5];
	int count1=0,count2=0,count3=0;
	int i,j,k;
	for(i=0;i<4;i++)
	{
		for(j=0;j<6;j++)
		{
			for(k=0;k<5;k++)
			{	
				
				d3[i][j][k]=count3++;
			}
			d2[i][j]=count2++;
		}
		d1[i]=count1++;
	}
	printf("\n1d array\n");
	for(i=0;i<4;i++)
	{
		printf("%d ",*(d1+i));
		
	}
	printf("\n2d array\n");
	for(i=0;i<sizeof(d2);i++)
	{
		printf("%d ",((char*)d2)[i]);
		
	}
	printf("\n3d array\n");
	for(i=0;i<sizeof(d3);i++)
	{
		printf("%d ",((char*) d3)[i]);
		
	}
}