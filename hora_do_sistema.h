#include <time.h>
int data_atual(void){
	time_t data,t;
	t=time(NULL);
	//armazena a data atual na variavel data
	data=ctime(&t);
	return data;
}
