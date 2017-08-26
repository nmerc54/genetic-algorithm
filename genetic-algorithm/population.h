class population{
private:
	node* node_array;			/* Population of Chromosomes */
	float mutation_rate;
	int population_size;

public:
	population( int popSize );

	void getMutationRate();
	void getPopulationSize();
	
	/*	Returns n sets of parents in node arrays 
			based on fitness. 	*/
	node** selectParents( int sets_of_parents );
	
	/*	Create the new generation of nodes from
		 	the parent sets. Returns set of children
		 	nodes */
	node** newGeneration( node** parent_sets );

	/*	Insert the newly created children sets into
			the population (node_array). */
	void insertNewGen( node** children_sets );
	
	/*	This function selects parents, creates children,
			runs mutations, and inserts children into new 
			generation 				*/
	void nextGeneration( int sets_of_parents );

};
