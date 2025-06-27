#include <iostream>
using namespace std;

int main() {
int n,flag=-1,a;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
cin>>a;
for(int i=0;i<n;i++)
if(arr[i]==a)
{
   flag=i;
}
if(flag!=-1)
   cout<<flag;
   else
   cout<<"Not found";

}