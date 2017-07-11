/*	#include <iostream>

using namespace std;

int main()
{
	cout << "Enter Two Numbers:" << endl;
	int v1 = 0, v2 = 0;
	cin >> v1 >> v2;
	cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << endl;


	return 0;

}

// 1.2 Exercises
// 1.3

/*
#include <iostream>

int main()
{
	std::cout << "Hello World!";
	return 0;
}

*/

// 1.4

/*
#include <iostream>

int main()
{
	cout << "Enter Two Numbers:" << endl;
	int v1 = 0, v2 = 0;
	cin >> v1 >> v2;
	cout << "The sum of " << v1 << " and " << v2 << " is " << v1 * v2 << endl;


	return 0;

}
*/

// 1.5
/*
#include <iostream>

int main()
{
	cout << "Enter Two Numbers:" << endl;
	int v1 = 0, v2 = 0;
	cin >> v1 >> v2;
	cout << "The sum of ";
		cout << v1;
		cout << " and ";
		cout << v2;
		cout << " is ";
	cout << v1 * v2 << endl;


	return 0;

}
*/

// 1.6

// It's not legal as the semicolo is put after the v1 and a new cout operator was not used on the next line. The compiler has no idea what to do without the cout in front of it.
// I'd remove the semicolon after v1 and it should run just fine.

/*
#include <iostream>

int main()
{
	int sum = 0, val = 1;
	// keep executing the while as long as val is less than or equal to 10
	while (val <= 10) {
		sum += val; // assigns sum + val to sum
		++val; // add 1 to val.
					}
	std::cout << "Sun of 1 to 10 inclusive is " << sum << std::endl;
	return 0;
}
*/

// Exercise 1.9

/*
#include <iostream>

int main()
{
	int sum = 0, val = 50;
	while (val <= 100) {
		sum += val;
			++val;
	}
	std::cout << "Sum of 50 to 100 is " << sum << std::endl;

	return 0;
}
*/

// Exercise 1.10
/*
#include <iostream>

int main()
{
	int countdown = 10;
	while (countdown >= 0) {
		std::cout << countdown << std::endl;
		--countdown;
	}

	return 0;
}
*/

// Exercise 1.11

/*
#include <iostream>

int main()
{
	int val1 = 0, val2 = 0, sum = 0;
	std::cout << "Please enter two numbers to get the sum of them: ";
	std::cin >> val1 >> val2;
	while (val2 >= val1) {
		sum += val1;
		++val1;
	}
	std::cout << "The sum of your numbers is: " << sum << std::endl;
	return 0;
}
*/

/*
#include <iostream>

int main()
{
	int sum = 0;
	// sum vbalues from 1 through 10 inclusive
	for (int val = 1; val <= 10; ++val)
		sum += val; //sames as sum = sum + val
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
	return 0;
}
*/

// Exercise 1.12
// This loop does nothing as 100 is greater than or equal to 100 since it's positive.
/*
#include <iostream>

int main()
{
	int sum = 0;
	for (int i = -100; i <= 100; ++i)
		sum += i;
	return 0;
}
*/

// Exercise 1.13
/*
#include <iostream>

int main()
{
	int sum = 0;
	for (int val = 1; val <= 10; ++val)
		sum += val;
	std::cout << "The sum of to 10 inclusive is " << sum << std::endl;
	return 0;
}
*/

//Exercise 1.14

// A while has more information spread out but allows some of the data to be used later. For loops have a one line code but the data inside the loop are not accesable later.

/*
#include <iostream>

int main()
{
	int sum = 0, value = 0;
	// read until end- of file, calculating a running total of all values read
	while (std::cin >> value)
		sum += value; // same as sum = sum + value
	std::cout << "Sum is: " << sum << std::endl;
	return 0;
}
*/

// Exercise 1.4.3

/*
#include <iostream>

int main()
{
	int sum1 = 1, value = 0;
	while (std::cin >> value)
		sum1 *= value;
	std::cout << "The sum is: " << sum1 << std::endl;
	return 0;
}
*/

