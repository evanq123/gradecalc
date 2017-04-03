#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

float percConv(float a, float b){
  float d = a / b;
  return d;
}

float gradeCalc(float a, float b, float c){
  float w = percConv(c, b);
  float d = w * a;
  return d;
}

int main(){
  //ui
  cout << "What % do you want?:" << endl;
  float goalGrade; cin >> goalGrade;

  cout << "Enter values for Formative (if none put 0 for all): " << endl;
    cout << "Weight: " << endl;
    float wForm; cin >> wForm;
    cout << "Total: " << endl;
    float totForm; cin >> totForm;
    cout << "Current points?: " << endl;
    float myForm; cin >> myForm;

  cout << "Enter values for Summative (if none put 0 for all): " << endl;
    cout << "Weight: " << endl;
    float wSumm; cin >> wSumm;
    cout << "Total: " << endl;
    float totSumm; cin >> totSumm;
    cout << "Current points?: " << endl;
    float mySumm; cin >> mySumm;

  cout << "Enter values for Homework (if none put 0 for all): " << endl;
    cout << "Weight: " << endl;
    float wHome; cin >> wHome;
    cout << "Total: " << endl;
    float totHome; cin >> totHome;
    cout << "Current points?: " << endl;
    float myHome; cin >> myHome;

  //pass to calc function
  float percForm = gradeCalc (wForm, totForm, myForm);
  float percSumm = gradeCalc (wSumm, totSumm, mySumm);
  float percHome = gradeCalc (wHome, totHome, myHome);

  //debug
  cout << "Formative: " << percForm << endl
    << "Summative: " << percSumm << endl
    << "Homework: " << percHome << endl;
}
