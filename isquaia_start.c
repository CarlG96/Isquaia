#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "isquaia_character.h"


void displayCharacter(Character *character){
    printf("This character's name is %s.\n", character->name);
    switch(character->race){
        case 0:
            printf("They are an Isquaian.\n");
            break;
        case 1:
            printf("They are a Flameborn.\n");
            break;
        case 2: 
            printf("They are a Tideborn.\n");
            break;
        case 3:
            printf("They are a Cloudborn.\n");
            break;
        case 4:
            printf("They are a Rockborn.\n");
            break;
        case 5:
            printf("They are an Ironborn.\n");
            break;
        case 6:
            printf("They are a Crystalborn.\n");
            break;
        case 7:
            printf("They are a Forestborn.\n");
            break;
        case 8:
            printf("They are a Swampborn.\n");
            break;
        case 9:
            printf("They are a Frostborn.\n");
            break;
        case 10: 
            printf("They are a Songborn.\n");
            break;
        case 11: 
            printf("They are a Stormborn.\n");
            break;
        case 12:
            printf("They are a Smogborn.\n");
            break;
        case 13:
            printf("They are a Dustborn.\n");
            break;
        case 14:
            printf("They are a Steamborn.\n");
            break;
        case 15:
            printf("They are a Lightborn.\n");
            break;
        case 16:
            printf("They are a Shadowborn.\n");
            break;
        default:
            printf("They are an abomination.\n");
    }
    switch(character->gender){
        case 0:
            printf("They are male.\n");
            break;
        case 1:
            printf("They are female.\n");
            break;
        default:
            printf("They are an abomination.\n");
    }
}

int main()
{
    // printf("Welcome to Isquaia!\n");
    // Character Beltzer;
    // Beltzer.level = 1;
    // strcpy(Beltzer.name, "Beltzer");
    // Beltzer.race = Flameborn;
    // Beltzer.gender = Male;
    // displayCharacter(&Beltzer);
    // Character Ma;
    // Ma.level = 1;
    // strcpy(Ma.name, "Ma");
    // Ma.race = Tideborn;
    // Ma.gender = Female;
    // displayCharacter(&Ma);
    // Character Hom;
    // Hom.level = 20;
    // strcpy(Hom.name, "Hom");
    // Hom.race = Isquaian;
    // Hom.gender = Male;
    // displayCharacter(&Hom);

    printf("Welcome to Isquaia!\n");
    printf("What would you like to do?\n");
    const char* options[] = {"1) Go to the Sirens headquarters\n", "2) Go to the Rocks\n", "3) Go to Hightowers\n", "4) Go to the dungeon\n"};
    int numOptions = sizeof(options) / sizeof(options[0]);
    for(int i = 0; i < numOptions; i++){
        printf("%s", options[i]);
    }
    char choice;
    scanf(" %c", &choice);
    
    if(choice == '1'){
        printf("Going to Siren's headquarters.\n");
    }
    else if(choice == '2'){
        printf("Going to the Rocks.\n");
    }
    else if(choice == '3'){
        printf("Goint to the Hightowers District.\n");
    }
    else if(choice == '4'){
        printf("Going to Lowtown.\n");
    }
    return 0;
}