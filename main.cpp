using namespace std;

#include <string>
#include <iostream>
#include "node.cpp"


int main(){
	cout << "Creating Node" << endl;
	node mynode = node( "10110001" );
	cout << "Node Created." << endl;

	/*
	 *  Tests
	 */
	cout << "Fitness:    "	<< mynode.getFitness() << endl;
	cout << "Chromosome: " 	<< mynode.getChromosome() << endl;
	cout << "Crossover:  "	<< mynode.getCrossoverPoint() << endl;

	mynode.setCrossoverPoint( 15 );
	mynode.setMutationRate( 12.564 );
	
	cout << "Crossover: " << mynode.getCrossoverPoint() << endl;
	cout << "Mutation:  " << mynode.getMutationRate() << endl;

	return 0;

}
