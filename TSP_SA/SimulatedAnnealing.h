#pragma once
#include "TravelingSalesmanProblem.h"
#include <string>
#include <vector>
class SimulatedAnnealing
{
	std::vector< int > the_best_solution;
	int min_cost;

	int countCost(std::vector<int> path);
	TravelingSalesmanProblem& tsp;
	float countProbability(int current_cost, int new_cost, float current_temperature);
public:
	SimulatedAnnealing(TravelingSalesmanProblem& tsp);
	~SimulatedAnnealing();

	std::string getSolutionToString();
	void swapTwoRandomCities(std::vector<int>& path);
	std::vector <int> generateRandomSolution();
	void startAlgorithm();
};