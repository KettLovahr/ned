#include <stdio.h>
#include <signal.h>

void interrupt_handler() {
    printf("?\n");
}

int main() {
    signal(SIGINT, interrupt_handler);
    while (1) {
        if (fgetc(stdin) == '\n') {
            printf("?\n");
        }
    }
}
