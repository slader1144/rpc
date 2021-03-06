/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _000196458_H_RPCGEN
#define _000196458_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct vectores {
	int vector1[10];
	int vector2[10];
};
typedef struct vectores vectores;

#define PROGRAMA_PUNTO 0x20000001
#define VERSION_PUNTO 1

#if defined(__STDC__) || defined(__cplusplus)
#define p_Punto 1
extern  int * p_punto_1(vectores *, CLIENT *);
extern  int * p_punto_1_svc(vectores *, struct svc_req *);
#define rango_Medio 2
extern  double * rango_medio_1(vectores *, CLIENT *);
extern  double * rango_medio_1_svc(vectores *, struct svc_req *);
extern int programa_punto_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define p_Punto 1
extern  int * p_punto_1();
extern  int * p_punto_1_svc();
#define rango_Medio 2
extern  double * rango_medio_1();
extern  double * rango_medio_1_svc();
extern int programa_punto_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_vectores (XDR *, vectores*);

#else /* K&R C */
extern bool_t xdr_vectores ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_000196458_H_RPCGEN */
