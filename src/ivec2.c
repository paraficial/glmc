#include "../include/glmc/ivec2.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <math.h>


t_ivec2 *glmc_ivec2_new(int x, int y) {
    t_ivec2 *p_ivec2 = calloc(1, sizeof(t_ivec2));
    glmc_ivec2_init(p_ivec2, x, y);
    return p_ivec2;
}

void glmc_ivec2_init(t_ivec2 *p_ivec2, int x, int y) {
    p_ivec2->x = x;
    p_ivec2->y = y;
}

void glmc_ivec2_init_random(t_ivec2 *p_ivec2, float lower, float upper) {
    p_ivec2->x = ((rand() % 1000) / 1000.0) * (upper - lower) + lower;
    p_ivec2->y = ((rand() % 1000) / 1000.0) * (upper - lower) + lower;
}

void glmc_ivec2_init_ivec2(t_ivec2 *p_ivec2_target, glmc_ivec2 *p_ivec2_source) {
    p_ivec2_target->x = p_ivec2_source->x;
    p_ivec2_target->y = p_ivec2_source->y;
}

void glmc_ivec2_abs(t_ivec2 *p_ivec2, t_ivec2 *p_ivec2_target) {
    if (p_ivec2->x < 0) {
        p_ivec2_target->x = -p_ivec2->x;
    }
    else {
        p_ivec2_target->x = p_ivec2->x;
    }
    if (p_ivec2->y < 0) {
        p_ivec2_target->y = -p_ivec2->y;
    }
    else {
        p_ivec2_target->y = p_ivec2->y;
    }
}

void glmc_ivec2_add(t_ivec2 *p_ivec2_a, t_ivec2 *p_ivec2_b, t_ivec2 *p_ivec2_target) {
    p_ivec2_target->x = p_ivec2_a->x + p_ivec2_b->x;
    p_ivec2_target->y = p_ivec2_a->y + p_ivec2_b->y;
}

void glmc_ivec2_subtract(t_ivec2 *p_ivec2_a, t_ivec2 *p_ivec2_b, t_ivec2 *p_ivec2_target) {
    p_ivec2_target->x = p_ivec2_a->x - p_ivec2_b->x;
    p_ivec2_target->y = p_ivec2_a->y - p_ivec2_b->y;
}

void glmc_ivec2_multiply(t_ivec2 *p_ivec2, float s, t_vec2 *p_vec2_target) {
    p_vec2_target->x = (float) p_ivec2->x * s;
    p_vec2_target->y = (float) p_ivec2->y * s;
}

void glmc_ivec2_divide(t_ivec2 *p_ivec2, float s, t_vec2 *p_vec2_target) {
    p_vec2_target->x = (float) p_ivec2->x / s;
    p_vec2_target->y = (float) p_ivec2->y / s;
}

float glmc_ivec2_norm(t_ivec2 *p_ivec2) {
    return sqrt(pow(p_ivec2->x, 2) + pow(p_ivec2->y, 2));
}

void glmc_ivec2_print(t_ivec2 *p_ivec2) {
    printf("(%d, %d)\n", p_ivec2->x, p_ivec2->y);
}


