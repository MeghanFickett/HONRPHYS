#include <iostream>
using namespace std;
int main () {
  int n=1;
  int fact=1;
  
  //I just defined both of the variables I will be using.
  cout <<  "The factorial of 1 is "<<fact<<endl;
  //This will print the factorial of 1
  n++;
  //now n=2
  fact=n*(n-1);
   //This changes the value of "fact" to equal the factorial of two.
  cout <<  "The factorial of 2 is "<<fact<<endl;
  //The cout command will print the value of the factorial calculated.
  n++;
  //now n=3. This pattern will repeat until n=10.
  fact=n*(n-2)*(n-1);
  cout <<  "The factorial of 3 is "<<fact<<endl;
  n++;
  //now n=4
  fact=n*(n-3)*(n-2)*(n-1);
  cout << "The factorial of 4 is " <<fact<<endl;
  n++;
  //now n=5
  fact=n*(n-4)*(n-3)*(n-2)*(n-1);
  cout << "The factorial of 5 is " <<fact<<endl;
  n++;
  //now n=6
  fact=n*(n-5)*(n-4)*(n-3)*(n-2)*(n-1);
  cout << "The factorial of 6 is " <<fact<<endl;
  n++;
  //now n=7
  fact=n*(n-6)*(n-5)*(n-4)*(n-3)*(n-2)*(n-1);
  cout << "The factorial of 7 is " <<fact<<endl;
  n++;
  //now n=8
  fact=n*(n-7)*(n-6)*(n-5)*(n-4)*(n-3)*(n-2)*(n-1);
  cout << "The factorial of 8 is " <<fact<<endl;
  n++;
  //now n=9
  fact=n*(n-8)*(n-7)*(n-6)*(n-5)*(n-4)*(n-3)*(n-2)*(n-1);
  cout << "The factorial of 9 is " <<fact<<endl;
  n++;
  //now n=10
  fact=n*(n-9)*(n-8)*(n-7)*(n-6)*(n-5)*(n-4)*(n-3)*(n-2)*(n-1);
  cout << "The factorial of 10 is " <<fact<<endl;
  //now I am done the task of printing factorials, and I can close the program
  return 0;
}
//each time I edited fact, I changed the value of fact to equal the factorial of n. Then, using cout, I printed that value to the screen. I know I need to figure out how to use while or for loops so this process can be done faster.
