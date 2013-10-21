#ifndef FFP__TABLES_H
#define FFP__TABLES_H

#include <ppapi/c/pp_var.h>
#include "np.h"

int                 tables_ref_var(struct PP_Var var);
int                 tables_unref_var(struct PP_Var var);

struct np_priv_s   *tables_pp_instance_to_np_priv(PP_Instance instance);
void                tables_add_pp_np_mapping(PP_Instance instance, struct np_priv_s *priv);

#endif // FFP__TABLES_H