void 	ft_putchar(char c);

void 	ft_putstr(char *str){
	int ref;
	ref = 0;

	while (*(str+ref)){
		ft_putchar(*(str+ref));
		ref++;
	}
}
