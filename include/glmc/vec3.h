#ifndef VEC3_H
#define VEC3_H


typedef union {
    struct {
        float x;
        float y;
        float z;
    };
    float front[3];
} t_vec3;

typedef t_vec3 glmc_vec3;

t_vec3 *glmc_vec3_new(float x, float y, float z);
void glmc_vec3_init(t_vec3 *p_vec3, float x, float y, float z);
void glmc_vec3_init_random(t_vec3 *p_vec3, float lower, float upper);
void glmc_vec3_init_vec3(t_vec3 *p_vec3_target, glmc_vec3 *p_vec3_source);
void glmc_vec3_abs(t_vec3 *p_vec3, t_vec3 *p_vec3_target);
void glmc_vec3_add(t_vec3 *p_vec3_a, t_vec3 *p_vec3_b, t_vec3 *p_vec3_target);
void glmc_vec3_subtract(t_vec3 *p_vec3_a, t_vec3 *p_vec3_b, t_vec3 *p_vec3_target);
void glmc_vec3_multiply(t_vec3 *p_vec3_a, float s, t_vec3 *p_vec3_target);
void glmc_vec3_divide(t_vec3 *p_vec3_a, float s, t_vec3 *p_vec3_target);
float glmc_vec3_norm(t_vec3 *p_vec3);
void glmc_vec3_print(t_vec3 *p_vec3);

#endif // VEC3_H
