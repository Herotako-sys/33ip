#include "header.h"

void binarizeImage(unsigned char image[HEIGHT][WIDTH][3], int threshold) {
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            // �ΐF(G)������臒l�𒴂��Ă��邩�`�F�b�N
            if (image[y][x][1] > threshold) {
                // �s�N�Z���𔒂ɐݒ�
                image[y][x][0] = 255;
                image[y][x][1] = 255;
                image[y][x][2] = 255;
            }
            else {
                // �s�N�Z�������ɐݒ�
                image[y][x][0] = 0;
                image[y][x][1] = 0;
                image[y][x][2] = 0;
            }
        }
    }
}
