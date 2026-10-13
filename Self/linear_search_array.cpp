// linear search
//given array is [1,2,3,4,6] find at which place 4 is ? 
#include<iostream>
using namespace std;
int search(int arr[], int n, int num)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==num)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int num;
    cout<<"Find the index of: ";
    cin>>num;
    int k=search(arr,n,num);
    cout<<k;
}
