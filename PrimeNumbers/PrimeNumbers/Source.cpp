#include "SimpleBacktrack.h"
#include <iostream> 
#include <vector> 
#include <cmath> 
using namespace std;
int main()
{
	int S = 54, N = 2, P = 3;
	SimpleBacktrack simpleBacktrack;
	simpleBacktrack.allPrime(N, S, P);
	return 0;
}