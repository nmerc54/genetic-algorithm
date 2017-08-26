#include <string>
#include <iostream>
#include "node.cpp"


using namespace std;

int main(){
	cout << "Creating Node" << endl;
	mynode = node( "10110001" );
	cout << "Node Created." << endl;

	/*
	 *  Tests
	 */
	cout << "Fitness:    "	<< mynode.getFitness() 				<< endl;
	cout << "Chromosome: " 	<< mynode.getChromosome() 		<< endl;
	cout << "Crossover:  "	<< mynode.getCrossoverPoint()	<< endl;

	return 0;

}
