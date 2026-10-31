//find second largest element in an array 
//this is optimal solution time complexity is O(n)
//other method is sorting but it will have more time complexity 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++)
    {
      cin>>arr[i];
    }
    int largest=arr[0];

    //we initialize second largest with -1 assuming all elements in array are positive 
    //not initializing with zero because if all elements in array are zero then code will incorrect 
    //if elements are negative then initialize with INT_MIN
    int slargest=-1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>largest)
        {
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest)
        {
            slargest=arr[i];
        }
    }
    cout<<"Second largest element is : "<<slargest;
    
}
