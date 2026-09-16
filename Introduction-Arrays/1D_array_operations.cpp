#include<iostream>
using namespace std;

class arr{
    int arr[5];

    public:

    void insert()
    {
        cout<<"Enter 5 elements in the array: "<<endl;
        for(int i=0; i<5; i++)
        {
            cin>>arr[i];
        }
        cout<<endl;
    }

    void display()
    {
        cout<<"The array is: "<<endl;
        for(int i=0; i<5; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void deleteElement()
    {
        int pos;
        cout<<"Enter position to delete: ";
        cin>>pos;

        for(int i=pos-1; i<4; i++)
        {
            arr[i]=arr[i+1];
        }
        
        cout<<"After deletion: ";
        for(int i=0; i<4; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl; 
    }

    void search()
    {
        int value;
        cout<<"Enter value to search: ";
        cin>>value;
        for(int i=0; i<5; i++)
        {
            if(arr[i]==value)
            {
                cout<<"Element found at position "<<i<<endl;
                return;
            }
        }
        cout<<"Element not found";
    }

};

int main()
{
    arr a;
    a.insert();
    a.display();
    a.deleteElement();
    a.search();
    return 0;
}
