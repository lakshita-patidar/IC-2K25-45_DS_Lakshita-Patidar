#include<iostream>
using namespace std;

class arr
{
  private:
  int arr[3][4];

  public:

  void insert()
  {
    cout<<"Enter 12 elements: "<<endl;
    for(int i=0; i<3; i++)
    {
      for(int j=0; j<4; j++)
      {
        cin>>arr[i][j];
      }
    }
  }

  void display()
  {
    cout<<"The elements in array are: "<<endl;
    for(int i=0; i<3; i++)
    {
      for(int j=0; j<4; j++)
      {
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
  }

//replace the element with 0 because its dimensions are fixed
  void deleteElement()
  {
    int key;
    cout<<"Enter element to delete: "<<endl;
    cin>>key;
    for(int i=0; i<3; i++)
    {
      for(int j=0; j<4; j++)
      {
        if(arr[i][j]==key)
        {
          arr[i][j]=0;
          cout<<"Element deleted"<<endl;
          return;
        }
      }
    }
    cout<<"Element not found";
  }

  void search()
  {
    int value;
    cout<<"Enter value to search: ";
    cin>>value;
    for(int i=0; i<3; i++)
    {
      for(int j=0; j<4; j++)
      {
        if(arr[i][j]==value)
        {
          cout<<"Element found at position "<<i<<","<<j<<endl;
          return;
        }
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
}
