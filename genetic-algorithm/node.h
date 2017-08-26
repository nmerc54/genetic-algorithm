class node{
private:
	char*  chromosome;
	int    chromosome_length;
	int    crossover_point;
	float  ftness;
	float  mutation_rate;

public:
	node( char* chromosome );

	float getFitness();
	float getMutationRate();
	int getCrossoverPoint();
	int getChromosomeLength();
	char* getChromosome();
	
	void setCrossoverPoint(int cross_point);
	void setMutationRate( float mutRate );
	
	void calculateFitness();
	void calculateChromosomeLength();

	/*	Based on the mutation rate, this function will
			mutate parts of the chromosome. There is a 
			statistical component to this function, so it
			is possible that no mutations occur. */
	void mutate();

};
