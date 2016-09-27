#include <iostream>
using namespace std;
int main() {
  //begin the first for statement that introduces integer n
  for(int n=1; n<=100; n+=1) {
    //defines n as beginning at 1 and adding 1 until it reaches 100
    cout <<n<< " : ";
    //prints n with colon 
    for(int x=1; x<=n; x+=1) {
      //second for statement. Defines integer x which will be what n is divided by. n will be divided by each number less than and icluding n, and x will increase along with n.
      if(n%x==0) {
	//if statement that will test whether n/x will produce a remainder of 0. If the remainder is 0, then x is a factor of n. If this condition is met, then the next command will be executed.
	cout <<x<< " ";
	//this command will print x if the above command is met. Each x will be separated by a space, hence the << " ";
      }
      //ends if statement
    }
    //ends inner for loop
    cout <<endl;
    //this starts a new line for every n value
  }
  //ends outer for loop
  return 0;
}
//ends command
