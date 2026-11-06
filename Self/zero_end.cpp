//Move zero at the end of array
//this is optimal solution using two pointer 
#include<iostream>
using namespace std;
int moveZero(int arr[], int n)
{
    int j = -1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }
    if(j == -1) return arr[n];

    for(int i=j+1; i<n; i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }

    return arr[n];
}
int main()
{
    int n;
    cout<<"Enter no. of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array: ";
    for(int i=0; i<n; i++)
    {
      cin>>arr[i];
    }
    moveZero(arr,n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

}
