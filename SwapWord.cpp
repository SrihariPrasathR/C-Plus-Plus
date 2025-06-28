
#include <iostream>
using namespace std;
int main(){
    int b,c;
string a;

getline(cin,a);
int n=a.length();
for(int i=0;i<n;i++){
    if(int(a[i])!=32)
      c=0;
    else
    b=i+1;

}
for(int i=b;i<n;i++)
cout<<a[i];
cout<<" ";
for(int i=0;i<b-1;i++)
cout<<a[i];
}
