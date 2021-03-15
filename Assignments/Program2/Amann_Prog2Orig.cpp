#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>

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
  double fans = 3*x + 5;
  return fans;
}
double gofx(double x){
  double gans = 3*x/5;
  return gans;
}
 double finv(double y){
  double finvans = (y - 5)/3;
  return finvans;
 }
 double ginv(double y){
   double ginvans = (5 * y - 5)/3;
   return ginvans;
 }
 double fofg(double x){
   double ansfofg = ((9*x)/5) + 8;
   return ansfofg;
 }
 double goff(double x){
   double ansgoff = ((9*x)/5) + 4;
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
  outfile << "f(x) = 3x + 5" << "     " << "g(x) = 3x/5" << "     " << "f-1(y) = (y - 5)/3" << "     " << "g-1(y) = (5y - 5)/3" << endl;
  outfile << endl;
  outfile << ' ' << setw(3) << "x"; 
  outfile << ' ' << setw(8) << "f(x)";
  outfile << ' ' << setw(8) << "g(x)";
  outfile << ' ' << setw(8) << "fInv(y)";
  outfile << ' ' << setw(8) << "gInv(y)";
  outfile << ' ' << setw(8) << "f(g(x))";
  outfile << ' ' << setw(8) << "g(f(x))";
  outfile << ' ' << setw(8) << "fInv(f(x))"; 
  outfile << ' ' << setw(8) << "gInv(g(x)) " << endl; 
  for(i = 0; i < 84; i++){
      outfile << "-";
  } 
  outfile << endl;

  cout << setprecision(4);
  while (!infile.eof()) {
    infile >> value;
    cout << "New value: " << value << endl;
    outfile << setw(4) << value;
    outfile << ' ' << setw(8) << fofx(value);
    outfile << ' ' << setw(8) << gofx(value);
    outfile << ' ' << setprecision(2) << setw(8) << finv(value);
    outfile << ' ' << setw(8) << ginv(value);
    outfile << ' ' << setw(8) << fofg(value);
    outfile << ' ' << setprecision(5) << setw(8) << goff(value);
    outfile << ' ' << setw(10) << finvf(value);
    outfile << ' ' << setw(10) << ginvg(value);
    outfile << endl;
  }
}