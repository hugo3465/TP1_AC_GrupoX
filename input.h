/* 
 * File:   input.h
 * Author: User
 *
 * Created on 8 de dezembro de 2022, 14:45
 */

#ifndef INPUT_H
#define INPUT_H

#ifdef __cplusplus
extern "C" {
#endif

#include "input.c" // pode nao ser necessario no netbeans

void pause();

void limparBuffer();

int obterInt(int maxVal, int minVal, char *msg);

float obterFloat(float maxVal, float minVal, char *msg);

double obterDouble(double maxVal, double minVal, char *msg);

char obterChar(char *msg);

void obterString(char *string, int tamanho, char *msg);


#ifdef __cplusplus
}
#endif

#endif /* INPUT_H */

