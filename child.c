#include <stdio.h>
#include <unistd.h>
#include <string.h>

int strtoint(char* num){
	int  i, len;
	int result=0;
	len = strlen(num);
	for(i=0; i<len; i++){
		result = result * 10 + ( num[i] - '0' );
	}
	return result;
}


//duerme al proceso num segundos
void work( char *num ) {
	int i,N = strtoint(num);
	for (i = 0; i < N; i++ )
	{
		//printf("Se esta ejecutando******************\n");
		sleep(1);

	}
	return;
}

int main(int argv, char **argc ) {
	if ( argv != 2 ) return -1;
	else	work(argc[1]);
	return 0;
}
