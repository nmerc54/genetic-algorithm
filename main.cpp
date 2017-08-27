using namespace std;

#include <string>
#include <iostream>
#include <stdio.h>      /* NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <typeinfo>
#include "helper.cpp"
#include "node.cpp"

int main(){
	
	cout << "Creating Node" << endl;
	node mynode = node( "10110001" );
	cout << "Node Created." << endl;
	
	/*
	 *  Initial Values:
	 */
	
	cout << "Fitness:    "	<< mynode.getFitness() << endl;
	cout << "Chromosome: " 	<< mynode.getChromosome() << endl;
	cout << "Chrom. Len: "  << mynode.getChromosomeLength() << endl;
	cout << "Crossover:  "	<< mynode.getCrossoverPoint() << endl;
	cout << "Mutation:   "  << mynode.getMutationRate() << endl;

	cout << "Setting Crossover and Mutation: " << endl;
	cout << "------------------------------- " << endl;
	mynode.setCrossoverPoint( 15 );
	mynode.setMutationRate( 12 );
	
/*	cout << "Fitness:    "	<< mynode.getFitness() << endl;
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

	/* * * * * * * * * * * * * * * * * * * * *
   *          Mutation Rate Test           *
   * * * * * * * * * * * * * * * * * * * * */
	/*
	int TEST_SAMPLE = 1000;
	int mutate_counter = 0;
	string previous;
	
	for (int i = 0; i < TEST_SAMPLE; i++){
		
		previous = mynode.getChromosome();
		mynode.mutate();
	
		if (mynode.getChromosome() != previous)
			mutate_counter++;

	}

	cout << "There was a mutation rate of " << mynode.getMutationRate() << "%." << endl;
	
	cout << "There were " << mutate_counter << " mutations out of ";
	cout << TEST_SAMPLE << " trials." << endl;
	**********************************************/

	return 0;

}





/*
	string mystring = "011010100";
	cout << "mystring: " << mystring << endl;
	cout << "mystr len: " << mystring.length() << endl;

	char newstring[ mystring.length() + 1 ];

	for (int i = 0; i < mystring.length(); i++){
		newstring[i] = flip_bit( mystring[i] );
	}	
	newstring[ mystring.length() ] = '\0';

	string final_string(newstring);	
	cout << "Newstring: " << final_string << endl;
*/
