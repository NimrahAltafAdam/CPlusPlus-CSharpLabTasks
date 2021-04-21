//                                                         LAB TASK 3

//________________________Q1___________________________

//Write a program in C++ that can calculate the factorial of a number by passing the address of that number to a function using pointers.


/*int fact(int* n)
{
	int fact = 1;
	if (*n <= 1)
	{
		return 1;
	}
	else
	{
		for (int count = 1; count < *n; count++)
		{
			fact += fact * count;
		}
		return fact;
	}

	//return *n * fact(*n - 1);
}
int main()
{
	int num;
	int* p1;
	cout << "Please enter a number to calculate its factorial" << endl;
	cin >> num;
	p1 = &num;
	cout << "the factorial of " << num << " is " << fact(p1) << endl;
	_getch();
	return 0;

}*/



//________________________Q2___________________________

//Write down a C++ program that will declareand initialize two arraysand would generate the sum of these two arrays by using pointers.

/*void sum1(int* p1, int* p2)
{
	int c[5]; // initialize a new array to get the sum of two arrays
	int* sum; // initialize a pointer to store the add of new array
	sum = c; // address stored in the pointer

	for (int i = 0; i < 5; i++)
	{
		*sum = *p1 + *p2; // the content of the add stored at p1 is added to the content in the add stored at p2 
// the sum is then saved at the add stored in sum.
		cout << "a[" << i << "]= " << *p1 << " b[" << i << "]= " << *p2 << " and   their sum is " << *sum << endl;
		p1++;
		p2++;
	}
}

int main()
{
	int num1[5] = { 3,6,9,12,15 };
	int num2[5] = { 6,12,18,24,30 };
	int* pt1, * pt2;

	pt1 = num1;
	pt2 = num2;
	// sum of 2 arrays
	sum1(num1, num2);
}*/



//________________________Q3___________________________

//Write down a C++ program, that will Calculate the area of a Circle by using Constant Data member PI = 3.14, and by using Constant Pointer.

/*int main()
{
	double rad, area;
	const double pi = 3.14;
	const double* ptr = &pi;
	cout << "Enter the radius to calculate the area of a circle";
	cin >> rad;
	area = *ptr * rad * rad;
	cout << "The area of circle is " << area;
	_getch();
	return 0;
}*/

//________________________Q4___________________________

//Write down a C++ program that would generate some table 2 * 1 = 2, 2 * 10 = 20 by using pointers.

/*int main()
{
	int num, len;
	int* ptr1, * ptr2;
	cout << "Enter a number to calculate its table";
	cin >> num;
	cout << "Enter the the length of the table";
	cin >> len;
	ptr1 = &num;
	ptr2 = &len;
	for (int i = 1; i <= *ptr2; i++)
	{
		cout << *ptr1 << " * " << i << " = " << *ptr1 * i << endl;
	}

	_getch();
	return 0;
}*/
