 printf("Welcome to Isquaia!\n");
    printf("What would you like to do?\n");
    const char* options[] = {"Go to the Sirens headquarters", "Go to the Rocks", "Go to Hightowers", "Go to the dungeon"};
    for(int i = 0; i < sizeof(options); i++){
        printf("%s\n", options[i]);
    }