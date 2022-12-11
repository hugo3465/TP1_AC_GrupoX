/* 
 * File:   produtos.h
 * Author: User
 *
 * Created on 8 de dezembro de 2022, 14:48
 */

#ifndef PRODUTOS_H
#define PRODUTOS_H

#ifdef __cplusplus
extern "C" {
#endif

//#define "produtos.c"

typedef struct {
	char codProduto[5];
	char nome[50];
	Dimensao dimensoes;
//	Material_quantidade material[1]; // Fazezr dinamico
	float preco;
}Produto;

typedef struct {
	int contador;
	Produto produto[1]; //Vai precisar de memoria dinamica
}Produtos;



#ifdef __cplusplus
}
#endif

#endif /* PRODUTOS_H */

