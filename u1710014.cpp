// Azimjon Pulatov U1710014 
// Lab Assignment 2 & 3
// 9/27/2017


// SWAPPING MACHINE

#include <iostream>
#include <math.h>
using namespace std;
int main0() {
	int a, b;
	a = 5;
	b = 6;

	//swapping
	a = a + b;
	b = a - b;
	a = a - b;

	cout << "a is " << a << endl;
	cout << "b is " << b << endl;
	


	system("pause");
	return 0;
}

// MAX FINDER

int main1() {
	int a, b, c, max;
	cout << "Instert 3 integers to find out the greatest" << endl;
	cin >> a >> b >> c;

	max = (a > b) ? a : b;
	max = (max > c) ? max : c;

	
	cout << "Max is " << max << endl;



	system("pause");
	return 0;
}

// LEAP YEAR FINDER
int main2(){

	int year;
	cout << "GIMME THE YEAR TO TEST ITS LEAPITY";
	cin >> year;

	if (year % 4 == 0 && (year % 400 == 0 && year% 100 !=0 ))
	{
		cout << "Yeah, it's surely a leap year" << endl;
	}
	else 
	{
		cout << "Sorry, It's not going to be a leap year" << endl;
	}

	system("pause");
	return 0;

}

// EVENODD MACHINE
int main3(){

	int num;
	cout << "GIMME THE NUMBER TO TEST ITS ODDNESS";
	cin >> num;

	if (num % 2 == 0)
	{
		cout << "Even!" << endl;
	}
	else
	{
		cout << "ODD!" << endl;
	}

	system("pause");
	return 0;

}

// TEMPERATURE CONVERTION 
int main(){

	float temp, type, result;
	cout << "CHOOSE TYPE OF CONVERSION:\n1. CELCIUS to FAHRENHEIT \n2. FAHRENHEIT to CELCIUS " << endl;
	cin >> type;
	cout << "NOW, GIMME THE TEMPERATURE: ";
	cin >> temp;

	if (type == 1)
	{
		result = 1.8*temp + 32;
		cout << "RESULT: " << result << endl;
	}
	else if (type == 2)
	{
		result = (5 / 9)*temp - 32;
		cout << "RESULT: " << result << endl;
	}
	else {
		cout << "OK, THEN";
	}

	system("pause");
	return 0;

}

/*
// AREA AND CIRCUMFERENCE IF CIRCLE
int main(){
const float pi = 3.1415;

float radius, area, circumference;
cout << "Gimme the Radius: ";
cin >> radius;
circumference = 2 * radius*pi;
area = radius*radius*pi;
cout << "\nHere is the area: " << area << endl;
cout << "here is circumference: " << circumference << endl;

system("pause");
return 0;
}

//AREA of SCALANE TRIANLGE
int main(){
float side1, side2, side3, semiper, area;
cout << "Gimme the 3 sides of triangle: "<< endl;
cin >> side1>> side2 >> side3;
if (side1 + side2 > side3 && side1 + side3 > side2 && side3 + side2 > side1)
{
semiper = (side1 + side2 + side3) / 2;
area = sqrt(semiper*(semiper - side1)*(semiper - side3)*(semiper - side2));

cout << "\nArea is: " << area << endl;
}
else
{
cout << "Triangle does not exist";
}

system("pause");
return 0;

}


//AREA OF equterial triangle
int main(){
float area, side;
cout << "Gimme the side of equterial triangle: " << endl;
cin >> side;

if (side > 0)
{
area = (side*side*sqrt(3)) / 4;
cout << "Area of triangle is " << area << endl << endl;
}
else {
cout << "NaN";
}
system("pause");
return 0;
}


// AREA of right triangle
int main(){
float area, side1, side2;
cout << "Gimme the 2 sides of right triangle: " << endl;
cin >> side1 >> side2;

if (side1 > 0 && side2>0)
{
area = (side1*side2) / 2;
cout << "Area of triangle is " << area << endl << endl;
}
else {
cout << "NaN";
}

system("pause");
return 0;

}


//AREA OF CIRCLE

int main(){
const float pi = 3.1415;

float radius, area;
cout << "Gimme the Radius: ";
cin >> radius;

if (radius > 0)
{
area = radius*radius*pi;
cout << "\nHere is the area: " << area << endl;

} else {

cout << "Stop lying today";

}

system("pause");
return 0;
}

//AREA of RECTANGLE
int main(){
float area, side1, side2;
cout << "Gimme the 2 sides of rectangle: " << endl;
cin >> side1 >> side2;

if (side1 > 0 && side2>0)
{
area = (side1*side2);
cout << "Area of rectangle is " << area << endl << endl;
}
else {
cout << "Lying is sin";
}

system("pause");
return 0;

}

//AREA of SQUARE
int main(){
float area, side;
cout << "Gimme the side of square: " << endl;
cin >> side;

if (side > 0)
{
area = (side*side);
cout << "Area of square is " << area << endl << endl;
}
else {
cout << "Wow, You are a big lier";
}

system("pause");
return 0;

}
*/