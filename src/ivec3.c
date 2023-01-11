#include "../include/glmc/ivec3.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


t_ivec3 *glmc_ivec3_new(int x, int y, int z) {
    t_ivec3 *p_ivec3 = calloc(1, sizeof(t_ivec3));
    glmc_ivec3_init(p_ivec3, x, y, z);
    return p_ivec3;
}

void glmc_ivec3_init(t_ivec3 *p_ivec3, int x, int y, int z) {
    p_ivec3->x = x;
    p_ivec3->y = y;
    p_ivec3->z = z;
}

void glmc_ivec3_init_ivec3(t_ivec3 *p_ivec3_target, glmc_ivec3 *p_ivec3_source) {
    p_ivec3_target->x = p_ivec3_source->x;
    p_ivec3_target->y = p_ivec3_source->y;
    p_ivec3_target->z = p_ivec3_source->z;
}

void glmc_ivec3_abs(t_ivec3 *p_ivec3, t_ivec3 *p_ivec3_target) {
    if (p_ivec3->x < 0) {
        p_ivec3_target->x = -p_ivec3->x;
    }
    else {
        p_ivec3_target->x = p_ivec3->x;
    }
    if (p_ivec3->y < 0) {
        p_ivec3_target->y = -p_ivec3->y;
    }
    else {
        p_ivec3_target->y = p_ivec3->y;
    }
    if (p_ivec3->z < 0) {
        p_ivec3_target->z = -p_ivec3->z;
    }
    else {
        p_ivec3_target->z = p_ivec3->z;
    }
}

void glmc_ivec3_add(t_ivec3 *p_ivec3_a, t_ivec3 *p_ivec3_b, t_ivec3 *p_ivec3_target) {
    p_ivec3_target->x = p_ivec3_a->x + p_ivec3_b->x;
    p_ivec3_target->y = p_ivec3_a->y + p_ivec3_b->y;
    p_ivec3_target->z = p_ivec3_a->z + p_ivec3_b->z;
}

void glmc_ivec3_subtract(t_ivec3 *p_ivec3_a, t_ivec3 *p_ivec3_b, t_ivec3 *p_ivec3_target) {
    p_ivec3_target->x = p_ivec3_a->x - p_ivec3_b->x;
    p_ivec3_target->y = p_ivec3_a->y - p_ivec3_b->y;
    p_ivec3_target->z = p_ivec3_a->z - p_ivec3_b->z;
}

void glmc_ivec3_multiply(t_ivec3 *p_ivec3, float s, t_vec3 *p_vec3_target) {
    p_vec3_target->x = (float) p_ivec3->x * s;
    p_vec3_target->y = (float) p_ivec3->y * s;
    p_vec3_target->z = (float) p_ivec3->z * s;
}

void glmc_ivec3_divide(t_ivec3 *p_ivec3, float s, t_vec3 *p_vec3_target) {
    p_vec3_target->x = (float) p_ivec3->x / s;
    p_vec3_target->y = (float) p_ivec3->y / s;
    p_vec3_target->z = (float) p_ivec3->z / s;
}

float glmc_ivec3_norm(t_ivec3 *p_ivec3) {
    return sqrt(pow((float) p_ivec3->x, 2) + pow((float) p_ivec3->y, 2) + pow((float) p_ivec3->z, 2));
}

void glmc_ivec3_print(t_ivec3 *p_ivec3) {
    printf("(%d, %d, %d)\n", p_ivec3->x, p_ivec3->y, p_ivec3->z);
}

