/*
 * FileName : AES.h
 * 
 */
#ifndef __AES_H__
#define __AES_H__

#include <stdio.h>
typedef enum  { MODE_OFB = 1, MODE_CFB, MODE_CBC, MODE_ECB }AESMode_t;
//AESMode_t	  m_mode;

extern void print(unsigned char* state, int len);
void AES_AddRoundKey(unsigned char state[][4], unsigned char k[][4]);
void AES_KeyExpansion(unsigned char* key, unsigned char w[][4][4]);
void AES_InvSubBytes(unsigned char state[][4]);
void AES_SetKey(unsigned char *key);
void AES_InvShiftRows(unsigned char state[][4]);
void AES_InvMixColumns(unsigned char state[][4]);
unsigned char AES_FFmul(unsigned char a, unsigned char b);
void AES_MixColumns(unsigned char state[][4]);
void AES_SubBytes(unsigned char state[][4]);
void AES_ShiftRows(unsigned char state[][4]);
unsigned char* AES_Cipher(unsigned char* input, unsigned char* output);
unsigned char* AES_InvCipher(unsigned char* input, unsigned char* output);
void AESModeOfOperation_set_mode(AESMode_t _mode);
void AESModeOfOperation_set_key (unsigned char *key);
void AESModeOfOperation_set_iv(unsigned char *iv);
int  AESModeOfOperation_Encrypt(unsigned char *input, int length, unsigned char *output);
int  AESModeOfOperation_Decrypt(unsigned char *input, int length, unsigned char *output);

void AESModeOfOperation();	

#endif 
