#include "node.h"

node::node( string chromosome ){

	_chromosome 				= chromosome;
	_chromosome_length 	= chromosome.length();
	_crossover_point 		= 0;			// Default
	_mutation_rate 			= 0.000;	// Default
	_fitness 						= 0.000;	// Default

	this->calculateFitness();

}


void node:calculateFitness(){

	_fitness = 57.25;

}


float node::getFitness(){

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


void setCrossoverPoint( int cross_point ){

	_crossover_point = cross_point;

}


void setMutationRate(float rate){

	_mutation_rate = rate;

}


void mutate(){

	true;

}
