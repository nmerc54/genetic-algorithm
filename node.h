class node{
private:
	string _chromosome;
	int    _chromosome_length;
	int    _crossover_point;
	float  _fitness;
	int    _mutation_rate;

public:
	node( string chromosome );

	float getFitness();
	int getMutationRate();
	int getCrossoverPoint();
	int getChromosomeLength();
	string getChromosome();
	
	void setCrossoverPoint(int );
	void setMutationRate( float );
	void calculateFitness();
	
	/*	Based on the mutation rate, this function will
			mutate parts of the chromosome. There is a 
			statistical component to this function, so it
			is possible that no mutations occur. */
	void mutate();

};
