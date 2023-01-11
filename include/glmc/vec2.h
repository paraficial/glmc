#ifndef VEC2_H
#define VEC2_H


typedef union {
    struct {
        float x;
        float y;
    };
    float front[2];
} t_vec2;

typedef t_vec2 glmc_vec2;

t_vec2 *glmc_vec2_new(float x, float y);
void glmc_vec2_init(t_vec2 *p_vec2, float x, float y);
void glmc_vec2_init_random(t_vec2 *p_vec2, float lower, float upper);
void glmc_vec2_init_vec2(t_vec2 *p_vec2_target, glmc_vec2 *p_vec2_source);
void glmc_vec2_abs(t_vec2 *p_vec2, t_vec2 *p_vec2_target);
void glmc_vec2_add(t_vec2 *p_vec2_a, t_vec2 *p_vec2_b, t_vec2 *p_vec2_target);
void glmc_vec2_subtract(t_vec2 *p_vec2_a, t_vec2 *p_vec2_b, t_vec2 *p_vec2_target);
void glmc_vec2_multiply(t_vec2 *p_vec2_a, float s, t_vec2 *p_vec2_target);
void glmc_vec2_divide(t_vec2 *p_vec2_a, float s, t_vec2 *p_vec2_target);
float glmc_vec2_norm(t_vec2 *p_vec2);
void glmc_vec2_print(t_vec2 *p_vec2);

#endif // VEC2_H
