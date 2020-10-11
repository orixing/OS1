#ifndef FIXED_POINT_H
#define FIXED_POINT_H

typedef int real;
#define REAL_P 17
#define REAL_Q 14
#define REAL_F (1<<REAL_Q)

#define CONVERT_N_TO_FIXED_POINT(n)             (n*REAL_F)
#define CONVERT_X_TO_INTEGER_ROUND_ZERO(x)      (x/REAL_F)
#define CONVERT_X_TO_INTEGER_ROUND_NEAREST(x)   ((x>=0)?((x+REAL_F/2)/REAL_F):((x-REAL_F/2)/REAL_F))
#define ADD_X_AND_Y(x,y)                        (x+y)
#define SUBTRACT_Y_FROM_X(x,y)                  (x-y)
#define ADD_X_AND_N(x,n)                        (x+(n*REAL_F))
#define SUBTRACT_N_FROM_X(x,n)                  (x-(n*REAL_F))
#define MULTIPLY_X_BY_Y(x,y)                    (((int64_t) (x))*y/REAL_F)
#define MULTIPLY_X_BY_N(x,n)                    (x*n)
#define DIVIDE_X_BY_Y(x,y)                      (((int64_t) (x))*REAL_F/y)
#define DIVIDE_X_BY_N(x,n)                      (x/n)

#endif