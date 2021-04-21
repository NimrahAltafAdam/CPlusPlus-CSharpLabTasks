//                                                           LAB TASK 2

# include<iostream>
# include<conio.h>
using namespace std;

//________________________Q1_________________________

//***//Write a program to compute the length of the line segment connecting two points. For input the two numbers representing each point are entered in the form (x,y). The parentheses and comma are read as character data and then discarded.

/*int main()
{
	char x[5];
	char y[5];
	double b1, b2, d, sqr;
	cout << "ENTER FIRST CORDINATES IN FORM OF (X1,Y1)" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> x[i];
	}
	cout << "ENTER SECOND CORDINATES IN FORM OF (X2,Y2)" << endl;
	for (int j = 0; j < 5; j++)
	{
		cin >> y[j];
	}
	b1 = (x[1] - y[1]) * (x[1] - y[1]);
	b2 = (x[3] - y[3]) * (x[3] - y[3]);
	d = b1 + b2;
	sqr = sqrt(d);

	cout << "THE DITANCE BTW " << "(" << x[1] << "," << x[3] << ")" << "and" << "(" << y[1] << "," << y[3] << ")  is : " << sqr << endl;
	_getch;
	return 0;
}*/

//________________________Q2_________________________

//Take two matrix M1and M2 as an inputand perform the additionand multiplication of these two matrices.

/*int main()
{
	int r, c, a[100][100], b[100][100], sum[100][100], i, j;

	cout << "Enter number of rows (between 1 and 100): ";
	cin >> r;

	cout << "Enter number of columns (between 1 and 100): ";
	cin >> c;

	cout << endl << "Enter elements of 1st matrix: " << endl;

	// Storing elements of first matrix entered by user.
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << "Enter element a" << i + 1 << j + 1 << " : ";
			cin >> a[i][j];
		}

	// Storing elements of second matrix entered by user.
	cout << endl << "Enter elements of 2nd matrix: " << endl;
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << "Enter element b" << i + 1 << j + 1 << " : ";
			cin >> b[i][j];
		}

	// Adding Two matrices
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
			sum[i][j] = a[i][j] + b[i][j];

	// Displaying the resultant sum matrix.
	cout << endl << "\n-----------------\nSum of two matrix is: \n-----------------\n " << endl;
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << sum[i][j] << "  ";
			if (j == c - 1)
				cout << endl;
		}
	_getch();
	return(0);
}*/


//B# PROGRAM:

/*int main()
{
	int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

	cout << "Enter rows and columns for first matrix: ";
	cin >> r1 >> c1;
	cout << "Enter rows and columns for second matrix: ";
	cin >> r2 >> c2;

	// If column of first matrix in not equal to row of second matrix,
	// ask the user to enter the size of matrix again.
	while (c1 != r2)
	{
		cout << "Error! column of first matrix not equal to row of second.";

		cout << "Enter rows and columns for first matrix: ";
		cin >> r1 >> c1;

		cout << "Enter rows and columns for second matrix: ";
		cin >> r2 >> c2;
	}

	// Storing elements of first matrix.
	cout << endl << "Enter elements of matrix 1:" << endl;
	for (i = 0; i < r1; ++i)
		for (j = 0; j < c1; ++j)
		{
			cout << "Enter element a" << i + 1 << j + 1 << " : ";
			cin >> a[i][j];
		}

	// Storing elements of second matrix.
	cout << endl << "Enter elements of matrix 2:" << endl;
	for (i = 0; i < r2; ++i)
		for (j = 0; j < c2; ++j)
		{
			cout << "Enter element b" << i + 1 << j + 1 << " : ";
			cin >> b[i][j];
		}

	// Initializing elements of matrix mult to 0.
	for (i = 0; i < r1; ++i)
		for (j = 0; j < c2; ++j)
		{
			mult[i][j] = 0;
		}

	// Multiplying matrix a and b and storing in array mult.
	for (i = 0; i < r1; ++i)
		for (j = 0; j < c2; ++j)
			for (k = 0; k < c1; ++k)
			{
				mult[i][j] += a[i][k] * b[k][j];
			}

	// Displaying the multiplication of two matrix.
	cout << endl << " \n----------------\nOutput Matrix:\n----------------\n " << endl;
	for (i = 0; i < r1; ++i)
		for (j = 0; j < c2; ++j)
		{
			cout << " " << mult[i][j];
			if (j == c2 - 1)
				cout << endl;
		}
	_getch();
	return(0);
}*/

//________________________Q3&Q4_________________________

//Write a program that define structure to maintain student records, structure student should be consisting of the following attributes.
//1.Student first name(max 20 characters) 2. Student last name(max 20 characters) 3. Student scores(float / double) e.g 85.4.Pass the structure define in Q.3 to some function to move to display.

/*struct student
{
	string fname;
	string lname;
	double score;
};
void showdata(student s1)
{
	cout << "                          THE STUDENT RECORD IS " << endl << endl;
	cout << "FIRST NAME : " << s1.fname << endl;
	cout << "LAST NAME  : " << s1.lname << endl;
	cout << "SCORE OUT OF 50 : " << s1.score << endl;
};
int main()
{
	student s1;
	cout << "NAME (max. 20 characters)    :  " << endl;
	cin >> s1.fname;
	cout << "LAST NAME(max. 20 characters):  " << endl;
	cin >> s1.lname;
	cout << "SCORE    :  " << endl;
	cin >> s1.score;
	showdata(s1);
	_getch;
	return 0;
}*/

//________________________Q5_________________________


//Create nested structure.Firstly define Address structureand then call address Structure in Employee Structureand program will give some raise in salary, if it is less than 50000 Address(house no, city, pin code) Employee(empid, name, salary, address).

/*struct Address
{
	string HouseNo;
	string City;
	int PinCode;
};

struct Employee
{
	string EmpID;
	string name;
	int salary;
	Address add;


};
int main()
{
	Employee e1;
	e1.EmpID = "IT_DEP-0023";
	e1.name = "Rubab Amir";
	e1.salary = 45000;
	e1.add.City = "Karachi";
	e1.add.HouseNo = "34-A Block 2, Gulshan";
	e1.add.PinCode = 7500;
	if (e1.salary < 50000)
	{
		cout << "As " << e1.name << " of employee id " << e1.EmpID << " salary is less than 50 000 hence " << e1.name << " will receive a pay raise.";
	}
	_getch();
	return(0);
}*/

//________________________Q6_________________________

//Write a C++ Program to create a small Calculator by using Pointers.

/*int sum(int* p1, int* p2) // we use pointers to define the parameter of a function if we want to pass the address of variables to it. 
{
	int result;
	result = *p1 + *p2;
	return result;
}

int diff(int* p1, int* p2)
{
	int result;
	result = *p1 - *p2;
	return result;
}

int multi(int* p1, int* p2)
{
	int result;
	result = *p1 * *p2;
	return result;
}
int div(int* p1, int* p2)
{
	int result;
	result = *p1 / *p2;
	return result;
}

int main()
{
	int num1, num2;
	int* pt1, * pt2;
	char op;
	cout << "Enter value for num1" << endl;
	cin >> num1;
	cout << "Enter value for num2" << endl;
	cin >> num2;
	pt1 = &num1;
	pt2 = &num2;
	cout << "Enter an operator";
	cin >> op;
	switch (op)
	{
	case '+':
	{
		cout << num1 << " + " << num2 << " = " << sum(&num1, &num2) << endl;
	}
	break;
	case '-':
	{
		cout << num1 << " - " << num2 << " = " << diff(&num1, &num2) << endl;
	}
	break;
	case '*':
	{
		cout << num1 << " * " << num2 << " = " << multi(&num1, &num2) << endl;
	}
	break;
	case '/':
	{
		cout << num1 << " / " << num2 << " = " << div(&num1, &num2) << endl;
	}
	break;
	}
	_getch();
	return 0;
}*/

