#include <iostream>
#include <stdlib.h>
#include <ctime>
//#include "referance.h"
#include "zuc-256.h"
using namespace std;

void main(){
	unsigned char init_k[32];		//初始密钥
	unsigned char init_iv[25];	//初始向量
	unsigned int keystream[2000];
	for(int i=0; i<32; ++i)
		init_k[i] = 0xff;
	for(int i=0; i<=16; ++i)
		init_iv[i] = 0xff;
	for(int i=17; i<=24; ++i)
		init_iv[i] = 0x3f;

	Initialization(init_k, init_iv);	//初始化
	cout << GenerateKeystream(keystream);	//密钥流生成
	/*
	for(int i=0; i<32; ++i)
		cout<<hex << int(init_k[i]) <<" ";
	for(int i=0; i<24; ++i)
		cout<<hex << int(init_iv[i]) <<" ";*/

	/*for(int i=0; i<2000; ++i)
		cout<<hex << keystream[i] <<" ";	//输出密钥流

	time_t start = time(NULL);
	while(time(NULL) - start < 10)
		cout<< time(NULL);*/
	system("pause");

}
