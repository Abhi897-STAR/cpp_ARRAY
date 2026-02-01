// AIM -> FIND SECOND LARGER NO. IN ARRAY

#include <iostream>
using namespace std;

// // brute force approach


int main()
{
    int arr[] = {45, 89, 46, 15, 78, 658};
    int size = sizeof(arr) / sizeof(int);
    int max1, max2;
    if (arr[0] > arr[1])
    {
        max1 = arr[0];
        max2 = arr[1];
    }
    else
    {
        max1 = arr[1];
        max2 = arr[0];
    }
    for(int i=2; i<size; i++)
    {
        if(arr[i] > max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i] > max2)
        {
            max2=arr[i];
        }
    }
    cout<<"second larger element  is : "<<max2<<endl;
    return 0;
}

//IMPORTANT EDGE CASE
// Duplicate largest values me ye code galat output dega

// example -> arr[]={10,10,5};
//         iska second largest value 5 h lekin ye code output me 10 show karega.


#include<iostream>
#include<climits>
using namespace std;

//OPTIMAL APPROACH

int main()
{
    int arr[]={233,45,67,233,670,567};
    int size=sizeof(arr) / sizeof(int);

    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for(int i=0; i<size; i++)
    {
        if(arr[i] > max1)
        {
            max2= max1;
            max1=arr[i];
        }
        else if(arr[i] > max2 && (arr[i] != max1))
        {
            max2=arr[i];
        }
    }
    cout<<"second larger element  is : "<<max2<<endl;
    return 0;
}


// First vala code nhi run karega yadi usme 2 size se kam ka array hua to.
// ya Garbage value return kar dega.

// INT_MIN ka use q kiya ?
// Ans-> To handle negative values, duplicates, and avoid boundary issues.
// This code works for any array size ≥ 1.

// EDGE CASE 2 :

// arr[]={10,10};
// isme second largest value exist hi nhi karti tab -> 

// CODE ->

// if (max2 == INT_MIN)
// {
//     cout << "Second largest does not exist";
// }
// else
// {
//     cout << max2;

// }
