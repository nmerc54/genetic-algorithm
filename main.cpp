using namespace std;

#include <string>
#include <iostream>
#include <stdio.h>      /* NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "node.cpp"
#include "helper.cpp"

int main(){
	cout << "Creating Node" << endl;
	node mynode = node( "10110001" );
	cout << "Node Created." << endl;
	
	/*
	 *  Initial Values:
	 */
	/*
	cout << "Fitness:    "	<< mynode.getFitness() << endl;
	cout << "Chromosome: " 	<< mynode.getChromosome() << endl;
	cout << "Chrom. Len: "  << mynode.getChromosomeLength() << endl;
	cout << "Crossover:  "	<< mynode.getCrossoverPoint() << endl;
	cout << "Mutation:   "  << mynode.getMutationRate() << endl;

	cout << "Setting Crossover and Mutation: " << endl;
	cout << "------------------------------- " << endl;
	mynode.setCrossoverPoint( 15 );
	mynode.setMutationRate( 12.564 );
	
	cout << "Fitness:    "	<< mynode.getFitness() << endl;
	cout << "Chromosome: " 	<< mynode.getChromosome() << endl;
	cout << "Chrom. Len: "  << mynode.getChromosomeLength() << endl;
	cout << "Crossover:  "	<< mynode.getCrossoverPoint() << endl;
	cout << "Mutation:   "  << mynode.getMutationRate() << endl;

	cout << "Mutating: " << endl;
	cout << "--------  " << endl;
	mynode.mutate();
	
	cout << "Fitness:    "	<< mynode.getFitness() << endl;
	cout << "Chromosome: " 	<< mynode.getChromosome() << endl;
	cout << "Chrom. Len: "  << mynode.getChromosomeLength() << endl;
	cout << "Crossover:  "	<< mynode.getCrossoverPoint() << endl;
	cout << "Mutation:   "  << mynode.getMutationRate() << endl;
	*/
	srand(time(NULL));
	for(int i = 0; i < 100; i++){
		cout << "Outcome: " << chance( 50 ) << endl;
	}

	return 0;

}
