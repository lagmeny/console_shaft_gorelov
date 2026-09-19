#include "game.h"

int main(void) {
    char command_buf[SIZE_CMD];
    int counter = 0; // Счётчик
    bool is_running = true;

    printf("Hello th the dangeon!\n");
    print_map();

    // Главный цикл игры
    while (is_running) {
        printf("[%d] Enter command > ", counter);

        if (scanf("%15s", command_buf) != 1) {
            break;
        }

        // Обработка введенной команды
        handle_command(command_buf, &is_running);

        //Цикл отрисовки
        if (is_running) {
            counter++;
            print_map();
        }
    }

    return 0;
}