#include "node.h"

node::node( string chromosome ){

	_chromosome = chromosome;
	_chromosome_length = chromosome.length();
	_crossover_point	= 0;			// Default
	_mutation_rate    = 0;	// Default
	_fitness          = 0.000;	// Default

	srand(time(NULL));

}


void node::calculateFitness(){

	_fitness = 57.25;

}


float node::getFitness(){
	
	this->calculateFitness();
	return _fitness;

}


int node::getCrossoverPoint(){

	return _crossover_point;

}


int node::getChromosomeLength(){

	return _chromosome_length;
	
}


string node::getChromosome(){

	return _chromosome;

}


int node::getMutationRate(){

	return _mutation_rate;

}


void node::setCrossoverPoint( int cross_point ){

	_crossover_point = cross_point;

}


void node::setMutationRate(float rate){

	_mutation_rate = rate;

}


void node::mutate(){

	int length = this->getChromosomeLength();
	char new_chrom[ length + 1 ];

	for(int i = 0; i < length; i++){
		if (chance( this->getMutationRate() ))
			
			/* Flip the bit */
			new_chrom[i] = flip_bit( this->getChromosome()[i] );

		else
			
			/* Copy the bit */
			new_chrom[i] = this->getChromosome()[i];
	}
	
	new_chrom[ length ] = '\0';
	string new_chrom_str(new_chrom);

	_chromosome = new_chrom_str;

}

















