//remove duplicates from sorted array
//this method is two pointer method and optimal method with time complexity O(n)
#include<iostream>
using namespace std;
int removeDuplicate(int arr[], int n)
{
    int i=0;
    for(int j=1; j<n; j++)
    {
        if(arr[i]!=arr[j])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
int main()
{
    /* if don't want to make function and call it you can do this write all code in int main  
    int arr[7]={1,1,2,2,2,8,8};
    int i=0;
    cout<<arr[0]<<" ";
    for(int j=1; j<7; j++)
    {
        if(arr[i]!=arr[j])
        {
            arr[i+1]=arr[j];
            cout<<arr[i+1]<<" ";
            i++;
        }
    } */

    int n=7;
    int arr[7]={1,1,2,2,3,3,4};
    int k=removeDuplicate(arr,n);
    for(int i=0; i<k; i++)
    {
        cout<<arr[i]<<" ";
    }
}
