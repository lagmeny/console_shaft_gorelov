#ifndef GAME_H
#define GAME_H

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define SIZE_CMD 16

void print_map(void);
void handle_command(const char *cmd, bool *running);

#endif