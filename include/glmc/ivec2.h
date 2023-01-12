#ifndef IVEC2_H
#define IVEC2_H

#include "vec2.h"

typedef union {
    struct {
        int x;
        int y;
    };
    int front[2];
} t_ivec2;

typedef t_ivec2 glmc_ivec2;

t_ivec2 *glmc_ivec2_new(int x, int y);
void glmc_ivec2_init(t_ivec2 *p_ivec2, int x, int y);
void glmc_ivec2_init_ivec2(t_ivec2 *p_ivec2_target, glmc_ivec2 *p_ivec2_source);
void glmc_ivec2_abs(t_ivec2 *p_ivec2, t_ivec2 *p_ivec2_target);
void glmc_ivec2_add(t_ivec2 *p_ivec2_a, t_ivec2 *p_ivec2_b, t_ivec2 *p_ivec2_target);
void glmc_ivec2_subtract(t_ivec2 *p_ivec2_a, t_ivec2 *p_ivec2_b, t_ivec2 *p_ivec2_target);
void glmc_ivec2_multiply(t_ivec2 *p_ivec2_a, float s, t_vec2 *p_vec2_target);
void glmc_ivec2_divide(t_ivec2 *p_ivec2_a, float s, t_vec2 *p_vec2_target);
float glmc_ivec2_norm(t_ivec2 *p_ivec2);
void glmc_ivec2_print(t_ivec2 *p_ivec2);
void glmc_ivec2_destroy(t_ivec2 *p_ivec2);

#endif // IVEC2_H

