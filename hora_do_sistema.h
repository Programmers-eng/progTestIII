#include <time.h>
int data_atual(void){
	time_t data,t;
	t=time(NULL);
	data=ctime(&t);
	return data;
}
