#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void subtractImages(unsigned char currentImage[HEIGHT][WIDTH][3], unsigned char backgroundImage[HEIGHT][WIDTH][3], unsigned char resultImage[HEIGHT][WIDTH][3]) {
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            for (int c = 0; c < 3; c++) {
                // ���݂̉摜�Ɣw�i�摜�̍��̐�Βl���v�Z���Č��ʂɊi�[
                int diff = abs(currentImage[y][x][c] - backgroundImage[y][x][c]);
                resultImage[y][x][c] = (unsigned char)diff;
            }
        }
    }
}
