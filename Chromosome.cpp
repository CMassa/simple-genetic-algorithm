#include "Chromosome.h"

Chromosome::Chromosome() {
	this->genes = "";
	this->fitness = 0;
}

Chromosome::Chromosome(int gene_size) {
	for(int i=0; i<gene_size; ++i) {
		genes += get_random_nucleobase();
	}
}

void Chromosome::mutate(float mutation_rate) {
	for(int i=0;i<genes.size();++i) {
		float random = get_random_float_between(.0f, 1.0f);
		if(mutation_rate > random) {
			genes[i] = get_random_nucleobase();
		}
	}
}

Chromosome Chromosome::crossover(Chromosome partner) {
	Chromosome child(genes.size());
	int crossover_point = get_random_int_between(0, genes.size());
	for(int i=0; i<genes.size();++i) {
		if(i<=crossover_point)
			child.genes[i] = this->genes[i];
		else
			child.genes[i] = partner.genes[i];
	}
	return child;
}

int Chromosome::calculate_fitness(string DNA) {
	fitness = 0;
	for(int i=0;i<DNA.size();++i) {
		if(genes[i] == DNA[i])
			++fitness;
	}
	return fitness;
}

string Chromosome::get_genes() {
	return genes;
}

int Chromosome::get_fitness() {
	return fitness;
}
