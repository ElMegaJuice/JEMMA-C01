#include <stdio.h>
int ipssi_iterative_factorial(int nb){
	int facto = 1;
	int i = 1;
	while (i <= nb){
	facto *=i;
	i++;
}
return facto;
}

int main(){

printf("%d",ipssi_iterative_factorial(5));
}
