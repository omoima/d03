#include <unistd.h>

void	ft_void_mod(int a, int b, int *div, int *mod){
	*div = a/b;
	*mod = a%b;
}
