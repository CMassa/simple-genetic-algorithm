#include<random>
#include<ctime>
#include <cstdlib>

int get_random_int_between(int a, int b) {
	std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<> distr(a, b);	
    return distr(eng);
}

float get_random_float_between(float a, float b) {
	return a + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX)/(b-a));
}
