/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 2, 2014, 10:39 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
   const float YEN_PER_DOLLAR=83.14, EUROS_PER_DOLLAR=0.7337;
   float eDol, yDol, oneDol;
   
   cout<<"enter amount of dollars: $";cin>>oneDol;
   cout<<setprecision(2)<<fixed;
   eDol=oneDol*EUROS_PER_DOLLAR;
   yDol=oneDol*YEN_PER_DOLLAR;
   cout<<"$"<<oneDol<<" is equivelent to:\n";
   cout<<eDol<<" euros and "<<yDol<<" yen\n";

    
//Exit stage right
    return 0;
}


