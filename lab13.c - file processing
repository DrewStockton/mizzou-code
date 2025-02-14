#include <stdio.h>
#include "fight.h"
#include <string.h>

#define FILENAME "monster.csv"

int main(int argc, char * argv[])
{

	FILE * fm;
	fm = fopen(FILENAME,"r");
	//SetSeed(0);

	Combatant cg;
	Combatant ahote;
	Combatant temp;
	while (fscanf(fm, " %[^,], %d, %d, %d, %[^,], %s", temp.name, &temp.ac, &temp.hp, &temp.hitbonus, temp.attack1damage, temp.attack2damage) == 6 && !feof(fm)) 
	{
		if(strcmp(cg.name, "Cloud Giant") == 0)
		{
				break;
		}

    
	}

	while (fscanf(fm, " %[^,], %d, %d, %d, %[^,], %s", ahote.name, &ahote.ac, &ahote.hp, &ahote.hitbonus, ahote.attack1damage, ahote.attack2damage) == 6 && !feof(fm)) 
	{
		if(strcmp(cg.name, "Ahote") == 0)
		{
				break;
		}
		

    
	}
	Fight(cg, ahote);
	// *********************************************************************************

	fclose(fm);
}
