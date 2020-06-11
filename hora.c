#include "hora_do_sistema.h"
#include <time.h>
#include <stdio.h>
int main(){
	time_t datah;
	/*datah variavel que recebe o retorno da funcao data_atual*/
	datah=data_atual();
	printf(datah);
	
}
