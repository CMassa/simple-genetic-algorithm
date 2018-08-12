# simple-genetic-algorithm

This is a simple genetic algorithm demonstration, just change the parameters inside 'main.cpp' file and execute 'make' to generate the executable and './main' to execute the algorithm.

Modifiable parameters represent the following concepts:

	DNA (string) - Char sequence we want to obtain from the population
	POPULATION_SIZE (integer, default = 500) - Number of inhabitants of the population
	MUTATION_RATE (float, default = 0.01f) - Mutation ratio of an individual's genes

When you execute the script it will start printing the generation number on the left and the best result found on the right, which is the sequence most similar to the one we are looking for (sequence with maximum fitness). At the end it will print the latest generation where the sequence was found

	Generation number: 1 | Best result: s;[uY7ZT<):g+UX@$hPY~]hbE%%C.3_aQh=9E%9;s{%Z<$VpHPVUA":N"3?SZ<}UMYLH
	Generation number: 2 | Best result: N;s&|j:U19`niO"/2y/0-J`(k_\t*B\0=STI#uMt@yqDA=m#kFd>|w-vyiu]ucI%kJuC
	Generation number: 3 | Best result: O5C6)w!C0nfC}_MW!y3~,KpH,I1}Pk|!5nK?[Qo.cKG6#7=^%$E01[44e,s7]WR9B<ie3w}z
	Generation number: 4 | Best result: ,di9'APoS>m-h{EO;#`~Kvb{f3?AlC*U!^FrRu8+cKG6#7=^/&5H7$W(>B<lQrsN@{1'Pb)Q
	Generation number: 5 | Best result: |doSXAaq5@^CB.KA`Km`isbkG&@)G:c<n~/Cc%19vB);27FgyU5`OlD-:.qBTF@zFZ>V0G9U
	Generation number: 6 | Best result: %iw6UAG1i2JjnTKZPPz{*eQ/CG#(r7xS$1z"f:?RG*qHnc8e:/ktZGCd,HF*#APheB[e{[
	...
	Generation number: 245 | Best result: AGCTCAGTCAGCTCAGTCAGCTCAGTCAGCTCAGTCAGCTCAGTCAGCTCAGTCAGCTCAGTCAGCTCAGTC
	Found sequence: AGCTCAGTCAGCTCAGTCAGCTCAGTCAGCTCAGTCAGCTCAGTCAGCTCAGTCAGCTCAGTCAGCTCAGTC

Note: despite using the AGTC characters in the sequence we want to find, it is intended that the program look for all types of ASCII characters, since it is designed to work in numerous scenarios besides the obvious
