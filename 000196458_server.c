/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "000196458.h"

int *
p_punto_1_svc(vectores *argp, struct svc_req *rqstp)
{
	static int  result;

	int i=0;
	int *vector11, *vector22;
	vector11= argp->vector1;
	vector22= argp->vector2;
	int total=0;
	for(i;i<=10;i++){
		int aux=0;
		aux= vector11[i]*vector22[i];
		total =+aux;
	
	}
	result = total;
	
	return &result;
}

double *
rango_medio_1_svc(vectores *argp, struct svc_req *rqstp)
{
	static double  result;

	/*
	 * insert server code here
	 */

	return &result;
}