/*---------------------------------------------------------------------------------------------------------------------------------------------------------------
	Título: Exercícios sobre passagem de parâmetros e recursividade

	Autor: Edgar Hideo Tamasiro
	Data: janeiro de 2022
	Versão: 1.0
	
---------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <string.h>

/* Constantes */
/*const*/
/*#define*/

/* Macros */
/*#define*/

/* Declaração de variáveis globais */

/* Protótipo das funções secundárias */
int multiplicacaoDobro(int a, int b);
void quadradoCubo(int *a, int *b);
void downToZero(int n);
int strHowBig(const char *s);
void countOneToN(int start, int n);

/*-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* Início da função principal */
main()
{
	int x, y, z, w;
	char string[40] = "Edgar98765";
	printf("Digite o valor de x: ");
	scanf("%d", &x);
	printf("Digite o valor de y: ");
	scanf("%d", &y);
	printf("(2 * %d) * (2 * %d) = %d\n", x, y, multiplicacaoDobro(x,y));
	printf("-----------------------------------------------------------\n\n");
	quadradoCubo(&x, &y);
	printf("Quadrado de x: %d\n", x);
	printf("Cubo de y: %d\n", y);	
	printf("-----------------------------------------------------------\n\n");
	printf("%d\n", strHowBig(string));
	printf("-----------------------------------------------------------\n\n");
	printf("Digite um valor para testar a recursividade (1 a __) : ");
	scanf("%d", &w);
	if (w < 1) system("EXIT");
		else countOneToN(1, w);
	putchar('\n');
	printf("-----------------------------------------------------------\n\n");
	printf("Digite um valor para testar a recursividade (__ a 0): ");
	scanf("%d", &z);
	if (z < 0) system("EXIT");
		else downToZero(z);
	putchar('\n');
	printf("-----------------------------------------------------------\n\n");
	system("PAUSE");					/*pausa execução*/
	return 0;						/*retorna 0, se main() for executada*/
		
}
/* Fim da função principal */

/*-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* Desenvolvimento das funções secundárias */

/* --- Função para... --- */
int multiplicacaoDobro(int a, int b)
{
	a *= 2;
	b *= 2;
	return a * b;
}

void quadradoCubo(int *a, int *b)
{
	int temp_a = *a,
		temp_b = *b;
	
	*a = temp_a * temp_a;
	*b = temp_b * temp_b * temp_b;
}

void downToZero(int n)
{
	if (n < 0) return;				/* em funções do tipo void, as quais não retornam mada, pode-se usar return para sair */
	else
		{
			printf("%d ", n);
			downToZero(n - 1);				/* recursividade */		
		}
}

int strHowBig(const char *s)
{
	if (*s == '\0')
		return 0;
	else
		{
			printf(s);
			putchar('\n');
			return 1 + strHowBig (s + 1);
		}
}

void countOneToN(int start, int n)
{
	if (start > n)
		return;
	else
		{
			printf("%d ", start);
			countOneToN(start + 1,n);
		}
}
/*-------------------------------------------------------------------------------

                                                              
                                       _                      
                                      / \                     
                                     |oo >                    
                                     _\=/_                    
                    ___         #   /  _  \   #               
                   /<> \         \\//|/.\|\\//                
                 _|_____|_        \/  \_/  \/                 
                | | === | |          |\ /|                    
                |_|  0  |_|          \_ _/                    
                 ||  0  ||           | | |                    
                 ||__*__||           | | |                    
                |* \___/ *|          []|[]                    
                /=\ /=\ /=\          | | |                    
________________[_]_[_]_[_]_________/_]_[_\_______________________________
                                                              
MAY THE FORCE BE WITH YOU! :)
-------------------------------------------------------------------------------*/
/* Final do projeto */

/* Rascunho */

	/*fflush(stdin);*/		/* esta função limpa a buffer do teclado, semelhante ao 'espaço antes do %c' */
	/*scanf(" %c", &opcao);*/
	/*getchar();*/			/* esta função capta um caractere do teclado, semelhante ao scanf' */

	/*printf("Digite o primeiro numero: ");
	scanf("%d", &numero1);
	printf("\n");*/

