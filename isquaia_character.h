typedef enum 
{
    Isquaian, Flameborn, Tideborn, Cloudborn, Rockborn, Ironborn, Crystalborn, Forestborn, Swampborn, Frostborn, Songborn, Stormborn, Smogborn, Dustborn, Steamborn, Lightborn, Shadowborn
} Race;

typedef enum {
    Male, Female
} Gender;

typedef struct 
{
    char name[25];
    int level;
    Race race;
    Gender gender;
} Character;