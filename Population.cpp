#include "Population.h"

Population::Population(int population_size, float mutation_rate, string DNA) {
	this->population = vector<Chromosome>(population_size);
	for(int i=0;i<population.size();++i)
		this->population[i] = Chromosome(DNA.size());

	this->mutation_rate = mutation_rate;
	this->DNA = DNA;
	this->generation_number = 0;
}

void Population::evolve() {
	this->evaluate_fitness(); // Calculate population fitness

	// Create new generation with the size of the current
	vector<Chromosome> new_generation(population.size());
	for(int i=0;i<population.size();++i) {
		// Get two high fitness parents
		pair<Chromosome, Chromosome> parents = this->get_parents();
		// Create a child crossing parents
		Chromosome child = parents.first.crossover(parents.second);
		// Mutate child and store it for new generation
		child.mutate(this->mutation_rate);
		new_generation[i] = child;
	}
	population = new_generation; // Change to new generation
	++generation_number;
}

void Population::evaluate_fitness() {
	for(int i=0;i<population.size();++i) {
		population[i].calculate_fitness(DNA);
	}
}

string Population::get_best_match() {
	int idx = 0;
	int max_fitness = 0;
	for(int i=0;i<population.size();++i) {
		int fitness = population[i].get_fitness();
		if(fitness > max_fitness) {
			max_fitness = fitness;
			idx = i;
		}
	}
	return population[idx].get_genes();
}

int Population::get_generation_number() {
	return this->generation_number;
}

// private
bool sort_by_fitness (Chromosome i, Chromosome j) { return (i.get_fitness()>j.get_fitness()); }

pair<Chromosome, Chromosome> Population::get_parents() {
	// Sort population by fitness
	sort (population.begin(), population.end(), sort_by_fitness);

	// Select two different random indexes from start to middle (the ones with higher fitness)
	int middle = (population.size()/2) + 1;
	int first_parent_idx = get_random_int_between(0, middle);
	int second_parent_idx = first_parent_idx;
	while (second_parent_idx == first_parent_idx)
		second_parent_idx = get_random_int_between(0, middle);

	return make_pair(population[first_parent_idx], population[second_parent_idx]);
}
