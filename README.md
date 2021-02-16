# simple-genetic-algorithm

This is just a simple genetic algorithm. It serves as a demonstration of how it can be coded with C++ in an easy way.

## Execution
```
	make
	./main
```

## Customize
Executin can be customized on `main.cpp` via the following three constants. They represent the following concepts:

	DNA (string) - Char sequence we are expecting to obtain from the population
	POPULATION_SIZE (integer, default = 500) - Number of inhabitants of the population
	MUTATION_RATE (float, default = 0.01f) - Mutation ratio of an individual's genes

When executing the script it will start printing the generation number and the best result found, which is the sequence most similar to the one we are looking for (sequence with maximum fitness). 
At the end it will print the latest generation where the sequence was found

	Generation number: 1 | Best result: AGCTCAGTCAGCTCAGAGGGCTCAAACAGCTCCTGCAGCTCAGTCAGCTTTGTCAGCTCAGTCAGCTCACTA
	Generation number: 2 | Best result: AGCTCAGTCAGCTCAGAGGGCTCAAGCAGCTCCTGCAGCTCAGTCAGCTATGTCAGCTCAGTCAGCTCACTA
	...
	...
	...
	Generation number: 245 | Best result: AGCTCAGTCAGCTCAGTCAGCTCAGTCAGCTCAGTCAGCTCAGTCAGCTCAGTCAGCTCAGTCAGCTCAGTC
	Found sequence: AGCTCAGTCAGCTCAGTCAGCTCAGTCAGCTCAGTCAGCTCAGTCAGCTCAGTCAGCTCAGTCAGCTCAGTC
				

