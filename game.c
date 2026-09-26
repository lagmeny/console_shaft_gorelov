#include "game.h"

static const Command commands[] = {
    { "north", "go to north."     },
    { "south", "go to south."     },
    { "east",  "go to east."      },
    { "west",  "go to west."      },
    { "look",  "look around."     },
    { "help",  "show this help."  },
    { "quit",  "quit game"        },
};
static const int COMMAND_COUNT = sizeof(commands) / sizeof(commands[0]);


// Функция вывода карты
void print_map(void) {
    printf("\n    Map of dangeon    \n");
    printf("#####################\n");
    printf("# . . . . # . . . . #\n");
    printf("# . @ . . # . . . . #\n");
    printf("# . . . . . . . . . #\n");
    printf("#####################\n");
    printf("\n");
}

void print_help(void) {
    for (int i = 0; i < COMMAND_COUNT; i++) {
        printf("%s - %s\n", commands[i].name, commands[i].desc);
    }
}

// Функция приёма команд
void handle_command(const char *cmd, bool *running) {
    if (strcmp(cmd, "north") == 0) {
        printf("You go to north.\n");
    } else if (strcmp(cmd, "south") == 0) {
        printf("You go to south.\n");
    } else if (strcmp(cmd, "east") == 0) {
        printf("You go to east.\n");
    } else if (strcmp(cmd, "west") == 0) {
        printf("You go to west.\n");
    } else if (strcmp(cmd, "look") == 0) {
        printf("You look around. nothing there\n");
    } else if (strcmp(cmd, "help") == 0) {
            print_help();
    } else if (strcmp(cmd, "quit") == 0) {
        printf("Quituing.\n");
        *running = false; // Завершение игры
    } else {
        printf("Unnown command\n");
    }
}