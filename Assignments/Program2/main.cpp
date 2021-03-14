#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

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

double gans;
double finvans; 
double ginvans; 
double ansfofg;
double ansgoff;
double finvoffans;
double ginvofgans;


double fofx(double x){
  double fans = 4*x + 1;
  return fans;
}
double gofx(double x){
  double gans = x - 1;
  return gans;
}
 double finv(double y){
  double finvans = (y - 1) / 4;
  return finvans;
 }
 double ginv(double y){
   double ginvans = y + 1;
   return ginvans;
 }
 double fofg(double x){
   double ansfofg = 4*x - 3;
   return ansfofg;
 }
 double goff(double x){
   double ansgoff = 4*x + 2;
   return ansgoff;
 }
 double finvf(double x){
   return x;
 } 
 double ginvg(double x){
   return x; 
 }



int main() {
  ifstream infile;
  ofstream outfile;
  double value;
  int i; 

  openFiles(infile, outfile);
  outfile << "Trevor Amann" << endl << "Program 2: Function Composition" << endl;
  outfile << endl;
  outfile << "f(x) = 4x + 1" << "     " << "g(x) = x - 1" << "     " << "f-1(y) = (y - 1) / 4" << "     " << "g-1(y) = y + 1" << endl;
  outfile << endl;
  
  cout << setprecision(4);
  while (!infile.eof()) {
    infile >> value;
    cout << "New value: " << value << endl;
    outfile << setw(4) << value;
    outfile << ' ' << setw(6) << fofx(value);
    outfile << ' ' << setw(6) << gofx(value);
    outfile << endl;
  }
}