
class node{
private:
	string _chromosome;
	int    _chromosome_length;
	int    _crossover_point;
	float  _fitness;
	float  _mutation_rate;

public:
	node( string chromosome );

	float getFitness();
	float getMutationRate();
	int getCrossoverPoint();
	int getChromosomeLength();
	string getChromosome();
	
	void setCrossoverPoint(int );
	void setMutationRate( float );
	void calculateFitness(float);
	
	/*	Based on the mutation rate, this function will
			mutate parts of the chromosome. There is a 
			statistical component to this function, so it
			is possible that no mutations occur. */
	void mutate();

};
