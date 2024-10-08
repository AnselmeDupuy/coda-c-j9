#include "struct.h"

void fill_struct(character * perso)
{

	perso->strength = 18;
	perso->intelligence = 14;
	perso->wisdom = 15;
	perso->agility = 12;
	perso->endurance = 20;
}

int main()
{

	character *perso = malloc(sizeof(*perso)); 
	perso->name = malloc(strlen("Gandalf") * sizeof(char));  
    perso->name = strcpy(perso->name, "Gandalf");  

	fill_struct(perso);

	printf("%s\n", perso->name);
	printf("Force: %d\n",perso->strength);
	printf("Intel: %d\n",perso->intelligence);
	printf("Sagesse: %d\n",perso->wisdom);
	printf("Agilité: %d\n",perso->agility);
	printf("Vitalité: %d\n",perso->endurance);

	free(perso);
	free(perso->name);

	return 0;
}