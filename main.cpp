#include <iostream>
#include "funcs.h"
using namespace std;
int main() {

	bool x = isDivisibleBy(10,2);
	if (x == 1) {
	cout << "Yes is Divisble." << endl;
	}
	else if (x == 0) {
	cout << "No is not Divisible." << endl;
	}
	
	bool y = isPrime(11232);
	if (y == 1) {
	cout << "Da is Prime." << endl;
	}
	else if (y == 0) {
	cout << "Nyet is not Prime." << endl;
	}
	
	int z = nextPrime(17);
	cout << z << " is the next prime." << endl;
	
	int v = countPrimes(10,20);
	cout << v << " is the amount of primes in the range." << endl;
	
	bool g = isTwinPrime(11);
	if (x == 1) {
	cout << "Yep is twin prime." << endl;
	}
	else if (x == 0) {
	cout << "Nah is not twin prime." << endl;
	}
	
	int f = nextTwinPrime(19);
	cout << "The next twin prime is " << f << "." << endl;
	
	int q = largestTwinPrime(10, 29);
	cout << "The largest twin prime in the range is " << q << "." << endl;
	
}
