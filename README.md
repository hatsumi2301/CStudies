# Estudos da linguagem C

Estou usando como guia de estudos o livro "C completo e total". Terceira edição. Herbert Schildt.

## **Capítulo 01**
### Printf

O printf imprime textos na tela.

**Exemplo:**

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| ```Saida()```| Imprime o texto "Olá mundo!" | - | 

### Scanf

O scanf obtém dados digitados pelo teclado.

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| ```EntradaNumero()```| Obtém um número digitado pelo teclado | - |
| ```EntradaTexto()```| Obtém um texto digitado pelo teclado | - |

## **Capítulo 02**
### Variáveis
Variável é um espaço na memória para guardar um determinado dado.

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| ```TiposDeVariaveis()```| Tipos de variáveis em C | - |

## **Capítulo 03**
### Loops
Loops são repetições de um determinado trecho do código que obedece uma determinada condição.

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| ```VerificarCaractereNaString()```| Obtém uma palavra e um caractere como dados de entrada, informados pelo usuário e verifica se a palavra contém o caractere informado | **Esse método não está funcionado.** |
| ```VerificarCaractereNaString2(char *s, char c)```| Verifica se a palavra conté o caractere. Os dados devem ser passados como parâmetros | *Exemplo* ```VerificarCaractereNaString2("teste", "e")``` verifica se a palavra "teste" contém a letra "e" |
| ```LoopFor()```| Loop do tipo "for" | - |
| ```LoopWhile()```| Loop do tipo "while" | - |
| ```LoopDoWhile()```| Loop do tipo "do while" | - |
| ```DiferencaEntreLoopWhileAndDoWhile()```| Exemplo da diferença entre os loops "while" e "do while" | - |

## **Capítulo 04**
### Condicionais
Verifica se uma determinada condição é verdadeira ou falsa para executar o código dentro do contexto da mesma.
*if*
*else*
*else if*

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| ```Condicionais()```| Condicionais *if*, *else if* e *else* | Informar o número 1 para executar o comando do *if*, informar o número 2 para executar o comando do *else if* e informar qualquer outro número para executar o comando do *else* |