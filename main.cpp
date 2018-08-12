#include<iostream>
#include<string>
#include<random>
#include<ctime>
#include "Population.h"
using namespace std;

int main (int argc, char *argv[]) {
	// Genetic algorithm configuration
	string DNA = "AGCTCAGTCAGCTCAGTCAGCTCAGTCAGCTCAGTCAGCTCAGTCAGCTCAGTCAGCTCAGTCAGCTCAGTC";
	int POPULATION_SIZE = 500;
	float MUTATION_RATE = 0.01f;

	cout << "Trying to find sequence " << DNA << endl;
	cout << "Parameters: POPULATION_SIZE " << POPULATION_SIZE << " MUTATION_RATE " << MUTATION_RATE << endl;

	Population population(POPULATION_SIZE, MUTATION_RATE, DNA);

	bool sequence_found = false;
	while(!sequence_found) {
		population.evolve();
		string result = population.get_best_match();
		cout << "Generation number: " << population.get_generation_number() << " | Best result: " << result << endl;
		sequence_found = (DNA == result);
		if(sequence_found) {
			cout << "Found sequence: " << result << endl;
		}
	}
	return 0;
}
