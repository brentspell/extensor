/****************************************************************************
 *
 * MODULE:  init.cpp
 * PURPOSE: nif initialization and export
 *
 ***************************************************************************/
/*-------------------[       Pre Include Defines       ]-------------------*/
/*-------------------[      Library Include Files      ]-------------------*/
/*-------------------[      Project Include Files      ]-------------------*/
#include "extensor.hpp"
/*-------------------[      Macros/Constants/Types     ]-------------------*/
#define DECLARE_NIF(name)                                                  \
   extern ERL_NIF_TERM nif_##name (ErlNifEnv*, int, const ERL_NIF_TERM[])
#define EXPORT_NIF(name, args, ...)                                        \
   (ErlNifFunc){ #name, args, nif_##name, __VA_ARGS__ }
/*-------------------[        Global Variables         ]-------------------*/
/*-------------------[        Global Prototypes        ]-------------------*/
/*-------------------[        Module Variables         ]-------------------*/
/*-------------------[        Module Prototypes        ]-------------------*/
/*-------------------[         Implementation          ]-------------------*/
// nif function table
static ErlNifFunc nif_map[] = {
};
/*-----------< FUNCTION: nif_loaded >----------------------------------------
// Purpose:    nif onload callback
// Parameters: env       - erlang environment
//             priv_data - return private state via here
//             state     - nif load parameter
// Returns:    1 if successful
//             0 otherwise
---------------------------------------------------------------------------*/
static int nif_loaded (ErlNifEnv* env, void** priv_data, ERL_NIF_TERM state)
{
   *priv_data = NULL;
   return 0;
}
// nif entry point
ERL_NIF_INIT(
   Elixir.Extensor.NIF,
   nif_map,
   &nif_loaded,
   NULL,
   NULL,
   NULL);