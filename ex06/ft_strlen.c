int		ft_strlen(char *str){
	int ref;
	ref = 0;

	while(*(str+ref)){
		ref++;
	}

	return ref;
}
