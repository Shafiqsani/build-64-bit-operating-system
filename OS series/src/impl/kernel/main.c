#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_RED, PRINT_COLOR_BLACK);
    print_str("   _____   ______   ______    _____    _____ \n  / ____| |  ____| |  ____|  / ____|  / ____|\n | (___   | |__    | |__    | |      | (___  \n  \\___ \\  |  __|   |  __|   | |       \\___ \\ \n  ____) | | |____  | |____  | |____   ____) |\n |_____/  |______| |______|  \\_____| |_____/ ");
}
