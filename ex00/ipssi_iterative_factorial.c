int ipssi_iterative_factorial(int nb){
	if (nb < 0)
{	return 0;
}
	int facto = 1;
	int i = 1;
	while (i <= nb){
	facto *=i;
	i++;
}
	return facto;
}
