#include<bits/stdc++.h>

using namespace std;

int main()
{
	int size;
	int max_sum=INT_MIN,sum=0,temp;
	
	cin>>size;
	
	int arr[size];
	
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<size;i++)
	{
		sum=0;
		
		for(int j=i;j<size;j++)
		{
				sum+=arr[j];
				
				if(sum>max_sum)
					max_sum=sum;
		}
	}
	
	cout<<max_sum<<endl;
	return 0;
}
