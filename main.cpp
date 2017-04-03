#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

long gradeCalc(long a, long b, long c, long d, long e, long f, long g){
  long currPerc = c + e + f;
  cout << "Current percentage is: " << currPerc  << "%" << endl;
}

int main(){
  long goalGrade;
  long totForm;
  long totSumm;
  long totHomw;
  long myForm;
  long mySumm;
  long myHomw;

  //ui
  cout << "What % do you want?:" << endl;
  cin >> goalGrade;
  cout << "Total % of Formative?:" << endl;
  cin >> totForm;
  cout << "What % do you have?:" << endl;
  cin >> myForm;
  cout << "Total % of Summative?:" << endl;
  cin >> totSumm;
  cout << "What % do you have?:" << endl;
  cin >> mySumm;
  cout << "Total % of Homework?" << endl;
  cin >> totHomw;
  cout << "What % do you have?:" << endl;
  cin >> myHomw;

  //pass to calc function
  gradeCalc(goalGrade, totForm, myForm, totSumm, mySumm, totHomw, myHomw);
}
