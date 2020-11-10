#include<iostream>

int main()
{
	int size;
	int max_sum=INT_MIN,sum=0,temp;
	
	std::cin>>size;
	
	int arr[size];
	
	for(int i=0;i<size;i++)
	{
		std::cin>>arr[i];
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
	
	std::cout<<max_sum<<endl;
	return 0;
}
