/*
 * prime.cc
 *
 *  Created on: 16.04.2013
 *      Author: Frank Grimm (http://fh-zwickau.de/~fgr)
 */

#include <iostream> 	// für cout, endl
#include <limits> 		// für numeric_limits

// Prüfe, ob gegebene Zahl "num" eine Primazahl ist
bool isprime(unsigned int num) {
	// Schleife läuft von 2 bis einschließlich num-2
	// (es ist sichergestellt, dass num - 2 nicht negativ ist)
	if (num < 2)
		return false;
	for (unsigned int i = 2; i <= num - 2; ++i)
		if (num % i == 0)
			// num ist durch i teilbar
			return false;
	return true; // num ist Primzahl
}

int main() {
	const unsigned int max = std::numeric_limits<unsigned int>::max();
	for (unsigned int n = 1; n < max; ++n)
		if (isprime(n))
			std::cout << "Primzahl: " << n << std::endl;
	return 0;
}
