#ifndef BA63_H_
#define BA63_H_

#include "stdint.h"

void BA63_DeleteToEndline(void);						//��������� �� ����� ������
void BA63_SetCP(uint16_t cpCode);						//������ ������� ��������
void BA63_ClearVFD(void);										//��������� ������
void BA63_SetPos(uint8_t _pX, uint8_t _pY);	//������ ������� �������
void BA63_SendString(uint8_t *string);			//���� ������

#endif