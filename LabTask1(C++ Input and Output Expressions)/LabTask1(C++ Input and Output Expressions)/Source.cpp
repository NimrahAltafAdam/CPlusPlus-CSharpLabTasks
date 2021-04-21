//                                                                 LAB TASK 1(C++)

#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

//__________________Q1____________________

//Write a program that read two integers from the keyboard and print their sum and average.


/*int main()
{
	int num1, num2, sum;
	double avg;
	cout << "Enter the first number : ";
	cin >> num1;
	cout << "Enter the second number : ";
	cin >> num2;
	sum = num1 + num2;
	avg = sum / 2;
	cout << "Sum is " << sum << endl;
	cout << "Average is " << avg << endl;
	_getch();
	return(0);
}*/


//__________________Q2____________________

//Write a program that prompts for time in secondsand output that time in hours, minutes, and seconds.Here student will learn the usage of divideand modulus arithmetic operators in integers.


/*int main()
{
	int time, hour, min, sec, remaining_time;
	cout << "Enter the time in seconds: ";
	cin >> time;
	hour = time / 3600;
	cout << "\n-------------------\nHours in time is: \n-------------------\n" << hour << endl;
	remaining_time = time - (hour * 3600);
	min = remaining_time / 60;
	cout << "\n-------------------\nMinutes in time is:\n-------------------\n " << min << endl;
	sec = remaining_time - (min * 60);
	cout << "\n-------------------\nSeconds in time is:\n-------------------\n " << sec << endl;
	_getch();
	return(0);
}*/

//__________________Q3____________________

//Write a program that prompts for a person’s height in inches. Convert this height measurement into feet by using the conversion factor of foot2Inch= 12 inch. Now, the value obtained can easily, be translated into feet and inches which are then output by the program.

/*int main()
{
	float h_inches, h_feets;
	cout << "Enter the height in inches : ";
	cin >> h_inches;
	h_feets = h_inches / 12;
	cout << endl << "This is equivalent to " << h_feets << " feets" << endl;
	_getch();
	return(0);
}*/


//__________________Q4-A____________________

//Write a program that prompts for amount in rupeesand show how many 1000’s,500’s, 100’s, 50’s, 10’s, 5’s, 2’s and 1’s in it.

/*int main()
{
	int amount, thousand, fivehund, hund, fiftys, tens, fives, twos, ones, remaining_am;
	cout << "Enter amount in rupees : ";
	cin >> amount;
	thousand = amount / 1000;
	cout << "\n------------------ - \n1000's in the given amount is\n-------------------\n : " << thousand << endl;
	remaining_am = amount - (thousand * 1000);
	fivehund = remaining_am / 500;
	cout << "\n------------------ - \n500's in the given amount is :\n-------------------\n " << fivehund << endl;
	remaining_am = remaining_am - (fivehund * 500);
	cout << remaining_am;
	hund = remaining_am / 100;
	cout << "\n------------------ - \n100's in the given amount is :\n-------------------\n " << hund << endl;
	remaining_am = remaining_am - (hund * 100);
	fiftys = remaining_am / 50;
	cout << "\n------------------ - \n50's in the given amount is :\n-------------------\n " << fiftys << endl;
	remaining_am = remaining_am - (fiftys * 50);
	tens = remaining_am / 10;
	cout << "\n-------------------\n10's in the given amount is :\n-------------------\n " << tens << endl;
	remaining_am = remaining_am - (tens * 10);
	fives = remaining_am / 5;
	cout << "\n-------------------\n5's in the given amount is :\n-------------------\n " << fives << endl;
	remaining_am = remaining_am - (fives * 5);
	twos = remaining_am / 2;
	cout << "\n-------------------\n2's in the given amount is :\n-------------------\n " << twos << endl;
	remaining_am = remaining_am - (twos * 2);
	ones = remaining_am / 1;
	cout << "\n-------------------\n1's in the given amount is :\n-------------------\n " << ones << endl;
	_getch();
	return(0);
}*/

//__________________Q4-B____________________

//Write a program that calculates the temperature in Fahrenheit.For that it prompts for temperature in Celsius degrees.Formula to calculate Fahrenheit temperature is Fahrenheit = Celsius(9 / 5 + 32).Once if the task done do the vice versa i.e.Celsius = 5 / 9(Fahrenheit - 32)

/*int main()
{
	double temp_cel, temp_far;
	cout << "Enter the Celsius temperature: ";
	cin >> temp_cel;
	temp_far = (temp_cel * 9 / 5) + 32;
	cout << "Farenheit Temperature: " << temp_far << endl;
	temp_cel = 0;
	temp_far = 0;
	cout << "Enter the Farenheit temperature: ";
	cin >> temp_far;
	temp_cel = (temp_far - 32) * 5 / 9;
	cout << "Celsius Temperature " << temp_cel;



	_getch();
	return(0);
}*/

//__________________Q5____________________

//Write a program that inputs a two digit integer value, and output its reverse order.

/*int main()
{
	int num, first_digit, second_digit;
	cout << "Enter a 2 digit integer value: ";
	cin >> num;
	first_digit = num % 10;
	second_digit = num / 10;
	cout << "Reverse of this value is: " << first_digit;
	cout << second_digit;
	_getch();
	return(0);
}*/


//__________________Q6____________________

/*Write a program that reads the two digit number as two characters chTenand chUnitand convert that two digit number into an integer value.In order to compute the corresponding integer value, each character must be converted to the digit in the range 0 to 9. this is done by subtracting 48(‘0’)from the ASCII value of the character.ValueTen = chTen - ‘0’; // ’8’-‘0’ is 8
ValueUnit = chUnit - ‘0’; // ’2’-‘0’ is 2. To create integer value for M, the positional value of each digit must be used. In this case multiply ValueTen by 10. M=ValueTen*10+ValueUnit;//m=8*10+2=82*/

/*int main()
{
	char chNum[2], chTen, chUnit;
	int ValueTen, ValueUnit, M;
	cout << "Enter a two digit number: ";
	cin >> chNum;
	chTen = chNum[0];
	chUnit = chNum[1];
	ValueTen = chTen - 48;
	ValueUnit = chUnit - 48;
	M = ValueTen * 10 + ValueUnit;
	cout << "Numerical value is: " << M;
	_getch();
	return(0);
}*/

