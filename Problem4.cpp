/*
Garrett Bolen
2324654
Assignment 1
Problem 4
*/

#include <iostream>
using namespace std;

int main(){

  double itemPrice;
  double inflationRate;
  double numYears;

  //The users inputs are read and stored into the variables defined above
  cout << "Enter the current price of the item: ";
  cin >> itemPrice;
  cout << "Enter the rate of inflation as a percentage: ";
  cin >> inflationRate;
  cout << "Enter the number of years in which the item will be purchased: ";
  cin >> numYears;

  //The inflation rate is converted into a decimal and incremented so it can be multiplied with the item price easier
  inflationRate /= 100;
  inflationRate++;

  //This loop iterates from now until the specifed year, updating the price with each iteration
  for(int i = 1; i <= numYears; ++i){
    itemPrice *= inflationRate;
  }

  cout << "After " << numYears << " years, your item will cost $" << itemPrice << endl;
  return 0;
}
