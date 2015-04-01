#include"BMI.h"
#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;
	
float B;
void BMI::setheight(int height){
	h=height*0.01;
}
void BMI::setmass(int mass){
	m=mass;	
}
	
float BMI::getBMI(){
	if(h==0 && m==0)
		B=0.0;
	else
		B=m/(h*h);
	return B;
}
	string BMI::getcate(float B){
	if(B==0.0)
	return "";
	else if(B<15.0)
	return "Very severely underweight";
	else if(B>=15.0 && B<16.0)
	return "Severly underweight";
	else if(B>=16.0 && B<18.5)
	return "Underweight";
	else if(B>=18.5 && B<25.0)
	return "Normal";
	else if(B>=25.0 && B<30.0)
	return "Overweight";
	else if(B>=30.0 && B<35.0)
	return "Obese Class I(Moderately obese)";
	else if(B>=35.0 && B<40.0)
	return "Obese Class II(Severely obese)";
	else if(B>=40.0)
	return "Obese Class III(Very severely obese)";
}	

