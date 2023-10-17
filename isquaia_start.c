#include <stdio.h>
#include <string.h>

typedef enum {
    Male, Female
} Gender;

typedef struct 
{
    char name[25];
    int level;
    Gender gender;
} Character;

Character constructCharacter(char *name, int level, Gender gender)
{
    Character character;
    character.level = level;
    character.gender = gender;
    strcpy(character.name, name);
    return character;
}

typedef enum 
{
    Isquaian, Flameborn, Tideborn, Cloudborn, Rockborn, Ironborn, Crystalborn, Forestborn, Swampborn, Frostborn, Songborn, Stormborn, Smogborn, Dustborn, Steamborn, Lightborn, Shadowborn
} Race;

int main()
{
    printf("Welcome to Isquaia!\n");
    chooseName();
    chooseGender();
    chooseRace();
    Character character = constructCharacter(name, 12, gender);
    displayCharacter(character);
    startMapMovement(character);
}