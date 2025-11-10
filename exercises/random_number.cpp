/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(nullptr));
    int x = rand() % 50; //scelgo un range da 0 a 49
    cout << "The random number is: " << x << endl;
}
