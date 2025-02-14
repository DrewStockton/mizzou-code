#include <stdio.h>
#include "dnd.h"

float ArrayAverage(int x, float y);
const char * ClassFromNumber(int classNumber);
const char * AttributeFromNumber(int attributeNumber);

void Print2DIntArrayWithAverages(int array[][ATTRIBUTECOUNT], int rows)
{
	float sum = 0;
	// TODO: You must implement this function
    for (int i = 0; i < rows; i++)
	 {
		printf("Row %d: \t", i);
        for (int j = 0; j < ATTRIBUTECOUNT; j++) 
		{
			printf("%d\t", array[i][j]); // sorting through rows and colums
			sum = sum + array[i][j];
        }
		printf("Average: %2.2f ", ArrayAverage(sum, ATTRIBUTECOUNT));
		sum = 0;
        printf("\n");

		
    }
	printf("Col AVG: ");
	float colSum = 0;
		for (int r=0; r<=rows; r++) // sum of whole column and then dividing by size
		{
			for (int c=0; c<ATTRIBUTECOUNT-1; c++)
			{
				colSum += array[c][r];
			}
			printf(" %.2f ", colSum / rows);
			colSum = 0;
		}
}

void Print1DIntArrayWithWords(int array[], int count)
{
	for (int a = 0; a<count; a++)
	{
		printf("%s - %s \n", ClassFromNumber(array[a] ), AttributeFromNumber(array[a])); //printing from attribute array to corresponding character


	}
}

#ifdef HONORS
void PrintBestClassForChar( int partyArray[][ATTRIBUTECOUNT], int rows, 
                            int attributeArray[], int count)
{
	// TODO: You must implement this function if you are in the honors section
}
#endif


float ArrayAverage(int x, float y)
{
	return x / y;
}

const char * ClassFromNumber(int classNumber)
{
	if (classNumber == 0)
	{
		return "Fighter" ;
	}
	if (classNumber == 1)
	{
		return "Wizard" ;
	}

	if (classNumber == 2)
	{
		return "Cleric" ;
	}
	if (classNumber == 4)
	{
		return "Rogue" ;
	}
	if (classNumber == 5)
	{
		return "Sorcerer" ;
	}
	return 0;
}

const char * AttributeFromNumber(int AttributeNumber)
{
	if (AttributeNumber == 0)
	{
		return "Strength" ;
	}
	if (AttributeNumber == 1)
	{
		return "Intelligence" ;
	}

	if (AttributeNumber == 2)
	{
		return "Wisdom" ;
	}
	if (AttributeNumber == 4)
	{
		return "Dexterity" ;
	}
	if (AttributeNumber == 5)
	{
		return "Charisma" ;
	}
	return 0;
}
