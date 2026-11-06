//check whether the array is sorted or not 
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
    bool sorted=true;
    for(int i=1; i<n; i++)
    {
        if(arr[i]>=arr[i-1])
        {
          continue;
        }
        else {
            sorted=false;
        }
    }
    if(sorted)
    {
        cout<<"Array is sorted";
    }
    else {
        cout<<"Array is not sorted";
    }
}
