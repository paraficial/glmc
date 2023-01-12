#ifndef IVEC3_H
#define IVEC3_H

#include "vec3.h"


typedef union {
    struct {
        int x;
        int y;
        int z;
    };
    int front[3];
} t_ivec3;

typedef t_ivec3 glmc_ivec3;

t_ivec3 *glmc_ivec3_new(int x, int y, int z);
void glmc_ivec3_init(t_ivec3 *p_ivec3, int x, int y, int z);
void glmc_ivec3_init_ivec3(t_ivec3 *p_ivec3_target, glmc_ivec3 *p_ivec3_source);
void glmc_ivec3_abs(t_ivec3 *p_ivec3, t_ivec3 *p_ivec3_target);
void glmc_ivec3_add(t_ivec3 *p_ivec3_a, t_ivec3 *p_ivec3_b, t_ivec3 *p_ivec3_target);
void glmc_ivec3_subtract(t_ivec3 *p_ivec3_a, t_ivec3 *p_ivec3_b, t_ivec3 *p_ivec3_target);
void glmc_ivec3_multiply(t_ivec3 *p_ivec3_a, float s, t_vec3 *p_vec3_target);
void glmc_ivec3_divide(t_ivec3 *p_ivec3_a, float s, t_vec3 *p_vec3_target);
float glmc_ivec3_norm(t_ivec3 *p_ivec3);
void glmc_ivec3_print(t_ivec3 *p_ivec3);
void glmc_ivec3_destroy(t_ivec3 *p_ivec3);

#endif // IVEC3_H

