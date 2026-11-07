// left rotate the array by d places
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//bruteforce approach
/* int leftRotate(int arr[], int n, int d)
{
    d = d % n;

    int temp[d];
    for(int i=0; i<d; i++)
    {
        temp[i]=arr[i];
    }

    for(int i=d; i<n; i++)
    {
        arr[i-d]=arr[i];
    }

    for(int i=n-d; i<n; i++)
    {
        arr[i]=temp[i-(n-d)];
    }
    return arr[n];
} */

//optimal solution
int leftRotate(int arr[], int n, int d)
{
    reverse(arr,arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
}

int main()              
{
    int n;
    cout<<"Enter no. of elements: "; 
    cin>>n;
    int d;
    cout<<"Enter how many times you have to shift: ";
    cin>>d;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    leftRotate(arr,n,d);
    for(int i=0; i<n; i++)
    {
    cout<<arr[i]<<" ";
    }
}
