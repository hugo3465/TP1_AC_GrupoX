/* 
 * File:   materiais.h
 * Author: User
 *
 * Created on 11 de dezembro de 2022, 15:37
 */

#ifndef MATERIAIS_H
#define MATERIAIS_H

#ifdef __cplusplus
extern "C" {
#endif

//#define "materiais.c"

typedef struct {
	char codMatrial[5];
	char descricao[100];
	char unidade[3];
}Material;

typedef struct { // deve ester errado    VERIFICAR
	int quantidade;
	Material material;
}Material_Quantidade;

typedef struct {
	int contador;
	Material material[1]; //Vai precisar de memoria dinamica
}Materiais;


#ifdef __cplusplus
}
#endif

#endif /* MATERIAIS_H */

