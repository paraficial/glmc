#include "../include/glmc/vec3.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


t_vec3 *glmc_vec3_new(float x, float y, float z) {
    t_vec3 *p_vec3 = calloc(1, sizeof(t_vec3));
    glmc_vec3_init(p_vec3, x, y, z);
    return p_vec3;
}


void glmc_vec3_init(t_vec3 *p_vec3, float x, float y, float z) {
    p_vec3->x = x;
    p_vec3->y = y;
    p_vec3->z = z;
}

void glmc_vec3_init_random(t_vec3 *p_vec3, float lower, float upper) {
    for (unsigned int i = 0; i < 3; i++)
        p_vec3->front[i] = ((rand() % 1000) / 1000.0) * (upper - lower) + lower;
}

void glmc_vec3_init_vec3(t_vec3 *p_vec3_target, glmc_vec3 *p_vec3_source) {
    for (unsigned int i = 0; i < 3; i++)
        p_vec3_target->front[i] = p_vec3_source->front[i];
}

void glmc_vec3_abs(t_vec3 *p_vec3, t_vec3 *p_vec3_target) {
    for (unsigned int i = 0; i < 3; i++) {
        if (p_vec3->front[i] < 0)
            p_vec3_target->front[i] = -p_vec3->front[i];
    }
}

void glmc_vec3_add(t_vec3 *p_vec3_a, t_vec3 *p_vec3_b, t_vec3 *p_vec3_target) {
    for (unsigned int i = 0; i < 3; i++)
        p_vec3_target->front[i] = p_vec3_a->front[i] + p_vec3_b->front[i];
}

void glmc_vec3_subtract(t_vec3 *p_vec3_a, t_vec3 *p_vec3_b, t_vec3 *p_vec3_target) {
    for (unsigned int i = 0; i < 3; i++)
        p_vec3_target->front[i] = p_vec3_a->front[i] - p_vec3_b->front[i];
}

void glmc_vec3_multiply(t_vec3 *p_vec3, float s, t_vec3 *p_vec3_target) {
    for (unsigned int i = 0; i < 3; i++)
        p_vec3_target->front[i] = p_vec3->front[i] * s;
}

void glmc_vec3_divide(t_vec3 *p_vec3, float s, t_vec3 *p_vec3_target) {
    for (unsigned int i = 0; i < 3; i++)
        p_vec3_target->front[i] = p_vec3->front[i] / s;
}

float glmc_vec3_norm(t_vec3 *p_vec3) {
    return sqrt(p_vec3->x * p_vec3->x + p_vec3->y * p_vec3->y + p_vec3->z * p_vec3->z);
}

void glmc_vec3_print(t_vec3 *p_vec3) {
    printf("(%f, %f, %f)\n", p_vec3->x, p_vec3->y, p_vec3->z);
}

