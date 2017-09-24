# Estudos da linguagem C

Estou usando como guia de estudos o livro "C completo e total". Terceira edição. Herbert Schildt.

## **Capítulo 01**
### Printf
O printf imprime textos na tela.

**Exemplo:**

O método ```Saida()``` imprime o texto "Olá mundo!".


### Scanf
O scanf obtém dados digitados pelo teclado.

**Exemplos:**

O método ```EntradaNumero()``` obtém um número digitado pelo teclado.

O método ```EntradaTexto()``` obtém um texto digitado pelo teclado.

## **Capítulo 02**
### Variáveis
Variável é um espaço na memória para guardar um determinado dado.

**Exemplos:**

O método ```TiposDeVariaveis()``` os tipos de variáveis em C.

## **Capítulo 03**
### Loops
Loops são repetições de um determinado trecho do código que obedece uma determinada condição.

**Exemplos:**
O método ```VerificarCaractereNaString()``` obtém uma palavra e um caractere como dados de entrada, informados pelo usuário e verifica se a palavra contém o caractere informado. **Esse método não está funcionado.**

O método ```VerificarCaractereNaString2(char *s, char c)``` verifica se a palavra conté o caractere. Os dados devem ser passados como parâmetros.
*Exemplo*
```VerificarCaractereNaString2("teste", "e")``` verifica se a palavra "teste" contém a letra "e".

void ModificadoresDeVariaveis(){
    printf("Tipo                bits    Faixa mínima\n");
    printf("char                8       -127 a 127\n");
    printf("unsigned char       8       0 a 255\n");
    printf("signed char         8       -127 a 127\n");
    printf("int                 16      -32.767 a 32.767\n");
    printf("unsigned int        16      0 a 65.535\n");
    printf("signed int          16      0 a 65.535\n");
    printf("short int           16      0 a 65.535\n");
    printf("unsigned short int  16      0 a 65.535\n");
    printf("signed short int    16      0 a 65.535\n");
    printf("long int            32      -2.147.483.647 a 2.147.483.637\n");
    printf("signed long int     32      -2.147.483.647 a 2.147.483.637\n");
    printf("unsigned long int   32      0 a 4.294.967.295\n");
    printf("float               32      seis dígitos de precisão\n");
    printf("double              64      dez dígitos de precisão\n");
    printf("long dougle         80      dez dígitos de precisão\n");
}