#include <stdio.h>
#include <conio.h>

#define SCREEN_WIDTH 40
#define SCREEN_HEIGHT 20
#define SQUARE_SIZE 3

void clearScreen() {
    for (int i = 0; i < 50; i++) {
        printf("\n");
    }
}
int main() {
    int squareX = (SCREEN_WIDTH - SQUARE_SIZE) / 2;
    int squareY = (SCREEN_HEIGHT - SQUARE_SIZE) / 2;

    char input;
    int quit = 0;
    while (!quit) {
        
        clearScreen();
        for (int y = 0; y < SCREEN_HEIGHT; y++) {
            for (int x = 0; x < SCREEN_WIDTH; x++) {
                if (x >= squareX && x < squareX + SQUARE_SIZE &&
                    y >= squareY && y < squareY + SQUARE_SIZE) {
                    if (x == squareX || x == squareX + SQUARE_SIZE - 1 ||
                        y == squareY || y == squareY + SQUARE_SIZE - 1) {
                        printf("#"); 
                    } else {
                        printf("#"); 
                    }
                } else {
                    printf("."); 
                }
            }
            printf("\n");
        }


        input = getch();
        switch(input) {
            case 'w':
                squareY--;
                break;
            case 'a':
                squareX--;
                break;
            case 's':
                squareY++;
                break;
            case 'd':
                squareX++;
                break;
            case 'q':
                quit = 1;
                break;
        }
    }

    return 0;
}
