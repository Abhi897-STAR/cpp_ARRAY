#include<iostream>
using namespace std;

int uniqueValue(int arr[],int sz)
{
    int ans=0;
    for(int i=0; i<sz; i++)
    {
        ans= ans^arr[i];
    }
    return ans;
}
int main ()
{
    int arr[]={1,55,88,55,1};
    int sz=5;
    cout<<"unique value is :"<<uniqueValue(arr,sz);
   
    return 0;
}

