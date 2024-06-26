#include<iostream>
using namespace std;
int main()
{

     int x,y,p;
    int countt=0;
     cin>>x>>y;
     for (int i=0;i<x;i++){
          cin>>p;
          if (p+y<=5)
          {
               countt++;
          }
     }
     cout<<countt/3;

}
