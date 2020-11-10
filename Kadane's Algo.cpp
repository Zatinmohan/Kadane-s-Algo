#include<iostream>
/*
 * example - 2 -3 4 -1 -2 1 5 -3
   output  - 7 
   how -  4+ (-1) + (-2) + 1 + 5 = 7.
*/
int main()
{
  int size,max_sum=INT_MIN,sum=0;
  
  std::cin>>size;							//size of array
  
  int arr[size];						//array inilisation
  
  for(int i=0;i<size;i++)
  {
  	std::cin>>arr[i];						//input in array
  }
  
  for(int i=0;i<size;i++)
  {
  	sum+=arr[i];						//finding out the sum.
	
	if(max_sum<sum)						//if sum is greater then max sum than max sum will become the sum.
		max_sum=sum;
	if(sum<0)							//if sum is negative then make sum 0 and continue with the loop.
		sum=0;
  }
  
  std::cout<<"SUM : "<<max_sum;
  return 0;
}
