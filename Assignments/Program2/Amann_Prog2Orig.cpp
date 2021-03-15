///////////////////////////////////////////////////////////////////////////////
//                   
// Author:           Trevor Amann
// Email:            trevor.amann9@gmail.com
// Label:            Program 2
// Title:            Functions
// Course:           CMPS 2433
// Semester:         Spring 2021
//
// Description:
//    This program computes functions and the compositions of those functions. 
//
// Usage:
//       Enter the name of input file and name your output file and then it will run no problem.
//
// Files:   Amann_Prog2Orig.cpp and P2Fn.dat
/////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>

using namespace std;

//This function opens the input file.
void openFiles(ifstream&infile,ofstream&outfile) {
    char inFileName[40];
    char outFileName[40];
    cout<<"Entertheinputfilename:";
    cin>>inFileName;
    infile.open(inFileName);//openinputfile
    cout<<"Entertheoutputfilename:";
    cin>>outFileName;
    outfile.open(outFileName);//open out putfile}
}

//This function calculates f(x).
double fofx(double x){
  double fans = 3*x + 5;
  return fans;
}
//This function calculates g(x).
double gofx(double x){
  double gans = 3*x/5;
  return gans;
}
//This function calculates f-1(y).
 double finv(double y){
  double finvans = (y - 5)/3;
  return finvans;
 }
 //This function calculates g-1(y).
 double ginv(double y){
   double ginvans = (5 * y - 5)/3;
   return ginvans;
 }
 //This function calculates f(g(x)).
 double fofg(double x){
   double ansfofg = ((9*x)/5) + 8;
   return ansfofg;
 }
 //This function calculates g(f(x)).
 double goff(double x){
   double ansgoff = ((9*x)/5) + 4;
   return ansgoff;
 }
 //This function calculates f-1(f(x)).
 double finvf(double x){
   return x;
 } 
 //This function calculates g-1(g(x)).
 double ginvg(double x){
   return x; 
 }


//This is the main of the function. This is where we call our functions and find the values we are looking for. Also we 
//print the values to an output file that we name.
int main() {
  ifstream infile;
  ofstream outfile;
  double value;
  int i; 

  openFiles(infile, outfile);
  outfile << "Trevor Amann" << endl << "Program 2: Function Composition Modified" << endl;
  outfile << endl;
  outfile << "f(x) = 3x + 5" << "     " << "g(x) = 3x/5" << "     " << "f-1(y) = (y - 5)/3" << "     " << "g-1(y) = (5y - 5)/3" << endl;
  outfile << endl;
  outfile << ' ' << setw(3) << "x"; 
  outfile << ' ' << setw(8) << "f(x)";
  outfile << ' ' << setw(8) << "g(x)";
  outfile << ' ' << setw(8) << "fInv(y)";
  outfile << ' ' << setw(8) << "gInv(y)";
  outfile << ' ' << setw(8) << "f(g(x))";
  outfile << ' ' << setw(7) << "g(f(x))";
  outfile << ' ' << setw(8) << "fInv(f(x))"; 
  outfile << ' ' << setw(7) << "gInv(g(x)) " << endl; 
  for(i = 0; i < 84; i++){
      outfile << "-";
  } 
  outfile << endl;

//This is where the function calls begin. 
  cout << setprecision(4);
  while (!infile.eof()) {
    infile >> value;
    cout << "New value: " << value << endl;
    outfile << setw(4) << fixed << setprecision(2) <<  value;
    outfile << ' ' << setw(6) << fixed << setprecision(2) << fofx(value);
    outfile << ' ' << setw(6) << fixed << setprecision(2) << gofx(value);
    outfile << ' ' << setw(8) << fixed << setprecision(2) << finv(value);
    outfile << ' ' << setw(8) << fixed << setprecision(2) << ginv(value);
    outfile << ' ' << setw(8) << fixed << setprecision(2) << fofg(value);
    outfile << ' ' << setw(8) << fixed << setprecision(2) << goff(value);
    outfile << ' ' << setw(8) << fixed << setprecision(2) << finvf(value);
    outfile << ' ' << setw(8) << fixed << setprecision(2) << ginvg(value);
    outfile << endl;
  }
}