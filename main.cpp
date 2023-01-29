// lab8.cpp - Use a while loop to print messages declaring your passion for

#include <iostream>

using namespace std;

int main() {

  int n;

  cout << "How many times should I print?";
  cin >> n;
  
  int i = 1;
  while (i <= n) {
    cout << i << " " << "I love Computer Science!!"<< endl;
    i++;
  }
  cout << "Printed this message " << n << " times.";
  
  
  return 0;
}