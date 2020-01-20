/*
Garrett Bolen
2324654
Assignment 1
Problem 3
*/

#include <iostream>
using namespace std;

int main(){

  double hours;
  double overtime;
  double wageStd = 16.00;
  double wageOvr = 24;

  double grossPay;
  double netPay;
  double medInsurance = 10.00;
  double incomeTaxFed;
  double incomeTaxState;
  double socialSecurityTax;

  //The user's input is read and stored in the variable hours
  cout << "Enter the number of hours worked this week: ";
  cin >> hours;

  //This if-else statement checks if the user worked overtime (>40 hrs)
  if(hours <= 40){
    grossPay = wageStd * hours;
  }else if(hours > 40){
    //If they worked overtime, their overtime hours get the overtime wage bonus
    overtime = hours - 40;
    grossPay = (wageStd * (hours - overtime)) + (wageOvr * overtime);
  }

  //Each tax is calculated from the gross pay
  incomeTaxFed = grossPay * .14;
  incomeTaxState = grossPay * .05;
  socialSecurityTax = grossPay * .06;

  //The net pay is calculated by subtracting all witheld amounts from the gross pay
  netPay = grossPay - incomeTaxFed - incomeTaxState - socialSecurityTax - medInsurance;

  cout << "Your gross pay is: " << grossPay << endl;
  cout << "Amount witheld by federal income tax: " << incomeTaxFed << endl;
  cout << "Amount witheld by state income tax: " << incomeTaxState << endl;
  cout << "Amount witheld by Social Security tax: " << socialSecurityTax << endl;
  cout << "Medical insurance fee: " << medInsurance << endl;
  cout << "Your net pay is: " << netPay << endl;

  return 0;
}
