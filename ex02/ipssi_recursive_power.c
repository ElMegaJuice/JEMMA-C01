#include <stdio.h>
int ipssi_recursive_power(int nb, int power){
	if ( nb == 0 && power == 0){
	return 1;
}
	return nb * ipssi_recursive_power(nb, power - 1);
}
int main(){
	printf("%d", ipssi_recursive_power(3,4));
}
