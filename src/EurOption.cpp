#include<iostream>
#include<cmath>
#include"getOneGaussianByBoxMueller.h"
#include"EurOption.h"
#include<algorithm>


//definition of constructor
EurOption::EurOption(
	int nInt_,
	double strike_,
	double spot_,
	double vol_,
	double r_,
	double expiry_,
	double barrier_){
		nInt = nInt_;
		strike = strike_;
		spot = spot_;
		vol = vol_;
		r = r_;
		expiry = expiry_;
		barrier = barrier_;
		generatePath();
}

//method definition
void EurOption::generatePath(){
	double thisDrift = (r * expiry - 0.5 * vol * vol * expiry) / double(nInt);
	double cumShocks = 0;
	thisPath.clear();

	for(int i = 0; i < nInt; i++){
		cumShocks += (thisDrift + vol * sqrt(expiry / double(nInt)) * getOneGaussianByBoxMueller());
		thisPath.push_back(spot * exp(cumShocks));
	}
}

//method definition
double EurOption::getArithmeticMean(){

	double runningSum = 0.0;

	for(int i = 0; i < nInt; i++){
		runningSum += thisPath[i];
	}

	return runningSum/double(nInt);
}


//method definition
double EurOption::getGeometricMean(){

	double runningSum = 0.0;

	for(int i = 0; i < nInt ; i++){
		runningSum += log(thisPath[i]);
	}

	return exp(runningSum/double(nInt));
}

//method definition
void EurOption::printPath(){

	for(int i = 0;  i < nInt; i++){

		std::cout << thisPath[i] << "\n";

	}

}


//method definition DOWN-OUT-EU ------------------------------------------
double EurOption::getEuropeanDownAndOutPutPrice(int nReps){

	double rollingSum = 0.0;
	double lastPrice = 0.0;

	for(int i = 0; i < nReps; i++){
		generatePath();
		lastPrice = thisPath[thisPath.size()-1];
		double thisMax = *max_element(thisPath.begin(),thisPath.end());
		rollingSum += ((lastPrice < strike) && (thisMax > barrier)) ? (strike-lastPrice) : 0;
	}

	return exp(-r*expiry)*rollingSum/double(nReps);

}


//overloaded operator ();
double EurOption::operator()(char char1, char char2, int nReps){
	if ((char1 == 'E') & (char2 =='D'))     return getEuropeanDownAndOutPutPrice(nReps);
	else return -99;
}
