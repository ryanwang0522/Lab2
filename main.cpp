#include<iostream>
#include<cstring>
#include<cstdlib>
#include<fstream>
#include"BMI.h"

using namespace std;

int main(){
	BMI bmi;
	int mass,height;

	ifstream inFile("file.in.txt",ios::in);
	if(!inFile){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}

	ofstream outFile("file.out.txt",ios::out);
	if(!outFile){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	while(inFile>>height>>mass){
		bmi.setheight(height);
		bmi.setmass(mass);
		outFile<<bmi.getBMI()<<"\t"<<bmi.getcate(bmi.getBMI())<<"\n";
	}

	return 0; 
}
