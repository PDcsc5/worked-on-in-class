/* 
 * File:   main.cpp
 * Author: Patrick De La Cruz
 * Created on June 26, 2014, 12:00 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    float 
    Price=52,
    sTax=.02*Price,
    cTax=.04*Price,
    to_Tax=sTax+cTax;
    
    cout<<to_Tax<<endl;
    
//Exit stage right
    return 0;
}

