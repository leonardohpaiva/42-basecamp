#include <unistd.h>

int main (char *str)
{
	char strLimpa[16];
	char resposta = [
        [0, 0, 0, 0],
        [0, 0, 0, 0],
        [0, 0, 0, 0],
        [0, 0, 0, 0],
    ];

	if (verifica_entrada(str) == 0)
	{
		write(1, "Entrada Inválida.", 17);
		return 0;
	}
	strLimpa = tira_espacos(str);
	algoritmo_incrivel(strLimpa, resposta);
}

char *tira_espacos(str)
{
	char retorno[16];
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != 32)
		{
			retorno[j] = str[i];
		}
		i++;
	}
	return retorno;
}

int verifica_entrada(char *str)
{
	// verifica se tem outra coisa que não sejam números
	// verifica se a entrada possui números menores que 1 ou maiores que 4
	// verifica se é resolvível
	// retorna 0 se a entrada é inválida e 1 se for válido
}

void algoritmo_incrivel(*strLimpa, **resposta)
{
	int i;

	// verifica se há vista == 4 (nesse caso preenche a fila com 1, 2, 3, 4)
	i = 0;
	while(i < 4)
	{
		if(strLimpa[i] == '4')
		{
			resposta[0][i] == '1';
			resposta[1][i] == '2';
			resposta[2][i] == '3';
			resposta[3][i] == '4';
		}
		i++;
	}
	while(i < 8)
	{
		if(strLimpa[i] == '4')
		{
			resposta[0][i - 4] == '4';
			resposta[1][i - 4] == '3';
			resposta[2][i - 4] == '2';
			resposta[3][i - 4] == '1';
		}
		i++;
	}
	while(i < 12)
	{
		if(strLimpa[i] == '4')
		{
			resposta[i][0] == '1';
			resposta[i][1] == '2';
			resposta[i][2] == '3';
			resposta[i][3] == '4';			
		}
	}
	while(i < 16)
	{
		if(strLimpa[i] == '4')
		{
			resposta[i - 4][0] == '1';
			resposta[i - 4][1] == '2';
			resposta[i - 4][2] == '3';
			resposta[i - 4][3] == '4';			
		}
	}		
	// verifica se há vista == 1 (nesse caso o primeiro prédio será tamanho 4)
	i = 0;
	while(i < 4)
	{
		if(strLimpa[i] == '1')
		{
			resposta[0][i] == '4';
		}
		i++;
	}
	while(i < 8)
	{
		if(strLimpa[i] == '1')
		{
			resposta[3][i - 4] == '4';
		}
		i++;
	}
	while(i < 12)
	{
		if(strLimpa[i] == '1')
		{
			resposta[i - 8][0] == '1';			
		}
	}
	while(i < 16)
	{
		if(strLimpa[i] == '1')
		{
			resposta[i - 12][4] == '1';			
		}
	}
}

int ocupado(**resposta)
{
	// verifica se a casa está ocupada. Retorno 0 se vazio e o tamanho do prédio se ocupado.
}

int fim(**resposta)
{
	// verifica se todas as casas foram preenchidas.
	// caso totalmente preenchido, retorna 1, o programa imprime e encerra.
	// caso não totalmente preenchido, retorna 0;
}

void imprime_resposta(**resposta)
{
	
}
