#include "struct.h"

int main()
{
	carac stats;

	stats.strengh = 18;
	stats.intelligence = 14;
	stats.wisdom = 15;
	stats.agility = 12;
	stats.endurance = 20;


	printf("Force: %d\n",stats.strengh);
	printf("Intel: %d\n",stats.intelligence);
	printf("Sagesse: %d\n",stats.wisdom);
	printf("Agilité: %d\n",stats.agility);
	printf("Vitalité: %d\n",stats.endurance);


	return 0;
}