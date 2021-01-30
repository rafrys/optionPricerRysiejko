#include<Rcpp.h>
#include<vector>
#include<ctime>
#include<cstdlib>
#include"EurOption.h"
#include"getVecMean.h"
#include"getVecStdDev.h"


using namespace Rcpp;
using std::vector;
using std::cout;
using std::cin;

// [[Rcpp::export]]
double getEuropeanDownAndOutPutPrice(
  int nInt,
  double Strike,
  double Spot,
  double Vol,
  double Rfr,
  double Expiry,
  double Barrier,
  int nReps = 1000){

	// set the seed
	srand( time(NULL) );

	// create a new instance of a class
	EurOption myEur(nInt, Strike, Spot, Vol, Rfr, Expiry,Barrier);

	// call the method to get option price
	double price = myEur.getEuropeanDownAndOutPutPrice(nReps);
	
	// return option price  
	return price;
}