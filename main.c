#include "struct.h"

void fill_struct(character * perso)
{

	perso->strengh = 18;
	perso->intelligence = 14;
	perso->wisdom = 15;
	perso->agility = 12;
	perso->endurance = 20;
}

int main()
{

	character *perso = malloc(sizeof(*perso));  

	fill_struct(perso);

	printf("Force: %d\n",perso->strengh);
	printf("Intel: %d\n",perso->intelligence);
	printf("Sagesse: %d\n",perso->wisdom);
	printf("Agilité: %d\n",perso->agility);
	printf("Vitalité: %d\n",perso->endurance);

	free(perso);

	return 0;
}