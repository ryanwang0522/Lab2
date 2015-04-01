#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

class BMI{
	public:
		void setheight(int);
		void setmass(int);
		float getBMI();
		string getcate(float);
	private:
		float h;
		int m;
};
