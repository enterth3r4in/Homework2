//This program determines the distance a car can travel on a single tank of gas in the town and on the highway.
#include <iostream>

using namespace std;

int main()
{
	double carGasAmount = 20;
	double townDrivingDistance = 21.5;
	double highwayDrivingDistance = 26.8;

	double distanceTown, distanceHighway;

	distanceTown = carGasAmount * townDrivingDistance;
	distanceHighway = carGasAmount * highwayDrivingDistance;

	cout << "The car can travel " << distanceTown << " miles on a tank in town and " << distanceHighway << " miles on a tank on the highway" << endl;

	return 0;
}