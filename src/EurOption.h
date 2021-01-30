#include<vector>

class EurOption{
public:

	//constructor
	EurOption(
		int nInt_,
		double strike_,
		double spot_,
		double vol_,
		double r_,
		double expiry_,
		double barrier_
		);

	//destructor
	~EurOption(){};

	//methods
	void generatePath();
	double getArithmeticMean();
	double getGeometricMean();
	void printPath();
	double getEuropeanDownAndOutPutPrice(int nReps);
	double operator()(char char1, char char2, int nReps);
	
	//members
	std::vector<double> thisPath;
	int nInt;
	double strike;
	double spot;
	double vol;
	double r;
	double expiry;
	double barrier;

};
