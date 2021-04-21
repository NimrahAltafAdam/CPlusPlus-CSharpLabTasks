//                                                        LAB TASK 6
#include<iostream>
#include <sstream>      
#include<conio.h>
#include<string>
using namespace std;


//_________________________Q1___________________________

//Write the classes below containing the given inheritance variables and methods, following the inherited hiearchchy.

/*class circle
{
protected:
	double radius;
public:
	double pi = 3.142;
	circle()
	{ 		}
	circle(double radius)
	{
		this->radius = radius;
	}
	void setRadius(double radius)
	{
		this->radius = radius;
	}
	double getRadius()
	{
		return radius;
	}
	virtual double calcArea()
	{
		double area = pi * radius * radius;
		return area;
	}
	double calcCircumference()
	{
		double circumference = 2 * pi * radius;
		return circumference;
	}
	virtual bool equals(circle* c)
	{ }

	virtual string toString()
	{
		std :: ostringstream ro, ao, co;
		ro << radius;
		ao << circle::calcArea();
		co << circle::calcCircumference();
		string r = ro.str();
		string a = ao.str();
		string c = co.str();
		string result = "Radius = " + r + "\nArea = " + a + "\nCircumference = " + c;
		return result;
	}
};
class cylinder :circle
{
private:
	double height;
public:
	cylinder()
	{
	}
	cylinder(double radius, double height, double pi)
	{
		this->radius = radius;
		this->height = height;
	}
	void setHeight(double height)
	{
		this->height = height;
	}
	double getHeight()
	{
		return height;
	}
	double calcArea()
	{
		return (2 * pi * radius * height) + (2 * pi * radius * radius);
	}
	double calcVolume()
	{
		return pi * radius * radius * height;
	}
	string toString()
	{
		ostringstream ro;
		ostringstream ho;
		ostringstream ao;
		ostringstream vo;
		ro << radius;
		ho << height;
		ao << calcArea();
		vo << calcVolume();
		string r = ro.str();
		string h = ho.str();
		string a = ao.str();
		string v = vo.str();
		string result = "Radius = " + r + "\nHeight = " + h + "\nArea = " + a + "\nVolume = " + v;
		return result;
	}
	bool equals(cylinder* cy)
	{ 	}

};
int main()
{
	cout << "\n-----------------\nFor Circle:\n-----------------\n";
	circle c(3);
	cout << c.toString();
	cout << "\n-----------------\nFor Cylinder:\n-----------------\n";
	cylinder cy(3, 5);
	cout << cy.toString();
}*/


//_________________________Q2___________________________

//Apply the Concept of Composition by Creating part classes (doors,windows,Engine,Wheels) and then Create a whole class Car that is composed of all these defined parts.


/*class door
{
private:
	int length;
	int width;
public:
	door()
	{

	};
	door(int l, int w) : length(l), width(w)
	{};
	int getlength()
	{
		return length;
	}
	void setlength(int l)
	{
		length = l;
	}
	int getwidth()
	{
		return width;
	}
	void setwidth(int w)
	{
		width = w;
	}
	void showdata()
	{
		cout << "Door Length: " << length << endl;
		cout << "Door Width: " << width << endl;

	}
};
class window
{
private:
	int length;
	int width;
public:
	window()
	{

	};
	window(int l, int w) : length(l), width(w)
	{};
	int getlength()
	{
		return length;
	}
	void setlength(int l)
	{
		length = l;
	}
	int getwidth()
	{
		return width;
	}
	void setwidth(int w)
	{
		width = w;
	}
	void showdata()
	{
		cout << "Window Length: " << length << endl;
		cout << "Window Width: " << width << endl;

	}
};
class engine
{
private:
	int size;
	int model;
	string type;
public:

	engine()
	{};
	engine(int s, int m, string t) : size(s), model(m), type(t)
	{};
	;
	int getsize()
	{
		return size;
	}
	void setlsize(int s)
	{
		size = s;
	}
	int getmodel()
	{
		return model;
	}
	void setmodel(int m)
	{
		model = m;
	}
	string gettype()
	{
		return type;
	}
	void settype(string t)
	{
		type = t;
	}
	void showdata()
	{
		cout << "Engine Size: " << size << endl;
		cout << "Engine Model: " << model << endl;
		cout << "Engine Type: " << type << endl;
	}

};
class wheels
{
private:
	int size;
	int model;
	string color;
public:
	wheels()
	{};
	wheels(int s, int m, string c) : size(s), model(m), color(c)
	{};
	;
	int getsize()
	{
		return size;
	}
	void setlsize(int s)
	{
		size = s;
	}
	int getmodel()
	{
		return model;
	}
	void setmodel(int m)
	{
		model = m;
	}
	string getcolor()
	{
		return color;
	}
	void setcolor(string c)
	{
		color = c;
	}
	void showdata()
	{
		cout << "Wheel Size: " << size << endl;
		cout << "Wheel Model: " << model << endl;
		cout << "Wheel Color: " << color << endl;
	}
};
class Car
{
private:
	door d1, d2, d3, d4;
	window w1, w2, w3, w4;
	engine e1;
	wheels wh1, wh2, wh3, wh4;
public:
	Car()
	{};
	Car(int doorL, int doorW, int  windowL, int windowW, int engineS, int engineM, string engineT, int wheelS, int wheelM, string wheelC) : d1(doorL, doorW), d2(doorL, doorW), d3(doorL, doorW), d4(doorL, doorW), w1(windowL, windowW), w2(windowL, windowW), w3(windowL, windowW), w4(windowL, windowW), e1(engineS, engineM, engineT), wh1(wheelS, wheelM, wheelC), wh2(wheelS, wheelM, wheelC), wh3(wheelS, wheelM, wheelC), wh4(wheelS, wheelM, wheelC)
	{};
	void showdata()
	{
		cout << "                                    CAR DESCRIPTION " << endl << endl;
		for (int i = 1; i <= 4; i++)
		{
			cout << "Door " << i << ": " << endl;
			d1.showdata();
			cout << endl;
		}
		for (int i = 1; i <= 4; i++)
		{
			cout << "Window " << i << ": " << endl;
			w1.showdata();
			cout << endl;
		}
		cout << "Engine: ";
		e1.showdata();
		cout << endl;

		for (int i = 1; i <= 4; i++)
		{
			cout << "Wheel " << i << ": " << endl;
			wh1.showdata();
			cout << endl;
		}


	}

};

int main()
{
	door d1, d2, d3, d4;
	window w1, w2, w3, w4;
	engine e1;
	wheels wh1, wh2, wh3, wh4;
	Car c1(10, 20, 5, 6, 40, 8, "Electrical", 15, 4, "Black");
	c1.showdata();
	_getch();
	return 0;
}*/

//_________________________Q3___________________________

//Create Box class containing data members (width ,height,Length) and Member functions showdata and Volume.. Apple the concept of Operator Overloading and overload operators (+,-,* ,/) for addition subtraction multiplication and division of Objects of Box class.

/*class Box
{
private:
	double height;
	double width;
	double length;
public:
	Box()
	{};
	Box(double h, double w, double l) : height(h), width(w), length(l)
	{};
	void setheight(double h)
	{
		height = h;
	}
	double getheight()
	{
		return height;
	}
	void setwidth(double w)
	{
		width = w;
	}
	double getwidth()
	{
		return width;
	}
	void setlength(double l)
	{
		length = l;
	}
	double getlengtht()
	{
		return length;
	}
	double voulme()
	{
		return height * width * length;
	}
	Box operator+(const Box& b)
	{
		Box box;
		box.height = this->height + b.height;// you will add the height of current obeject to the height of past object to a newly defined object
		box.width = this->width + b.width;
		box.length = this->length + b.length;
		return box;
	}
	Box operator-(const Box& b)
	{
		Box box;
		box.height = this->height - b.height;// you will add the height of current obeject to the height of past object to a newly defined object
		box.width = this->width - b.width;
		box.length = this->length - b.length;
		return box;
	}
	Box operator*(const Box& b)//this->-- FUNCTION??
	{
		Box box;
		box.height = this->height * b.height;// you will add the height of current obeject to the height of past object to a newly defined object
		box.width = this->width * b.width;
		box.length = this->length * b.length;
		return box;
	}
	Box operator/(const Box& b)//this->-- FUNCTION??
	{
		Box box;
		box.height = this->height / b.height;// you will add the height of current obeject to the height of past object to a newly defined object
		box.width = this->width / b.width;
		box.length = this->length / b.length;
		return box;
	}
};
int main()
{
	Box b1(5.6, 7.8, 9.1);
	Box b2(1.2, 4.5, 3.9);
	Box b3;
	b3 = b1 + b2;
	cout << "Details of b3 are: " << endl;
	cout << "The height of b3 is: " << b3.getheight() << endl;
	cout << "The width of b3 is: " << b3.getwidth() << endl;
	cout << "The length of b3 is: " << b3.getlengtht() << endl;
	cout << "The volume of b3 is: " << b3.voulme() << endl;
	_getch();
	return 0;
}*/


