#pragma once	

#include <stdio.h>
#include <stdlib.h>

#define WIDTH 640
#define HEIGHT 480
#define CHANNELS 3

// ���݂̉摜�Ɣw�i�摜�̍������v�Z����֐�
void subtractImages(unsigned char currentImage[HEIGHT][WIDTH][3], unsigned char backgroundImage[HEIGHT][WIDTH][3], unsigned char resultImage[HEIGHT][WIDTH][3]);

// �摜��ǂݍ��ފ֐�
void loadImage(unsigned char image[HEIGHT][WIDTH][3], const char* filename);

// �摜��ۑ�����֐�
void saveImage(unsigned char image[HEIGHT][WIDTH][3], const char* filename);

// �q�X�g�O�����𐶐�����֐�
void generateHistogram(const char* inputFile, const char* outputFile);

// ��l������֐�
void binarizeImage(unsigned char image[HEIGHT][WIDTH][3], int theshold);

// ��Â̓�l�����s���֐�
int calculateOtsuThreshold(unsigned char image[HEIGHT][WIDTH][3]);

void erode(unsigned char src[HEIGHT][WIDTH][CHANNELS], unsigned char dst[HEIGHT][WIDTH][CHANNELS]);

void dilate(unsigned char src[HEIGHT][WIDTH][CHANNELS], unsigned char dst[HEIGHT][WIDTH][CHANNELS]);

void opening(unsigned char image[HEIGHT][WIDTH][CHANNELS], int iterations);

void closing(unsigned char image[HEIGHT][WIDTH][CHANNELS], int iterations);

