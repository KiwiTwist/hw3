#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;


void random(double* p, const int N) {
	for(int i = 0; i < N; i++) {
		p[i] = rand() / (double)RAND_MAX;
	}
}

void calculations(double* p, double& mean, double& var, const int N) {
	mean = 0;
	var = 0;

	// mean value
	for(int i = 0; i < N; i++) {
		mean += p[i];
	}
	mean /= N;

	// variance
	for(int i = 0; i < N; i++) {
		var += (p[i] - mean) * (p[i] - mean);
	}
	var /= N;
}


int main() {
	srand(time(NULL));

	const int N = 100;
	double p[N];
	double mean, var;

	random(p, N);
	calculations(p, mean, var, N);

	cout << "Mean = " << mean << endl;
	cout << "Variance = " << var << endl;

	return 0;
}
