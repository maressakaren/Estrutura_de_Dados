#ifndef __elemento_h__
#define __elemento_h__


typedef int info_t;
typedef struct tnoh *noh;

noh criaNoh(info_t n);
void destroiNoh(noh no);
void modificaAnteriorNoh(noh no,noh no2);
noh pegaAnteriorNoh(noh no);
void modificaNohAnterior(noh no);
info_t pegaDisco(noh no);

#endif