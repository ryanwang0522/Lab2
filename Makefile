lab2:main.o BMI.o
	g++ -o lab2 main.o BMI.o
main.o:main.cpp BMI.h
	g++ -c main.cpp
BMI.o:BMI.cpp BMI.h
	g++ -c BMI.cpp
