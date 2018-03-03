#include <iostream>
using namespace std;
int main()
{
   int n,m,p;
   cout<<"Enter n=";
   cin>>n>>m;
   p=n*m;
   if(p%2==0)
   {
       cout<<"even";
   }
   else
   {
       cout<<"odd";
   }
   return 0;
}
