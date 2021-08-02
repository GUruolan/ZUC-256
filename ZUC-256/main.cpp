#include <iostream>
#include <stdlib.h>
#include <ctime>
//#include "referance.h"
#include "zuc-256.h"
using namespace std;

void main(){
	unsigned char init_k[32];		//��ʼ��Կ
	unsigned char init_iv[25];	//��ʼ����
	unsigned int keystream[2000];
	for(int i=0; i<32; ++i)
		init_k[i] = 0xff;
	for(int i=0; i<=16; ++i)
		init_iv[i] = 0xff;
	for(int i=17; i<=24; ++i)
		init_iv[i] = 0x3f;

	Initialization(init_k, init_iv);	//��ʼ��
	cout << GenerateKeystream(keystream);	//��Կ������
	/*
	for(int i=0; i<32; ++i)
		cout<<hex << int(init_k[i]) <<" ";
	for(int i=0; i<24; ++i)
		cout<<hex << int(init_iv[i]) <<" ";*/

	/*for(int i=0; i<2000; ++i)
		cout<<hex << keystream[i] <<" ";	//�����Կ��

	time_t start = time(NULL);
	while(time(NULL) - start < 10)
		cout<< time(NULL);*/
	system("pause");

}
