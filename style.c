/**
 * style.c
 * 
 * A module that manipulates matrices, for dimensions 3 by 3, by multiplying them and prints them
 * @author Lilya Benladjreb
*/
#include <stdio.h>

#define DIMENSION 3

typedef struct {
    double values[DIMENSION][DIMENSION];
}matrix3x3;

/**
 * Multiplies two matrix of 3x3
 * @param m1 matrix
 * @param m2 matrix
 * @param m3 matrix
*/

void multiplyMatrices(matrix3x3 *m1, matrix3x3 *m2, matrix3x3 *m) {
    for (unsigned int i = 0 ; i < DIMENSION ; i++ ) {
        for (int j = 0 ; j < DIMENSION ; j++ ) {
            m -> values[i][j] = 0.0;
           for (int k = 0 ; k < DIMENSION ; k++ ) {
                m -> values[i][j] = m -> values[i][j] + m1 -> values[i][k] * m2 -> values[k][j];
           }
        }
    }
}

/**
 * Prints a matrix 3x3 with stdout
 * @param m 
*/

void printMatrix(const matrix3x3 *m) {
	printf("[ %lf %lf %lf ]\n", m -> values[0][0], m -> values[0][1], m -> values[0][2]);
	printf("[ %lf %lf %lf ]\n", m -> values[1][0], m -> values[1][1], m -> values[1][2]);
    printf("[ %lf %lf %lf ]\n", m -> values[2][0], m -> values[2][1], m -> values[2][2]);
}

/**
 * Main 
*/

int main(void) {
    matrix3x3 m1 = {.values = { 1.0, 2.0, 0.0, -1.0, 0.0, 1.0, 0.0, 2.0, 1.0}};
	matrix3x3 m2 = {.values = { 0.0, 1.0,-1.0, 1.0, 2.0, 0.0, 2.0,-1.0, 0.0}};
	matrix3x3 m;
    printMatrix(&m1); 
    printf("\n");
    printMatrix(&m2); 
    printf("\n");
    multiplyMatrices(&m1, &m2, &m);
    printMatrix(&m);
    return 0;
}
