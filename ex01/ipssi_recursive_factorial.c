#include <stdio.h>
int ipssi_recursive_factorial(int nb){
	if (nb == 0){
	return 1;
}
	else if ( nb < 0){

return 0;
}
int facto = nb * ipssi_recursive_factorial(nb - 1);
return facto;
}
int main(){
	printf("%d",ipssi_recursive_factorial(5));
}
