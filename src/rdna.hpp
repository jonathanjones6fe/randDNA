#include <random>
#include <string>

using namespace std;

string randDNA (int seed, string bases, int n) {
	if (bases.length() < 1) //nothing to use 
		return "";
		
	mt19937 random(seed);	
  	uniform_int_distribution<unsigned int> distro(0, bases.length()-1);
	string dna = "";
	
	for(int i = 0; i < n; i++)
		dna += bases[distro(random)]; //randomly add a chars to dna from base

  	return dna;
}
