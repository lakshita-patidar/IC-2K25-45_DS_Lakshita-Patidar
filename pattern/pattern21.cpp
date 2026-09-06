#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        //print 1st  triangle
       int j=1;
       while(j<=n-i+1)
       {
        cout<<j;
        j++;
       }

       //print 2nd triangle
       int star=i-1;
      while(star)
      {
        cout<<"*";
        star--;
      }


      //print 3rd triangle
      int tara=i-1;
      while(tara)
      {
        cout<<"*";
        tara--;
      }


       //print 4th triangle 
       int start=n-i+1;
       while(start)
       {
        cout<<start;
        start--;
       }
       cout<<endl;
       i++;
    }
}
