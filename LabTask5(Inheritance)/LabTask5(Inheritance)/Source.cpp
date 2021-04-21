//                                                             LAB TASK 5

#include<iostream>
#include<conio.h>
#include<string>
using namespace std;


//________________________Q1__________________________

//You are already familiar with the Rectangleand DormRoom object typesand have also written class descriptions for the two classes.Write down C++ class declarations for both the class.

/*class dormRoom {
	private:
		int beds, desks, lights, chairs, fans, days;
		int rentPerDay;
	public:
		dormRoom()
		{
			rentPerDay = 3500;
		}
		//getters
		int getbeds()
		{
			return beds;
		}
		int getdesks()
		{
			return desks;
		}
		int getlights()
		{
			return lights;
		}
		int getchairs()
		{
			return chairs;
		}
		int getfans()
		{
			return fans;
		}
		int getdays()
		{
			return days;
		}
		//setters
		void setbeds(int beds)
		{
			this->beds = beds;
		}
		void setdesks(int desks)
		{
			this->desks = desks;
		}
		void setlights(int lights)
		{
			this->lights = lights;
		}
		void setchairs(int chairs)
		{
			this->chairs = chairs;
		}
		void setfans(int fans)
		{
			this->fans = fans;
		}
		void setdays(int days)
		{
			this->days = days;
		}
		float setngetRent()
		{
			float rent = rentPerDay * days;
			return rent;
		}
		void output()
		{
			cout << "Beds : " << getbeds() << "\nDesks : " << getdesks() << "\nChairs : " << getchairs();
			cout << "\nLights : " << getlights() << "\nFans : " << getfans() << "\nRent for " << getdays() << " days is :";
			cout << setngetRent();
		}
};
class rectangle
{
private:
	float length, width;
public:
	rectangle(float length, float width) {
		this->length = length;
		this->width = width;
	}
	//getter
	float getl() {
		return length;
	}
	float getw() {
		return width;
	}
	//setter
	void setl(float length) {
		this->length = length;
	}
	void setw(float width) {
		this->width = width;
	}
	inline float calcArea() {
		return length * width;
	}
};
int main()
{
	cout << "Class Dorm Room :\n-----------------\n";
	dormRoom dr;
	dr.setbeds(3);
	dr.setdesks(2);
	dr.setlights(4);
	dr.setchairs(3);
	dr.setfans(2);
	dr.setdays(4);
	dr.output();
	cout << "\n-----------------\nClass Rectangle :\n-----------------\n";
	rectangle r(13, 10);
	cout << "Length : " << r.getl();
	cout << "\nWidth : " << r.getw();
	cout << "\nArea : " << r.calcArea();
}*/

//________________________Q2__________________________

//To produce the software for this machine write down the class descriptionand declaration for the MealBill class.
	
/*class MealBill
{
private:

	float MealCost, Tax, Tip, TotalCost, Payment, Change;
public:

	float GetMealCost()
	{
		return MealCost;
	}
	void SetMealCost(float m)
	{
		MealCost = m;
	}

	float CalculateTax()
	{
		return (7.5 / 100) * MealCost;
	}
	float CalculateTip()
	{
		return 0.15 * MealCost;
	}
	float CalculateTotalAmount()
	{
		return MealCost + CalculateTax() + CalculateTip();
	}
	/*Meal cost xx.xx
		Tax xx.xx
		Tip xx.xx
		Total cost xx.xx/*
	void ShowBill()
	{
		cout << "\n-----------------\nBill\n-----------------\n" << endl;
		cout << "Tax " << CalculateTax() << endl;
		cout << "Tip " << CalculateTip() << endl;
		cout << "Total cost " << CalculateTotalAmount() << endl;
	}
	/*Receipt
			Total cost xx.xx
			Payment xx.xx
			Change xx.xx
			Thank you for dining at& lt; restaurant name& gt; ./*
	void ShowReceipt(float p, string r)
	{
		cout << "\n-----------------\nReceipt\n-----------------\n" << endl;
		cout << "\Total cost " << CalculateTotalAmount() << endl;
		cout << "Payment " << p << endl;
		cout << "Change " << p - CalculateTotalAmount() << endl;
		cout << "Thank you for dining at " << r << endl;
		cout << CalculateTip() << endl;
	}

};

int main()
{
	MealBill MB1;
	float meal;
	float paymment;
	string name;

	cout << "Enter the cost of meal " << endl;
	cin >> meal;
	MB1.SetMealCost(meal);
	MB1.ShowBill();
	cout << endl << endl << "Enter name of the restraunt" << endl;
	cin >> name;
	cout << "Enter customer payment" << endl;
	cin >> paymment;
	_getch();
	return(0);
}*/

//________________________Q3__________________________

//Write a program for The University Summit Restaurant, which allows a student Ahmed Ali to charge the cost of a meal to his student account.

/*class MealBill
{
private:

	float MealCost, Tax, Tip, TotalCost, Payment, Change, Balance;
	string ID, Name;
public:

	float GetMealCost()
	{
		return MealCost;
	}
	void SetMealCost(float m)
	{
		MealCost = m;
	}
	float GetTax()
	{
		return Tax;
	}
	void SetTax(float t)
	{
		Tax = t;
	}
	float CalculateTax()
	{
		return (Tax / 100) * MealCost;
	}
	float CalculateTip()
	{
		return 0.15 * MealCost;
	}
	float CalculateTotalAmount()
	{
		return MealCost + CalculateTax() + CalculateTip();
	}

	void ShowBill(string n)
	{
		cout << "Amount of " << n << "'s Bill:" << CalculateTotalAmount() << endl;
		cout << "\n-----------------\nBill\n-----------------\n" << endl;
		cout << "Tax " << CalculateTax() << endl;
		cout << "Tip " << CalculateTip() << endl;
		cout << "Total cost " << CalculateTotalAmount() << endl;
	}

	void ShowReceipt(float p, string r, string n)
	{

		cout << "Charge the meal to " << n << "'s Account:" << endl;
		cout << "\n-----------------\nReceipt\n-----------------\n" << endl;
		cout << "\Total cost " << CalculateTotalAmount() << endl;
		cout << "Payment " << p << endl;
		cout << "Change " << p - CalculateTotalAmount() << endl;
		cout << "Thank you for dining at " << r << endl;
		cout << CalculateTip() << endl;
	}

	void ShowCurrentBalance(string id, string n, string FN, float B = 2000)
	{
		cout << "\n-----------------\nCurrent Status of " << n << "'s account:\n-----------------\n" << endl;
		cout << "ID: " << id << endl;
		cout << "Name: " << FN << endl;
		cout << "Balance: " << B - CalculateTotalAmount() << endl;
	}

};
int main()
{
	MealBill AhmedAli;
	float meal;
	float paymment, tax;
	string Restaunt;
	string stdName, fName;
	string id;

	cout << "Enter the cost of meal " << endl;
	cin >> meal;
	AhmedAli.SetMealCost(meal);
	cout << "Enter sale of tax in percentage " << endl;
	cin >> tax;
	AhmedAli.SetTax(tax);


	cout << "Enter student name" << endl;
	cin >> stdName;
	cout << "Enter Student ID" << endl;
	cin >> id;
	cout << "Enter Full name" << endl;
	cin >> fName;
	AhmedAli.ShowBill(stdName);
	cout << endl << endl;
	cout << "Enter name of the restraunt" << endl;
	cin >> Restaunt;
	cout << "Enter customer payment" << endl;
	cin >> paymment;

	AhmedAli.ShowReceipt(paymment, Restaunt, stdName);
	AhmedAli.ShowCurrentBalance(id, stdName, fName);
	_getch();
	return(0);
}*/

//________________________Q4__________________________

//A student’s grade record is initialized with his / her ID, number of creditsand the grade points earned.The number of creditsand grade points default to 0 (GPA 0.0), for anew
//student.The student record is used for the purpose of determining the GPA – the total creditsand the grade points are used to compute the GPA.

/*class record {
private:
	string id, name;
	float creditsAttempted = 0;
	float gradePts = 0;
	float GPA = 0;
public:
	string getname() {
		return name;
	}
	record(string n, string id, float cA, float gPts) : name(n), id(id), creditsAttempted(cA), gradePts(gPts)
	{};
	void setter(float creditsAttempted, float gradePts) {
		creditsAttempted += creditsAttempted;
		gradePts += gradePts;
	}
	void setCredits(float c)
	{
		creditsAttempted += c;
	}
	float getCredits()
	{
		return creditsAttempted;
	}
	void setPoints(float p)
	{
		gradePts += p;
	}
	float getGrade()
	{
		return gradePts;
	}
	float gpaCalc() {
		GPA = gradePts / creditsAttempted;
		return GPA;
	}
	void showdata()
	{
		cout << """Student:" << id << " Units:" << creditsAttempted << " GradePts:" << gradePts << " GPA:" << gpaCalc() << endl;
	}

};

int main()
{
	record student1("Nimrah", "SE-0021377", 102, 350);
	cout << "\n----------------\nFIRST SEMESTER\n----------------\n";
	student1.showdata();

	// for next semester 
	student1.setCredits(16);
	student1.setPoints(60);

	cout << "\n----------------\nSECOND SEMESTER\n----------------\n";
	student1.getCredits();
	student1.showdata();  // outputs the total GPA for 2 semesters
}*/

//________________________Q5__________________________

//Write a program that creates a student grade record for a new student.

/*class record {
private:
	string id, name;
	float creditsAttempted = 0;
	float gradePts = 0;
	float GPA = 0.00;
public:
	string getname() {
		return name;
	}
	record(string n, string id, float cA, float gPts) : name(n), id(id), creditsAttempted(cA), gradePts(gPts)
	{};
	void setter(float creditsAttempted, float gradePts) {
		creditsAttempted += creditsAttempted;
		gradePts += gradePts;
	}
	void setCredits(float c)
	{
		creditsAttempted += c;
	}
	float getCredits()
	{
		return creditsAttempted;
	}
	void setPoints(float p)
	{
		gradePts += p;
	}
	float getGrade()
	{
		return gradePts;
	}
	float getGpa()
	{
		return GPA;
	}
	float gpaCalc() {
		GPA = gradePts / creditsAttempted;
		return GPA;
	}
	void showdata()
	{
		cout << "Student:" << id << " Units:" << creditsAttempted << " GradePts:" << gradePts << " GPA:" << gpaCalc() << endl;

	}

};


int main()
{
	record student1("Nimrah", "SE-0021377", 102, 350);
	cout << student1.getname() << "'s GPA is: " << student1.getGpa() << endl;
	cout << student1.getname() << "'s 1st Semester grade points and units: " << student1.getGrade() << " " << student1.getCredits();

	cout << "\n----------------\nFIRST SEMESTER\n----------------\n";
	student1.showdata();


}*/

//________________________Q6__________________________

/*Create a Base Class Person having attributes(name, age, gender) with behavior of
showdata(displaying all the members) and override same method in derived classes.
Derive student Classand from student class derive graduate student with appropriate
data membersand behavior.*/

/*class person {
	protected:
		string name;
		int age;
		string gender;
	public:
		virtual void showdata() = 0;
};
class student :protected person {
protected:
	int studentId;
	float studentGpa;
public:
	student() {
	}
	student(string name, int age, string gender, int studentId, float studentGpa) {
		this->name = name;
		this->age = age;
		this->gender = gender;
		this->studentId = studentId;
		this->studentGpa = studentGpa;
	}
	void showdata() {
		cout << "Name of Student : " << name;
		cout << "\nAge of Student : " << age;
		cout << "\nGender of Student : " << gender;
		cout << "\nStudent ID : " << studentId;
		cout << "\nStudent GPA : " << studentGpa;
	}
};
class graduateStudent :student {
private:
	string majorSubject;
public:
	graduateStudent(string name, int age, string gender, int studentId, float studentGpa, string majorSubject) {
		this->name = name;
		this->age = age;
		this->gender = gender;
		this->studentId = studentId;
		this->studentGpa = studentGpa;
		this->majorSubject = majorSubject;
	}
	void showdata() {
		cout << "Name of Student : " << name;
		cout << "\nAge of Student : " << age;
		cout << "\nGender of Student : " << gender;
		cout << "\nStudent ID : " << studentId;
		cout << "\nStudent GPA : " << studentGpa;
		cout << "\nMajor Subject : " << majorSubject;
	}
};

int main()
{
	student s("Nimrah", 20, "Female", 77, 3.7);
	graduateStudent gs("Iqra", 20, "Female", 87, 3.5, "Software Engineering");
	cout << "\n----------------------------------------\nStudent's Data:\n----------------------------------------\n";
	s.showdata();
	cout << "\n---------------------------------------\nGraduateStudent's Data:\n---------------------------------------\n";
	gs.showdata();
}*/
