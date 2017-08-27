/* * * * * * * * * * * * * * * * * * * * * * * * * *
 *                  Chance( int n )                *
 * ----------------------------------------------- *
 *   Returns true n % of the time. Must be seeded  *
 *   outside of the function.                      *
 * * * * * * * * * * * * * * * * * * * * * * * * * */
bool chance(int percent_yield){

	int random_number;

	random_number = rand() % 100;
	if (random_number <= percent_yield)
		return true;
	else
		return false;

}

char flip_bit( char bit ){
	if (bit == '0')
		return '1';

	else if (bit == '1')
		return '0';

	else
		return 'f';

}
