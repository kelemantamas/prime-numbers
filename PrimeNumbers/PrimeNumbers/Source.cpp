#include "SimpleBacktrack.h"
#include "ForwardTracking.h"
#include <time.h>
#include <iostream> 
#include <vector> 
#include <cmath> 
using namespace std;
int main()
{
	int S = 54, N = 2, P = 3;
	cout << "Simple backtrack:" << endl;
	clock_t tStart = clock();
	SimpleBacktrack simpleBacktrack;
	simpleBacktrack.allPrime(N, S, P);
	cout<<"Time taken SIMPLE BACTRACKING:\n"<< (double)(clock() - tStart) / CLOCKS_PER_SEC<< endl;
	cout << "Forward tracking: " << endl;
	tStart = clock();
	ForwardTracking forwardTracking;
	forwardTracking.allPrime(N, S, P);
	cout << "Time taken FORWARRD BACTRACKING:\n" << (double)(clock() - tStart) / CLOCKS_PER_SEC << endl;
	cin.get();

	return 0;
}