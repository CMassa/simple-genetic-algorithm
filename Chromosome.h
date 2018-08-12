#ifndef CHROMOSOME_H
#define CHROMOSOME_H
#include<string>
#include<random>
#include<ctime>
#include <cstdlib>
#include<iostream>
#include "Helpers.h"
using namespace std;

class Chromosome {
	private:
		string genes;
		int fitness;
		
	public:
		Chromosome();
		Chromosome(int gene_size);
		void mutate(float mutation_rate);
		Chromosome crossover(Chromosome parent);
		int calculate_fitness(string DNA);
		string get_genes();
		int get_fitness();
};

#endif

