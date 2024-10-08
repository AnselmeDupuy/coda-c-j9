#ifndef __STRUCT_H__
#define __STRUCT_H__

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct s_char
{
	int strengh;
	int intelligence;
	int wisdom;
	int agility;
	int endurance;
};

typedef struct s_char character; 

void fill_struct(character *perso);

#endif