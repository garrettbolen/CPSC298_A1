/*
Garrett Bolen
2324654
Assignment 1
Problem 2
*/

#include <iostream>
using namespace std;

int main(){

  //The room capacity and number of people are read in through user input
  int roomCap;
  int numPeople;
  cout << "Enter the room capacity: ";
  cin >> roomCap;
  cout << "Enter the number of people attending: ";
  cin >> numPeople;

  //This if-else block checks if the fire regulations are met
  if(numPeople <= roomCap){
    cout << "Fire regulations met. " << roomCap - numPeople << " more people may attend within regulations." << endl;
  }else if(numPeople > roomCap){
    cout << "Fire regulations violated. " << numPeople - roomCap << " less people would meet regulations." << endl;
  }

  return 0;
}
