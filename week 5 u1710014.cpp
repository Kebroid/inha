#include <iostream>
using namespace std;

// Date 10/11/2017
// Assignment 5
// Azimjon Pulatov
// U1710014



/* TABLE */

//int main(void){
//	int i = 1, m;
//	cout << "Insert the number you want to see multiplication table for: ";
//	cin >> m;
//	cout << "-------------------------------------------------------------\n";
//	while(i < 10) 
//	{
//		cout << m << " x " << i << " = " << m*i << endl;
//		i++;
//	}
//	cout << "-------------------------------------------------------------\n";
//
//	system("pause");
//	return 0;
//}



/* 
 FIBONACCI SERIES 
*/

//int main(void){
//	int a = 1, b = 1, c;
//
//	while (a < 100){
//		cout << a << endl;
//		c = a + b;
//		a = b;
//		b = c;
//	}
//
//
//	system("pause");
//	return 0;
//}



/*
 FACTORIAL CALCULATOR
*/
//int main(void){
//	int i = 1, product = 1, number;
//	cout << "Gimme number to Factorialize it\n";
//	cin >> number;
//	if (number > -1){
//		while (i < number + 1){
//			product *= i;
//			i++;
//		}
//	}
//	else {
//		cout << "Do you know what factorial is?";
//	}
//	cout << "-------------------------------------------------------------\n";
//	cout << "Factorial of "<< number << " is " << product << endl;
//
//	system("pause");
//	return 0;
//}



/* PRIMENESS Checker */

//int main(void){
//
//	int p, i = 2;
//	bool primeness;
//
//	cout << "Gimme Number to check whether it is prime or not:";
//	cin >> p;
//
//
//	primeness = true;
//	while (i < p/2){
//		if (p%i == 0){
//			primeness = false;
//			break;
//		}
//		i++;
//	}
//
//
//	if (primeness)
//	{
//		cout << "Prime !!!\n";
//	}
//	else
//	{
//		cout << "Not Prime\n";
//	}
//
//	system("pause");
//	return 0;
//}


// SUM OF SERIES
//int main(void){
//	float sum=0,dev;
//	float i=1,n;
//	cout << "Gimme n to calculate 1 + 1/2+ 1/3 +...+ 1/n\n";
//	cin >> n;
//
//	while (i <= n)
//	{	
//		dev = 1 / i;
//		sum += dev;
//		i++;
//	}
//	
//	cout << sum << endl;
//
// 	system("pause");
//	return 0;
//}




/*  Calculate 1 + 2 + 3 + ... + n */
//
//int main(void){
//	int sum=0, i=1,n;
//	cout << "Gimme n to get 1 + 2 + 3 + ... + n\n";
//	cin >> n;
//
//	while (i < n + 1)
//	{
//		sum += i;
//		i++;
//	}
//
//	cout << "Sum is " << sum << endl;
//	system("pause");
//	return 0;
//}



//int main(void){
//	int i;
//
//	cout << "Gimme Index of weekday to get String\n";
//	cin >> i;
//
//	switch (i){
//		case 1:
//			cout << "Monday\n";
//			break;
//		case 2:
//			cout << "Tuesday\n";
//			break;		
//		case 3:
//			cout << "Wednesday\n";
//			break;
//		case 4:
//			cout << "Thursday\n";
//			break;
//		case 5:
//			cout << "Friday\n";
//			break;
//		case 6:
//			cout << "Saturday\n";
//			break;
//		case 7:
//			cout << "Sunday\n";
//			break;
//		default:
//			cout << "I dont know\n";
//			break;
//	}
//
//	system("pause");
//	return 0;
//}



/* CALCULATOR */
//int main(void){
//	char op;
//	int a, b;
//	cout << "Gimme 2 Mumbers to do Operations\n";
//	cin >> a >> b;
//	cout << "Gimme the operator: |+|-|*|/|\n";
//	cin >> op;
//
//	switch (op){
//
//		case '+':
//			cout << a + b << endl;
//			break;
//
//		case '-':
//			cout << a + b << endl;
//			break;
//
//		case '*':
//			cout << a + b << endl;
//			break;
//		case '/':
//			cout << a + b << endl;
//			break;
//		default:
//			cout << "We Dont have that operator yet\n";
//			break;
//	}
//
//	system("pause");
//	return 0;
//}
