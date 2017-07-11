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

/*
#include <iostream>

int main()
{
	// currval is the number we're counting we'll read new values into val
	int currVal = 0, val = 0;
	// read first number and ensure that we have data to process
	if (std::cin >> currVal) {
		int cnt = 1; // store the count for the current value we're processing
		while (std::cin >> val) { // read the remaining numbers
			if (val == currVal) // if the values are the same
				++cnt; // add 1 to cnt
			else { // otherwise, print the count for the previous value
				std::cout << currVal << " occurs " << cnt << " times" << std::endl;
				currVal = val; // remember the new value
				cnt = 1; // reset the counter
			}
		} // While loop ends here
		// remeber to print the count for the last value in the file
		std::cout << currVal << " occurs " << cnt << " times" << std::endl;
	} // outermost if statement ends here
	return 0;
}
*/


// Exercise 1.17
// The program will stay in the while loop until another number is entered.

// Exercise 1.18

/*
#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item book;
	// read ISBN, number of copies sold, and sales price
	std::cin >> book;
	// write ISBN, number of copies sold, total revenue, and average price
	std::cout << book << std::endl;
	return 0;
}
*/

/*
#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2; // read a pair of transactions
	std::cout << item1 + item2 << std::endl; // print their sum
	return 0;
}
*/

// Exercise 1.20
/*
#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2; // read a pair of transactions
	std::cout << item1 << '\n' << item2 << std::endl;
	return 0;
}
*/

// Exercise 1.21
/*
#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2; // read a pair of transactions
	std::cout << item1 + item2 << std::endl; // print their sum
	return 0;
}
*/

/*

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2; 
	// first check that item and item2 represent the same book
	if (item1.isbn() == item2.isbn()) {
		std::cout << item1 + item2 << std::endl;
		return 0;
	}
	else {
		std::cerr << "Data must refer to same ISBN" << std::endl;
		return -1;
	}

}

*/

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item total; // variable to hold data for the next transaction
	// read the first transaction and ensure that there are data to process
	if (std::cin >> total) {
		Sales_item trans; // variable to hold the running sum
		// read and process the remaining transactions
		while (std::cin >> trans) {
			// if w're still processing the same book
			if (total.isbn() == trans.isbn())
				total += trans; // update the running total
			else {
				// print results for the previous book
				std::cout << total << std::endl;
				total = trans; // total no refers to the next book
			}

		}
		std::cout << total << std::endl; // print the last transaction	
	}
	else {
		// no input! warn the user
		std::cerr << "No data??" << std::endl;
		return -1;
	}
	return 0;
}