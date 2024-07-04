#include "header.h"

int calculateOtsuThreshold(unsigned char image[HEIGHT][WIDTH][3]) {
    int histogram[256] = { 0 };
    int total = HEIGHT * WIDTH;
    float sum = 0;
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            unsigned char green = image[y][x][1]; // —ÎF¬•ª
            histogram[green]++;
            sum += green;
        }
    }

    float sumB = 0;
    int wB = 0;
    int wF = 0;
    float varMax = 0;
    int threshold = 0;

    for (int t = 0; t < 256; t++) {
        wB += histogram[t];
        if (wB == 0) continue;
        wF = total - wB;
        if (wF == 0) break;

        sumB += (float)(t * histogram[t]);
        float mB = sumB / wB;
        float mF = (sum - sumB) / wF;

        float varBetween = (float)wB * (float)wF * (mB - mF) * (mB - mF);
        if (varBetween > varMax) {
            varMax = varBetween;
            threshold = t;
        }
    }

    printf("Threshold: %d varMax: %f\n", threshold, varMax);

    return threshold;
}
