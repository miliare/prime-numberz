#include <iostream>
#include <list>

using namespace std;

class PrimeFactors {

public:
	static list<int> generate(int value) {
		list<int> *primes = new list<int>;
		if (value % 2 == 0) {
			primes->push_back(2);
			value /= 2;
			if (value > 1) {
				primes->push_back(value);
			}
		}

		if (value == 2) {
			primes->push_back(2);
		} else if (value == 3) {
			primes->push_back(3);
		}
		return *primes;
	}
};
