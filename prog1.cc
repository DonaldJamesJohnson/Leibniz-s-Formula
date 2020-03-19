/*
  prog.cc
  Donald Johnson
  CSCI 501
*/

#include "prog1.h"

int main(){
    unsigned num;
    cout << "Enter value of N: ";
    cin >> num;
    cout << endl;
    cout << "Leibniz's formula output: " << addTerms(num) << endl;
    return 0;
}

double addTerms(unsigned n){
    double returnValue = 0;
    for (int i=0; i<n; i++){
        returnValue += pow(-1.0, i)/((2.0*(i))+1.0) * 4.0;
    }
    return returnValue;
}
