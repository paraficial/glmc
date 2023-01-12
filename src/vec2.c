#include "../include/glmc/vec2.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <math.h>


t_vec2 *glmc_vec2_new(float x, float y) {
    t_vec2 *p_vec2 = calloc(1, sizeof(t_vec2));
    glmc_vec2_init(p_vec2, x, y);
    return p_vec2;
}

void glmc_vec2_init(t_vec2 *p_vec2, float x, float y) {
    p_vec2->x = x;
    p_vec2->y = y;
}

void glmc_vec2_init_random(t_vec2 *p_vec2, float lower, float upper) {
    p_vec2->x = ((rand() % 1000) / 1000.0) * (upper - lower) + lower;
    p_vec2->y = ((rand() % 1000) / 1000.0) * (upper - lower) + lower;
}

void glmc_vec2_init_vec2(t_vec2 *p_vec2_target, glmc_vec2 *p_vec2_source) {
    p_vec2_target->x = p_vec2_source->x;
    p_vec2_target->y = p_vec2_source->y;
}

void glmc_vec2_abs(t_vec2 *p_vec2, t_vec2 *p_vec2_target) {
    if (p_vec2->x < 0) {
        p_vec2_target->x = -p_vec2->x;
    }
    else {
        p_vec2_target->x = p_vec2->x;
    }
    if (p_vec2->y < 0) {
        p_vec2_target->y = -p_vec2->y;
    }
    else {
        p_vec2_target->y = p_vec2->y;
    }
}

void glmc_vec2_add(t_vec2 *p_vec2_a, t_vec2 *p_vec2_b, t_vec2 *p_vec2_target) {
    p_vec2_target->x = p_vec2_a->x + p_vec2_b->x;
    p_vec2_target->y = p_vec2_a->y + p_vec2_b->y;
}

void glmc_vec2_subtract(t_vec2 *p_vec2_a, t_vec2 *p_vec2_b, t_vec2 *p_vec2_target) {
    p_vec2_target->x = p_vec2_a->x - p_vec2_b->x;
    p_vec2_target->y = p_vec2_a->y - p_vec2_b->y;
}

void glmc_vec2_multiply(t_vec2 *p_vec2, float s, t_vec2 *p_vec2_target) {
    p_vec2_target->x = p_vec2->x * s;
    p_vec2_target->y = p_vec2->y * s;
}

void glmc_vec2_divide(t_vec2 *p_vec2, float s, t_vec2 *p_vec2_target) {
    p_vec2_target->x = p_vec2->x / s;
    p_vec2_target->y = p_vec2->y / s;
}

float glmc_vec2_norm(t_vec2 *p_vec2) {
    return sqrt(pow(p_vec2->x, 2) + pow(p_vec2->y, 2));
}

void glmc_vec2_print(t_vec2 *p_vec2) {
    printf("(%f, %f)\n", p_vec2->x, p_vec2->y);
}

void glmc_vec2_destroy(t_vec2 *p_vec2) {
    free(p_vec2->front);
}

