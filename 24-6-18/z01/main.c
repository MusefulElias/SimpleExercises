#include <stdio.h>

int main(){
	int result = 0;
	int num = 10;
	int n = num / 8 + 1;
	switch(num % 8){
		case 0:do{ result++;
		case 7:result++;
		case 6:result++;
		case 5:result++;
		case 4:result++;
		case 3:result++;
		case 2:result++;
		case 1:result++;
		       }while(--n);
		default:break;
	}
	printf("%d", result);
}
