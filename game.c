#include "game.h"

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
    } else if (strcmp(cmd, "quit") == 0) {
        printf("Quituing.\n");
        *running = false; // Завершение игры
    } else {
        printf("Unnown command\n");
    }
}
