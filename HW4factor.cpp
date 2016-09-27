#include <iostream>
using namespace std;
int main() {
  for(int n=1; n<=100; n+=1) {
    cout <<n<< " : ";
    for(int x=1; x<=n; x+=1) {
      if(n%x==0) {
	cout <<x<< " ";
      }
    }
    cout <<endl;
  }
  return 0;
}
