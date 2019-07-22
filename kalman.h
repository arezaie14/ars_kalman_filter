#ifndef ARS_KALMAN
#define ARS_KALMAN

#include <math.h>
#include <stdlib.h>

void kalman(float mea_e, float est_e, float q);
float kalman_update(float mea);

#endif
