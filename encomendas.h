/* 
 * File:   encomendas.h
 * Author: User
 *
 * Created on 8 de dezembro de 2022, 14:48
 */

#ifndef ENCOMENDAS_H
#define ENCOMENDAS_H

#ifdef __cplusplus
extern "C" {
#endif

//#include "encomendas.c"

typedef struct {
	char codEncomenda[5];
	float preco;
	Cliente cliente;
	Produto Produtos[1]; //Vai precisar de memoria dinamica
	Data dataRequerimento; //Esta campo indica o dia em que foi requesiada a encomenda
	Data dataEntrega;
}Encomenda;

typedef struct {
	int contador;
	Encomenda encomenda[1]; //Vai precisar de memoria dinamica
}Encomendas;


#ifdef __cplusplus
}
#endif

#endif /* ENCOMENDAS_H */

