#include<iostream>
using namespace std;
int main()
{
	int i,j,size,mat[size][size],sum_left=0,sum_right=0;
	cout<<"enter size of matrix"<<endl;
	cin>>size;
	cout<<"enter elements"<<endl;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cin>>mat[i][j];
			if(i==j)
			sum_left=sum_left+mat[i][j];
			if((i+j)==size-1)
			sum_right=sum_right+mat[i][j];
		}
	}
	cout<<"sum of left diagonal is"<<sum_left<<endl;
	cout<<"sum of right diagonal is"<<sum_right<<endl;
	return 0; 
}
