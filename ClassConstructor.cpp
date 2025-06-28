#include <iostream>
using namespace std;
class Hall{
  public:
  Hall(){
    cout<<"helloworld"<<endl;
  }
  void ready(){
    cout<<"ready";
  }
};
int main(){
  Hall h2;
  h2.ready();
}
