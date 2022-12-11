/* 
 * File:   cliente.h
 * Author: User
 *
 * Created on 8 de dezembro de 2022, 14:48
 */

#ifndef CLIENTE_H
#define CLIENTE_H

#ifdef __cplusplus
extern "C" {
#endif



//#define "clientes.c"

typedef struct {
	int codCliente;
	char nome[99];//tentar fazer dinamico no final
	char morada[155];
	int nif;
	char origem[100]; // country
	enum estado { DESATIVO = 0, ATIVO = 1 };
}Cliente;

typedef struct {
	int contador;
	Cliente cliente[1]; //Vai precisar de memoria dinamica
}Clientes;




#ifdef __cplusplus
}
#endif

#endif /* CLIENTE_H */

