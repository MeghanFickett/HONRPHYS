#include <iostream>
using namespace std;
int main() {
  bool prop;
  prop=(5>1);
  cout << "prop is" <<prop<<endl;
  prop=(1>5);
  cout << "prop is " <<prop<<endl; //testing if these statements are true and false
  prop=(1 !=5);
  cout << "prop is " <<prop<<endl; //!= means not equal to
  return 0;
}
