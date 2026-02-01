//AIM -> SWAP THE MAX AND MIN NO. OF AN ARRAY

//OPTIMIZED APPROACH

#include <iostream>
#include<climits>
using namespace std;

void maxMin(int arr[],int sz)
{
  int max=INT_MIN;
  int min=INT_MAX;
  int maxindex=0,minindex=0;
  for(int i=0; i<sz; i++)
  {
    if(arr[i] > max)
    {
      max=arr[i];
      maxindex=i;
    }
    if(arr[i] < min)
    {
      min=arr[i];
      minindex=i;
    }
  }
  swap(arr[maxindex] , arr[minindex]);

}
int main()
{
  int arr[] = {1,2,3,4,5,6};
  int size = 6;
maxMin(arr,size);
cout<<"updated array :";
for(int i=0; i<size; i++)
{
  cout<<arr[i]<<" ";
}
  return 0;
}