#ifndef __c1_Main_h__
#define __c1_Main_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c1_setSimStateSideEffectsInfo;
  int32_T c1_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c1_isStable;
  uint8_T c1_doSetSimStateSideEffects;
  uint8_T c1_is_active_c1_Main;
  uint8_T c1_is_c1_Main;
  uint8_T c1_tp_Desligado;
  uint8_T c1_tp_Direita;
  uint8_T c1_tp_Esquerda;
  ChartInfoStruct chartInfo;
} SFc1_MainInstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c1_Main_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c1_Main_get_check_sum(mxArray *plhs[]);
extern void c1_Main_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
