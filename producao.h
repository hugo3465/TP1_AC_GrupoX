/* 
 * File:   producao.h
 * Author: User
 *
 * Created on 8 de dezembro de 2022, 14:48
 */

#ifndef PRODUCAO_H
#define PRODUCAO_H

#ifdef __cplusplus
extern "C" {
#endif

//#define "producao.c"

typedef struct { // e preciso id produ??o? e o que e o nome?
	char nome[50]; //tentar fazer dinamico no final
	Material_Quantidade material[1]; // aqui engloba o material em si, como a sua quantidade // Fazezr dinamico
}Producao;

typedef struct {
	int contador;
	Producao producao[1]; //Vai precisar de memoria dinamica
}Producoes;



#ifdef __cplusplus
}
#endif

#endif /* PRODUCAO_H */

