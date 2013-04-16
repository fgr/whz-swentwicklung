// Primazahlentest f�r gro�e Zahlen (unsigned long long)
// HINWEIS: KOMMENTARZEICHEN DER RESTLICHEN ZEILEN ENTFERNEN UND
//          ALLE ZEILEN IN prime.cc AUSKOMMENTIEREN

///*
// * prime_longlong.cc
// *
// *  Created on: 16.04.2013
// *      Author: Frank Grimm (http://fh-zwickau.de/~fgr)
// */
//
//#include <iostream> 	// f�r cout, endl
//#include <limits> 		// f�r numeric_limits
//
//typedef unsigned long long ganzzahl;
//
//bool isprime(ganzzahl num) {
//	// Schleife l�uft von 2 bis einschlie�lich num-2
//	// (es ist sichergestellt, dass num - 2 nicht negativ ist)
//	if(num < 2)
//		return false;
//	for (ganzzahl i = 2; i <= num - 2; ++i)
//		if (num % i == 0)
//			// num ist durch i teilbar
//			return false;
//	return true; // num ist Primzahl
//}
//
//int main() {
//	const ganzzahl max = std::numeric_limits<ganzzahl>::max();
//		for (ganzzahl n = 0; n < max; ++n)
//			if (isprime(n))
//				std::cout << "Primzahl: " << n << std::endl;
//
//	return 0;
//}
