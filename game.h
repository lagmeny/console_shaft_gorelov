#ifndef GAME_H
#define GAME_H

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define SIZE_CMD 16

typedef struct {
    const char *name;
    const char *desc;
} Command;

void print_help(void);
void print_map(void);
void handle_command(const char *cmd, bool *running);

#endif