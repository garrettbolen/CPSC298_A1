/*
Garrett Bolen
2324654
Assignment 1
Problem 1
*/

#include <iostream>
using namespace std;

int main(){

  //The user is prompted to input the weight of their cereal which is stored in weight_oz
  double weight_oz;
  cout << "Enter the weight of your cereal in oz: ";
  cin >> weight_oz;

  //The value is diveded both ways to produce the result
  cout << "The weight of your cereal in metric tons is: " << weight_oz/35273.92 << endl;
  cout << "You would need " << 35273.92/weight_oz << " boxes to make one metric ton." << endl;
  return 0;
}
