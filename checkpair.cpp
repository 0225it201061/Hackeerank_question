#include<iostream>
using namespace std;
bool checkpair (int A[], int size , int x)
{
	for(int i=0; i<size-1; i++)
	{
	for(int j= j+i; j<size; j++){
		
	
		if(A[i]+A[j]==x){
		
	}
	
	}
};
	return 1;
}

int main()
{
	int A[] = {0,-1, 2,3,1};
	int x=-2;
	int size =sizeof(A)/sizeof(A[0]);
	if (checkpair(A,size,x))
	{
		cout<<"yes"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
} 
