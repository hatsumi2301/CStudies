# Estudos da linguagem C

Estou usando como guia de estudos o livro "C completo e total". Terceira edição. Herbert Schildt.

# [Capítulo 01](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo01)

## Printf

O printf imprime textos na tela.

Para utilizar a função ```printf```, é necessário importar a biblioteca ```<stdio.h>``` com  o comando ```#include <stdio.h>```.

### Utilização

Caso deseje imprimir valores de variáveis, é necessário utilizar especificadores de conversão.

| Valor | Exemplo |
| ----- | ---------------- |
| texto | ```printf("<texto>")``` |
| char | ```printf("%c", '<char>')``` |
| int | ```printf("%d", <int>)``` |
| float | ```printf("%f", <float>)``` |
| double | ```printf("%f", <double>)``` |
| pointer | ```printf("%p", <pointer>)``` |

Constantes de caracteres de barra invertida:

| Código | Significado |
| ------ | ---------------------------------- |
| \b | Retrocesso (BS) |
| \f | Alimentação de formulário (FF) |
| \n | Nova linha (LF) |
| \r | Retorno de carro (CR) |
| \t | Tabulação horizontal (HT) |
| \\" | Aspas duplas |
| \\' | Aspas simples |
| \0 | Nulo |
| \\\ | Barra invertida |
| \v | Tabulação vertical |
| \a | Alerta (beep) |
| \N | Constante octal (onde N é uma constante octal) |
| \xN | Constante hexadecimal (onde N é uma constante hexadecimal) |

### Exemplos de printf

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| [```void Saida(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo01/Saida.c) | Imprime o texto "Olá mundo!" | - | 

## Scanf

O scanf obtém dados digitados pelo teclado.

Para utilizar a função ```scanf```, é necessário importar a biblioteca ```<stdio.h>``` com  o comando ```#include <stdio.h>```.

### Utilização

Caso deseje colocar valores em variáveis, é necessário utilizar especificadores de conversão.

| Valor | Exemplo |
| ----- | ---------------- |
| char | ```scan("%c", &<char>)``` |
| int | ```scan("%d", &<int>)``` |
| float | ```scan("%f", &<float>)``` |
| double | ```scan("%f", &<double>)``` |

### Exemplos de scanf

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| [```void EntradaNumero(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo01/Entrada.c) | Obtém um número digitado pelo teclado | - |
| [```void EntradaTexto(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo01/Entrada.c) | Obtém um texto digitado pelo teclado | - |

# [Capítulo 02](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo02)

## Variáveis

Variável é um espaço na memória para guardar um determinado dado.

As variáveis locais devem ser declaradas no início do bloco em que elas são definidas.

Os nomes das variáveis devem ser únicos em cada contexto.

## Modificando os tipos básicos

| Modificador | Descrição |
| --- | --- |
| *signed* | Valores positivos e negativos |
| *unsigned* | Apenas valores positivos |
| *long* | Faixa de valor maior |
| *short* | Faixa de valor menor |

## Tipos de variáveis com seus modificadores

| Tipo | bits | Faixa mínima |
| ---- | ---- | ------------ |
| char | 8 | -127 a 127 |
| unsigned char | 8 | 0 a 255 |
| signed char | 8 | -127 a 127 |
| int | 16 | -32.767 a 32.767 |
| unsigned int | 16 | 0 a 65.535 |
| short int | 16 | -32,767 to 32,767 |
| unsigned short int | 16 | 0 a 65.535 |
| long int | 32 | -2.147.483.647 a 2.147.483.637 |
| unsigned long int | 32 | 0 a 4.294.967.295 |
| float | 32 | seis dígitos de precisão |
| double | 64 | dez dígitos de precisão |
| long dougle | 80 | dez dígitos de precisão |

### Exemplos de variáveis

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| [```void TiposDeVariaveis(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo02/Variaveis.c) | Tipos de variáveis em C | - |
| [```void NomeDaVariavel(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo02/Variaveis.c) | Esse método possui uma variável com o nome x | Os métodos ```NomeDaVariavel()```, ```NomeDaVariavelRepetido()``` e ```NomeDaVariavelRepetidoEmOutraClasse()``` possuem uma variável com nomes iguais. Os dois primeiros métodos estão na mesma classe e o último em uma classe separada. |
| [```void NomeDaVariavelRepetido(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo02/Variaveis.c) | Esse método possui uma variável com o nome x | Os métodos ```NomeDaVariavel()```, ```NomeDaVariavelRepetido()``` e ```NomeDaVariavelRepetidoEmOutraClasse()``` possuem uma variável com nomes iguais. Os dois primeiros métodos estão na mesma classe e o último em uma classe separada. |
| [```void NomeDaVariavelRepetidoEmOutraClasse(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo02/Variaveis2.c) | Esse método possui uma variável com o nome x | Os métodos ```NomeDaVariavel()```, ```NomeDaVariavelRepetido()``` e ```NomeDaVariavelRepetidoEmOutraClasse()``` possuem uma variável com nomes iguais. Os dois primeiros métodos estão na mesma classe e o último em uma classe separada.  |

# [Capítulo 03](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo03)

## Loops

Loops são repetições de um determinado trecho do código que obedece uma determinada condição.

**Tipos de loops:**

| Loop | Pseudocódigo | Explicação | Utilização |
| --- | --- | --- | --- |
| *for* | Enquanto (valor_inicial até a condição_final passo n) faça<br>Inicio<br>__Instruções<br>Fim | *valor_inicial* é uma instrução de atribuição do valor inicial do laço para a variável de controle<br>*condição_final* é a condição que controla o laço<br>*passo* é o incremento ou decremento do laço | for(valor_inicial; condição_final; valor_incremento_ou_decremento){ <br> __Instruções; <br> } |
| *while* | Iniciar a variável de controle<br>Enquanto (condição) faça<br>Início<br>__Instruções;<br> __Atualizar a variável de controle;<br> Fim;| *condição* é a condição que controla o laço | while(condição){ <br> __Instruções; <br> } |
| *do ... while* | Iniciar a variável de controle<br>Início<br>__Instruções;<br> __Atualizar a variável de controle;<br>Enquanto (condição) faça<br>Fim; | *condição* é a condição que controla o laço | do{ <br> __Instruções; <br> }while(condição) |

### Exemplos de loops

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| [```void VerificarCaractereNaString(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo03/Loops.c) | Obtém uma palavra e um caractere como dados de entrada, informados pelo usuário e verifica se a palavra contém o caractere informado | - |
| [```int VerificarCaractereNaString2(char *s, char c)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo03/Loops.c) | Verifica se a palavra contém a letra. Os dados devem ser passados como parâmetros. Retorna 1 se a palavra contém a letra e 0 se a palavra não contém a letra. | *Exemplo* ```VerificarCaractereNaString2("teste", "e")``` verifica se a palavra "teste" contém a letra "e" |
| [```void LoopFor(doiv)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo03/Loops.c) | Loop do tipo "for" | - |
| [```void LoopWhile(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo03/Loops.c) | Loop do tipo "while" | - |
| [```void LoopDoWhile(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo03/Loops.c) | Loop do tipo "do while" | - |
| [```void DiferencaEntreLoopWhileAndDoWhile(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo03/Loops.c) | Exemplo da diferença entre os loops "while" e "do while" | - |

# [Capítulo 04](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo04)

## Condicionais

Verifica se uma determinada condição é verdadeira ou falsa para executar o código dentro do contexto da mesma.

**Tipos de condicionais**

*if*

*else*

*else if*

### Exemplos de condicionais

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| [```void Condicionais(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo04/Condicionais.c) | Condicionais *if*, *else if* e *else* | Informar o número 1 para executar o comando do *if*, informar o número 2 para executar o comando do *else if* e informar qualquer outro número para executar o comando do *else* |

# [Capítulo 05](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo05)

## Variáveis globais

Variáveis globais são reconhecidas pelo contexto global do programa e podem ser utilizadas em qualquer parte do código. 
Elas também estão acessíveis durante toda a execução do programa. 

### Utilização

Basta declarar a variável fora de qualquer função.

### Exemplos de variáveis globais

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| [```void FuncaoQueUtilizaAsVariaveisGlobais(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo05/VariaveisGlobais.c) | Utiliza a variável x global que foi declarada na mesma classe que o método | - |
| [```void FuncaoQueUtilizaAsVariaveisGlobais2(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo05/VariaveisGlobais2.c) | Utiliza as variáveis x e y globais que foram declaradas em outra classe | - |
| [```void FuncaoQueUtilizaAsVariaveisGlobais3(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo05/VariaveisGlobais2.c) | Utiliza a variável y global que foi declarada em outra classe | - |

# [Capítulo 06](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo06)

## Modificadores de tipo de acesso

### const

O uso do const no parâmetro de entrada do método, faz com que o código da função não seja capaz de modificar o objeto apontado pelo parâmetro. Apenas um evento externo pode modificar uma variável do tipo const.

#### Exemplos de const

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| [```void VariavelDoTipoConst(const char *frase)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo06/ModificadoresDeVariaveis.c) | Troca os espaços da frase por "-" e imprime a frase com a modificação, ou apenas imprime a frase inteira | - |

### volatile

O modificador volatile é usado para informar ao compilador que o valor de uma variável pode ser alterado de uma maneira não explicitamente especificada pelo programa. Exemplo, um endereço de uma variável global pode ser passado para a rotina de relógio do sistema operacional e usado para guardar o tempo real do sistema.

#### Exemplos de volatile

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| [```void VariavelDoTipoVolatile()```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo06/ModificadoresDeVariaveis.c) | Esse método altera o valor da const por meio de um ponteiro | - |

# [Capítulo 07](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo07)

## Especificadores de tipo de classe de armazenamento

 ### extern
 
 C permite que módulos do programa sejam compilados separadamente e por conta disso é necessário que haja uma maneira de informar a todos os arquivos sobre as variáveis globais solicitadas pelo programa. Ao declarar a variável global em um determinado arquivo e utilizar ela em outro, será necessário usar o extern, para indicar que aquela é uma variável global. 

#### Exemplos de extern

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| [```void FuncaoQueUtilizaAsVariaveisGlobais2(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo05/VariaveisGlobais2.c) | Utiliza as variáveis x e y globais que foram declaradas em outra classe | Esse método está na classe do Capítulo 05 |
| [```void FuncaoQueUtilizaAsVariaveisGlobais3(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo05/VariaveisGlobais2.c) | Utiliza a variável y global que foi declarada em outra classe | Esse método está na classe do Capítulo 05 |

### static

Ao declarar uma variável como static, o compilador cria um armazenamento permanente para ela quase da mesma forma que cria um armazenamento para uma variável global. 

Com variáveis estáticas é possível preservar um valor entre as chamadas das funções. 

Poderiam ser utilizadas variáveis globais no lugar de variáveis estáticas, no entanto, haveriam outras preocupações. Toda vez que a função é usada, seria necessário lembrar-se de declarar a variável global (como extern) e garantir que ela não conflite com nenhuma outra variável global já declarada. 

Elas não são reconhecidas fora de sua função ou arquivo, mas mantém seus valores entre chamadas.
Uma variável global estática é apenas reconhecida no arquivo no qual a mesma foi declarada.

#### Exemplos de static

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| [```void IniciarSerie(int semente)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo07/VariaveisEstaticas.c) | Inicializa a variável estática global | - |
| [```int Serie(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo07/VariaveisEstaticas.c) | Utiliza a variável estática global para somar um valor à ela | - |
| [```int VariavelEstatica(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo07/VariaveisEstaticas.c) | O número vai ser inicializado com o valor 10 somente na primeira execução, pois a variável estática continua existindo após a função ser finalizada. A variável não é destruída e na segunda chamada dessa função, a variável já vai ter seu valor inicializado. | - |

### register

Os objetos são colocados nos registradores da CPU. Portanto, o acesso ao objeto é o mais rápido possível. 

São usadas onde são feitas muitas referências a uma mesma variável.

Só é possível aplicar o especificador register a variáveis locais e parâmetros formais (os parâmetros da função na sua declaração são chamados parâmetros formais. Na chamada da função os parâmetros são chamados parâmetros atuais/reais) de uma função.

As variáveis register podem ser armazenadas em um registrador da CPU e podem não ter endereços.

#### Exemplos de register

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| [```int EspecificadorRegister(register int m, register int e)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo07/Register.c) | Exemplo em um loop de um especificador register | - |

# [Capítulo 08](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo08)

## Operadores

*Atribuição* 

```nome_da_variavel = expressão```

### Conversão de tipos em atribuições

Situação em que variáveis de um tipo são misturadas com variáveis de outro tipo. 

*Regra de conversão*: valor do lado direito é convertido no tipo do lado esquerdo.

| Tipo do destino | Tipo da expressão | Possível informação perdida |
| --- | --- | --- |
| signed char | char | Se valor > 127, o destino é negativo |
| char | short int | Os 8 bits mais significativos |
| char | int | Os 8 bits mais significativos |
| char | long int | Os 24 bits mais significativos |
| int | long int | Os 16 bits mais significativos |
| int | float | A parte fracionária e possivelmente mais |
| float | double | Precisão, o resultado é arredondado |
| double | long double | Precisão, o resultado é arredondado |

#### Exemplos de tipos em atribuições

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| [```void ConversaoTiposDeValores(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo08/Operadores.c) | Conversão de tipos de valores | - |

### Atribuições múltiplas

C permite que você atribua o mesmo valor a muitas variáveis usando atribuições múltiplas em um único comando.

#### Exemplos de atribuições múltiplas

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| [```void AtribuicoesMultiplas(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo08/Operadores.c) | Atribuições múltiplas | - |

### Operadores aritméticos

| Operador | Ação | Observação |
| --- | --- | ---: |
| - | Subtração, também menos unário | - |
| + | Adição | - |
| * | Multiplicação | - |
| / | Divisão | - |
| % | Módulo da divisão (resto) | Não pode ser usado nos tipos em ponto flutuante |
| --x | Decremento | Subtrai 1 ao seu operando<br>```x = x - 1``` imediatamente e aplica na linha atual. |
| x-- | Decremento | Subtrai 1 ao seu operando<br>```x = x - 1```, mas aplica o resultado após a linha atual. |
| ++x | Incremento | Soma 1 ao seu operando<br>```x = x + 1``` imediatamente e aplica na linha atual.|
| x++ | Incremento | Soma 1 ao seu operando<br>```x = x + 1```, mas aplica o resultado após a linha atual.|

#### Exemplos de operadores aritméticos

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| [```void Subtracao(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo08/Operadores.c) | Subtrai 1 de 2 | - |
| [```void Adicao(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo08/Operadores.c) | Soma 2 e 1 | - |
| [```void Multiplicacao(void)```]() | Multiplica 2 e 1 | - |
| [```void Divisao(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo08/Operadores.c) | Divide 4 por 2 | - |
| [```void Modulo(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo08/Operadores.c) | Calcula o módulo de 5 por 2 e o módulo de 1 por 2 | - |
| [```void Incremento(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo08/Operadores.c) | Exemplo de incremento | - |
| [```void Decremento(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo08/Operadores.c) | Exemplo de decremento | - |

# [Capítulo 09](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo09)

## Operadores relacionais e lógicos

*Operador relacional* refere-se às relações que os valores podem ter uns com os outros.

| Operador | Ação |
| --- | --- |
| > | Maior que |
| >= | Maior que ou igual |
| < | Menor que |
| <= | Menor que ou igual |
| == | Igual |
| != | Diferente |

**Precedência relativa**

!

\>   >=  <   <=

==  !=

&&

||

*Operador lógico* refere-se às maneiras como essas relações podem ser conectadas.

| Operador | Ação |
| --- | --- |
| && | AND |
| <code>&#124;</code> | OR |
| ! | NOT |

Embora C não tenha um operador lógico OR exclusivo, é possível criar uma função que execute essa tarefa usando os outros operadores lógicos. 

Operadores lógicos e relacionais podem ser verdadeiros ou falsos.
Falso é igual a 0 e verdadeiro é qualquer valor diferente de 0.

| p | q | p AND q | p OR q | !p |
| --- | --- | --- | --- | --- |
| 0 | 0 | 0 | 0 | 1 |
| 0 | 1 | 0 | 1 | 1 |
| 1 | 1 | 1 | 1 | 0 |
| 1 | 0 | 0 | 1 | 0|

### Exemplos de operadores relacionais e lógicos

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| [```void MaiorQue(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo09/OperadoresLogicosRelacionais.c) | Exemplos de maior que | - |
| [```void MaiorQueOuIgual(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo09/OperadoresLogicosRelacionais.c) | Exemplos de maior que ou igual | - |
| [```void MenorQue(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo09/OperadoresLogicosRelacionais.c) | Exemplos de menor que | - |
| [```void MenorQueOuIgual(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo09/OperadoresLogicosRelacionais.c) | Exemplos de menor que ou igual | - |
| [```void Igual(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo09/OperadoresLogicosRelacionais.c) | Exemplos de igual | - |
| [```void Diferente(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo09/OperadoresLogicosRelacionais.c) | Exemplos de diferente | - |
| [```int xor(int a, int b)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo09/OperadoresLogicosRelacionais.c) | Método de ou excluviso | - |
| [```void PrintXor(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo09/OperadoresLogicosRelacionais.c) | Imprime o resultado de alguns valores utilizando o ou exclusivo | - |

# [Capítulo 10](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo10)

## Operador bit a bit

Testar, atribuir ou deslocar os bits efetivos em um byte ou uma palavra, que correspondem aos tipos de dados **char** e **int** e variantes do padrão. 

Operações bit não podem ser usadas em **float**, **double**, **long double**, **void** ou outros tipos mais complexos. 

Operações bit a bit encontram aplicações mais frequentemente em "drivers"de dispositivos - como em programas de modems, rotinas de arquivos em disco e rotinas de impressoras - porque as operações bit a bit mascaram certos bits, como o bit de paridade (confirma se o restante dos bits em um byte não se modificaram, é normalmente o bit mais significativo em cada byte).

São frequentemente usados em rotinas de criptografia. 

| Operador | Ação |
| --- | --- |
| & | AND |
| <code>&#124;</code> | OR |
| ^ | OR exclusivo (XOR) |
| ~ | Complemento de um |
| >> | Deslocamento à esquerda |
| << | Deslocamento à direita |

### Tabela verdade

| A | B | A & B | A <code>&#124;</code> B | A ^ B | ~A |
| --- | --- | --- | --- | --- | --- |
| 0 | 0 | 0 | 0 | 0 | 1 |
| 0 | 1 | 0 | 1 | 1 | 1 |
| 1 | 0 | 0 | 1 | 1 | 0 |
| 1 | 1 | 1 | 1 | 0 | 0 |

### Deslocamentos

*A direita* divide por 2
*A esquerda* multiplica por 2

| unsigned char x | cada execução da sentença | valor de x |
| --- | --- | --- |
| x = 7 | 00000111 | 7 |
| x = x << 1 | 00001110 | 14 |
| x = x << 3 | 01110000 | 112 |
| x = x << 2 | 11000000 | 448 |
| x = x >> 1 | 01100000 | 224 |
| x = x >> 1 | 00011000 | 112 | 

### Exemplos de operadores bit a bit

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| [```void And(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo10/OperadoresBitABit.c) | Exemplo do operador AND | - |
| [```void Or(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo10/OperadoresBitABit.c) | Exemplo do operador OR | - |
| [```void Xor(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo10/OperadoresBitABit.c) | Exemplo do operador XOR | - |
| [```void ComplementoDeUm(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo10/OperadoresBitABit.c) | Exemplo do operador complemento de um | - |
| [```void Deslocamentos(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo10/OperadoresBitABit.c) | Exemplo do operador deslocamento à direita e à esquerda | - |
| [```char Codificar(char)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo10/OperadoresBitABit.c) | Recebe um caractere e devolve o complemento de um desse caractere | - |

# [Capítulo 11](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo11)

## Operador ternário

*expressão1 ? expressão2 : expressão3*

Expressão1 é avaliada e se ela for verdadeira, expressão2 é avaliada e se torna o valor da expressão, senão, expressão3 é avaliada e se torna o valor da expressão.

### Utilização

```x = 10;```
```y = x > 9 ? 100 : 200;```

Esse código é equivalente a:

```x = 10;```
```ìf(x > 9) y = 100;```
```else y = 200;```

### Exemplos de operador ternário

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| [```void OperadorTernario(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo11/OperadorTernario.c) | Exemplo de operador ternário | - |
| [```void ExemploComIfElseOperadorTernario(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo11/OperadorTernario.c) | O mesmo exemplo do método acima, mas com if e else | - |

# [Capítulo 12](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo12)

## Operadores de ponteiros & e *

É um endereço na memória de uma variável. Uma *variável de ponteiro* é uma variável especialmente declarada para guardar um ponteiro para seu tipo especificado. 

*Funções*

* Fornecer uma maneira rápida de referenciar elementos de uma matriz.

* Permite que funções em C modifiquem seus parâmetros de chamada.

* Suportam listas encadeadas e outras estruturas dinâmicas de dados.

**&**

* Operador unário que devolve o endeço na memória de seu operando.

* Exemplo:

    * ```m = &count;```

    * m recebe o valor do endereço na memória da variável. Posição interna da variável no computador. 

**\***

* Operador unário que devolve o valor da variável localizada no endereço que o segue. 

* ```q = *m;```

### Utilização

```char *ch;``` 

ch é um ponteiro

```int x, *y, count;```

y é um ponteiro

### Exemplos de operadores de ponteiros

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| [```void OperadoresPonteiros(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo12/OperadoresPonteiros.c) | Exemplo de operadores de ponteiros | - |

# [Capítulo 13](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo13)

## Operador *sizeof*

Operador em tempo de compilação unário que retorna o tamanho, em bytes, da variável ou especificador de tipo, em parênteses, que ele precede.

### Exemplos de operadores sizeof

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| [```void GravarDisco(int rec[6], FILE *fp)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo13/OperadoresSizeof.c) | Escreve 6 inteiros em um arquivo em disco | - |

## Operador ponto e seta

Referenciam elementos individuais de estruturas e uniões. 

Ponto é usado quando se está referenciando a estrutura ou união real. Seta é usado quando um ponteiro para uma estrutura é usado.

### Exemplos de operadores ponto e seta

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| [```void OperadoresPontoSeta(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo13/OperadoresSizeof.c) | Atribui o valor 123.23 ao elemento **wage** da estrutura **emp** | - |

# [Capítulo 14](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo14)

## Parênteses e colchetes como operadores

Parênteses são operadores que aumentam a precedência das operações dentro deles.

Colchetes realizam a indexação de matrizes.

### Precedências

Todos os operadores, com exceção do ?, associam da esquerda para a direita.

Operadores unários (*, & e -) e ? associam da direita para a esquerda.

| Precedência | Operador | 
| --- | --- |
| Maior | () [] -> |
| | ! ~ ++ -- - (tipo) * & sizeof |
| | * / % |
| | + - |
| | << >> |
| | < <= > >= |
| | == != |
| | & | 
| | ^ |
| | ! |
| | && | 
| | <code>&#124; &#124;</code> |
| | ? |
| | = += -= *= /= |
| Menor | , |

### Exemplos de parênteses e colchetes

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| [```void Array(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo14/ColchetesParenteses.c) | Exemplo de um array (operação utilizando colchetes) | - |
| [```void Parenteses(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo14/ColchetesParenteses.c) | Exemplo de como os parenteses alteram a ordem de execução das operações | - |

# [Capítulo 15](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo15)

## Expressões

*Ordem de avaliação*: o padrão C ANSI não estipula que as subexpressões de uma expressão devam ser avaliadas em uma ordem especificada.

Por exemplo, ```x = f1() + f2();``` não garante que **f1()** vai ser executada antes de **f2()**.

### Conversão de tipos

O compilador C converte todos os operandos no tipo do maior operando, o que é denominado de *promoção de tipo*. 

SE um operando é **long double**
ENTÃO o segundo é convertido para **long double**

SE um operando é **double**
ENTÃO o segundo é convertido para **double**

SE um operando é **float**
ENTÃO o segundo é convertido para **float**

SE um operando é **unsigned long**
ENTÃO o segundo é convertido para **unsigned long**

SE um operando é **long**
ENTÃO o segundo é convertido para **long**

SE um operando é **unsigned int**
ENTÃO o segundo é convertido para **unsigned int**

**Caso especial**

SE um operando é **long** E o segundo é **unsigned int** E SE valor de **unsigned int** não pode ser representado por um **long**
ENTÃO os dois operandos são convertidos para **unsigned long**

### Casts

Forçar expressão a ser de determinado tipo.

```(tipo) expressão```

#### Exemplos de casts

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| [```void Cast(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo15/Casts.c) | Exemplo de uma divisão de um número inteiro sem utilizar o cast e utilizando o cast | - |

# [Capítulo 16](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo16)

# C Reduzido

```x = x + 10;``` pode ser escrito de uma maneira reduzida: ```x += 10;```

**+=** atribui a **x** o valor de **x** mais **10**.

Essas operações existem para todos os operadores binários em C.

```var = var operador expressão``` é equivalente a ```var operador = expressão```

## Exemplos de operações reduzidas

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| [```void SomaReduzida(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo16/CReduzido.c) | Exemplo de uma soma reduzida | - |
| [```void SubtracaoReduzida(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo16/CReduzido.c) | Exemplo de uma subtração reduzida | - |
| [```void MultiplicacaoReduzida(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo16/CReduzido.c) | Exemplo de uma multiplicação reduzida | - |
| [```void DivisaoReduzida(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo16/CReduzido.c) | Exemplo de uma divisão reduzida | - |
| [```void ModuloReduzido(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo16/CReduzido.c) | Exemplo de um módulo reduzido | - |
