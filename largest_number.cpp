// find largest element in an array
//optimal solution for this question time complexity is O(n)
//other way is sort the array and last element will be largest but time complexity will be O(nlogn)
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements in an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int largest=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    cout<<largest;
}
