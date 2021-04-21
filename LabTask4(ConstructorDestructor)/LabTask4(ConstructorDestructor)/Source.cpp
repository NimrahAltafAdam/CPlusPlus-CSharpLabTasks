//                                                        LAB TASK 4
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;


//_________________________Q1___________________________

//Designand then implement to represent the class flight.A flight has a flight number, source, destinationand a number of available seats.

/*class flight
{
	int f_num, avail_seats;
	string source, dest;

private:

public:
	// PART (a)
	flight(int fn, string s, string d, int ns) : f_num(fn), source(s), dest(d), avail_seats(ns)
	{
		shortAndCapital(s); // Calling the method of part (f)
		shortAndCapital(d);
	};
	// PART (b)
	flight(int fn, int ns) : f_num(fn), avail_seats(ns)
	{
		source = "";
		dest = "";
	};
	// PART (c)
	flight(int fn) : f_num(fn)
	{
		source = "";
		dest = "";
		avail_seats = 0;
	};
	// PART (d)
	int getFlightNum()
	{
		return f_num;
	}
	string getSource()
	{
		return source;
	}
	string getDestination()
	{
		return dest;
	}
	int getNumOfSeats()
	{
		return avail_seats;
	}
	// PART (e)
	void setSource(string s)
	{
		source = s;
	}
	void setDestination(string d)
	{
		dest = d;
	}
	void setNumOfSeats(int ns)
	{
		avail_seats = ns;
	}
	// PART (f)
	void reserve(int numOfSeats)
	{
		if (numOfSeats < avail_seats)
		{
			avail_seats = avail_seats - numOfSeats;
			cout << "Seats reserved!" << endl;
		}
		else
		{
			cout << "Seats not available for reservation" << endl;
		}

	}
	// PART (g)
	void cancel(int numOfSeats)
	{
		avail_seats += numOfSeats;
		cout << "The Reservation has been Cancelled!" << endl;
	}
	// PART (h)
	void toString()
	{
		cout << "Flight No: " << f_num << endl;
		cout << "From: " << shortAndCapital(source) << endl;
		cout << "To: " << shortAndCapital(dest) << endl;
	}
	// PART (i)
	void equals(int fn1, int fn2)
	{
		if (fn1 == fn2)
			cout << "The two flights have the same flight number " << endl;

	}
	// PART (j)
private:
	string toupper(string a)
	{
		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] >= 97 && a[i] <= 122)
				a[i] -= 32;
			else
				continue;
		}
		return a;
	}
	string shortAndCapital(string name)
	{
		if (name.length() <= 3)
		{
			name = toupper(name);
			return name;

		}
		else
		{
			name = name.substr(0, 3);
			name = toupper(name);
			return name;
		}
	}


};
int main()
{
	int f_num, avail_seats = 336, noOfSeats;
	string source, dest;

	cout << "Enter Data of Flight 1: " << endl;
	cout << "Enter flight number: " << endl;
	cin >> f_num;
	cout << "Enter source: " << endl;
	cin >> source;
	cout << "Enter dest: " << endl;
	cin >> dest;
	flight f1(f_num, source, dest, avail_seats);
	f1.toString();
	cout << "Enter Number of seats to reserve: " << endl;
	cin >> noOfSeats;
	f1.reserve(noOfSeats);
	cout << "The number of seats that are now available in flight " << f1.getFlightNum() << " are " << f1.getNumOfSeats() << endl;

	cout << endl << endl;
	cout << "Enter Data of Flight 2: " << endl;
	cout << "Enter flight number: " << endl;
	cin >> f_num;
	cout << "Enter source: " << endl;
	cin >> source;
	cout << "Enter destination: " << endl;
	cin >> dest;
	flight f2(f_num, source, dest, avail_seats);
	f2.toString();
	cout << "Enter Number of seats to reserve: " << endl;
	cin >> noOfSeats;
	f2.reserve(noOfSeats);
	cout << "Enter Number of seats to cancel: " << endl;
	cin >> noOfSeats;
	f2.cancel(noOfSeats);
	cout << "The number of seats that are now available in flight " << f2.getFlightNum() << " are " << f2.getNumOfSeats() << endl;
	_getch();
	return 0;
}*/

//_________________________Q2___________________________

//Implement class car that has the following features brandNmae, priceNew, color, odometer.

/*class Car
{
private:
	string brandName;
	double priceNew;
	string color;
	double odometer;
public:
	float getpriceNew()
	{
		return priceNew;
	}
	void setpriceNew(float pn)
	{
		priceNew = pn;
	}
	float getodometer()
	{
		return odometer;
	}
	void setodometer(float om)
	{
		odometer = om;
	}

	Car(string bn, string cl, double pn, double om) : brandName(bn), color(cl), priceNew(pn), odometer(om)
	{};
	// PART (A)
	double usedprice;
	double getPriceAfterUse(double pn, double om)
	{
		usedprice = pn * (1 - (om / 600000));
		return usedprice;
	}
	// PART (B)
	void updateMileage(double traveledDistance)
	{
		odometer += traveledDistance;
	}
	// PART (C)
	void outputDetails()
	{
		cout << "Brand Name: " << brandName << endl;
		cout << "Color of the Car: " << color << endl;
		cout << "New Price: " << priceNew << endl;
		cout << "Odometer: " << odometer << endl;
		cout << "Used Price: " << getPriceAfterUse(priceNew, odometer) << endl;
	}
};
int main()
{
	string br, cl;
	double np, om;
	cout << "Enter Brand Name: " << endl;
	cin >> br;
	cout << "Enter Color of the Car: " << endl;
	cin >> cl;
	cout << "Enter New Price: " << endl;
	cin >> np;
	cout << "Enter Odometer: " << endl;
	cin >> om;
	Car c1(br, cl, np, om);
	c1.getPriceAfterUse(c1.getpriceNew(), c1.getodometer());
	c1.outputDetails();
	c1.updateMileage(10000.0);
	c1.outputDetails();
	c1.updateMileage(20000.0);
	c1.outputDetails();
	_getch();
	return(0);
}*/


//_________________________Q3___________________________

//Develop an application that computes the total cost of an order.

/*class coffee
{
private:
	int NumOfBags, count, remainingbags;
	const double priceofbag = 5.50;
	double cost;
public:
	coffee(int Nb) : NumOfBags(Nb)
	{};
	double getCostOfOrder(int n)
	{
		return n * priceofbag;
	}
	double largebox(int n)
	{
		return n * 1.80;
	}
	double mediumbox(int n)
	{
		return n * 1.00;
	}
	double smallbox(int n)
	{
		return n * 0.60;
	}
	void totalcost(int NoOfBags)
	{
		count = NoOfBags / 20;
		if (NoOfBags < 20)
		{
			count = 1;
			cost = largebox(count);
			cout << "\t" << count << " Large - $" << cost << endl;
		}
		else
		{
			cost = largebox(count);
			cout << "\t" << count << " Large - $" << cost << endl;
		}
		remainingbags = NoOfBags - (count * 20);
		count = remainingbags / 10;
		if (remainingbags < 10)
		{
			count = 1;
			cost += mediumbox(count);
			cout << "\t" << count << " Medium - $" << mediumbox(count) << endl;
		}
		else
		{
			cost += mediumbox(count);
			cout << "\t" << count << " Medium - $" << mediumbox(count) << endl;
		}
		remainingbags = remainingbags - (count * 10);
		count = remainingbags / 5;
		if (remainingbags < 5)
		{
			count = 1;
			cost += smallbox(count);
			cout << "\t" << count << " Small - $" << smallbox(count) << endl;
		}
		else
		{
			cost += smallbox(count);
			cout << "\t" << count << " Small - $" << smallbox(count) << endl;
		}
		cout << "Yout total cost is: " << getCostOfOrder(NumOfBags) + cost << endl;
	}
	void displayinfo()
	{
		cout << "Number of Bags Ordered: " << NumOfBags << endl;
		cout << "The Cost of Order: " << getCostOfOrder(NumOfBags) << endl;
		cout << "Boxes Used:" << endl;
		totalcost(NumOfBags);
	}



};
int main()
{
	int nb;
	cout << "Enter number of Bags" << endl;
	cin >> nb;
	coffee c1(nb);
	c1.displayinfo();
}*/
