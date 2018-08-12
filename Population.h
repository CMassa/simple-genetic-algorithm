#ifndef POPULATION_H
#define POPULATION_H
#include<vector>
#include<string>
#include "Chromosome.h"
#include "Helpers.h"
using namespace std;

class Population {
	private:
		vector<Chromosome> population;
		float mutation_rate;
		string DNA;
		int generation_number;

		pair<Chromosome, Chromosome> get_parents();

	public:
		Population(int population_size, float mutation_rate, string DNA);
		void evolve();
		void evaluate_fitness();
		string get_best_match();
		int get_generation_number();
};

#endif
