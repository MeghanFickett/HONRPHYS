#include <iostream>
using namespace std;
int main() {
  int n=0, m=0;
  while (n<10) {
    // this is the slow (or outer) loop
    cout << "n is" << n << ": ";
    m=0;
    while (m<=n) {
      // this is the fast (or inner) loop. In this loop, the slow variable (n) is a constant, this loop must run to completion before the slow loop can progress (during each iteration of the slow loop!)
      cout << m;
      m++;
    }
    //now the fast loop has finished and the slow loop can continue with the current iteration
    cout << endl;
    n++;
  }
  return 0;
}
