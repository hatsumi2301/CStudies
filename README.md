# Estudos da linguagem C

Estou usando como guia de estudos o livro "C completo e total". Terceira edição. Herbert Schildt.

# [Capítulo 01](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo01)

## Printf

O ```printf``` imprime textos na tela.

Para utilizar a função ```printf```, é necessário importar a biblioteca ```<stdio.h>``` com  o comando ```#include <stdio.h>```.

### Utilização

Caso deseje imprimir valores de variáveis, é necessário utilizar especificadores de conversão.

| Valor | Exemplo |
| --- | --- |
| texto | ```printf("<texto>")``` |
| char | ```printf("%c", '<char>')``` |
| int | ```printf("%d", <int>)``` |
| float | ```printf("%f", <float>)``` |
| double | ```printf("%f", <double>)``` |
| pointer | ```printf("%p", <pointer>)``` |
| long unsigned decimal integer | ```printf("%lu", <long_unsigned_decimal_integer>)``` |

Constantes de caracteres de barra invertida são utilizados para imprimir determinados elementos:

| Código | Significado |
| --- | --- |
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

| Método  | O que faz | 
| --- |:---:| 
| [```void Saida(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo01/Saida.c) | Imprime o texto "Olá mundo!" |

## Scanf

O ```scanf``` obtém dados digitados pelo teclado.

Para utilizar a função ```scanf```, é necessário importar a biblioteca ```<stdio.h>``` com  o comando ```#include <stdio.h>```.

### Utilização

Caso deseje colocar valores em variáveis, é necessário utilizar especificadores de conversão.

| Valor | Exemplo |
| --- | --- |
| char | ```scanf("%c", &<char>)``` |
| int | ```scanf("%d", &<int>)``` |
| float | ```scanf("%f", &<float>)``` |
| double | ```scanf("%f", &<double>)``` |

### Exemplos de scanf

| Método  | O que faz | 
| --- |:---:| 
| [```void EntradaNumero(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo01/Entrada.c) | Obtém um número digitado pelo teclado | 
| [```void EntradaTexto(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo01/Entrada.c) | Obtém um texto digitado pelo teclado | 

# [Capítulo 02](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo02)

## Variáveis

Variável é um espaço na memória para guardar um determinado dado.

As variáveis locais devem ser declaradas no início do bloco em que elas são definidas.

Os nomes das variáveis devem ser únicos em cada contexto. Um contexto pode ser uma função, um arquivo (caso a variável seja ```static``` veremos esse conceito mais para frente) ou até mesmo o programa inteiro (caso a variável seja do tipo global, também estudaremos mais adiante).

## Modificando os tipos básicos

| Modificador | Descrição |
| --- | --- |
| ```signed``` | Valores positivos e negativos |
| ```unsigned``` | Apenas valores positivos |
| ```long``` | Faixa de valor maior |
| ```short``` | Faixa de valor menor |

## Tipos de variáveis com seus modificadores

| Tipo | bits | Faixa mínima |
| --- | --- | --- |
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
| --- |:---:| ---:|
| [```void TiposDeVariaveis(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo02/Variaveis.c) | Tipos de variáveis em C | - |
| [```void NomeDaVariavel(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo02/Variaveis.c) | Esse método possui uma variável com o nome x | Os métodos ```NomeDaVariavel()```, ```NomeDaVariavelRepetido()``` e ```NomeDaVariavelRepetidoEmOutraClasse()``` possuem uma variável com nomes iguais. Os dois primeiros métodos estão na mesma classe e o último em uma classe separada. |
| [```void NomeDaVariavelRepetido(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo02/Variaveis.c) | Esse método possui uma variável com o nome x | Os métodos ```NomeDaVariavel()```, ```NomeDaVariavelRepetido()``` e ```NomeDaVariavelRepetidoEmOutraClasse()``` possuem uma variável com nomes iguais. Os dois primeiros métodos estão na mesma classe e o último em uma classe separada. |
| [```void NomeDaVariavelRepetidoEmOutraClasse(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo02/Variaveis2.c) | Esse método possui uma variável com o nome x | Os métodos ```NomeDaVariavel()```, ```NomeDaVariavelRepetido()``` e ```NomeDaVariavelRepetidoEmOutraClasse()``` possuem uma variável com nomes iguais. Os dois primeiros métodos estão na mesma classe e o último em uma classe separada.  |

# [Capítulo 03](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo03)

## Loops

Loops, também conhecidos como laços, são repetições de um determinado trecho do código que obedece uma determinada condição.

**Tipos de loops:**

| Loop | Pseudocódigo | Utilização |
| --- | --- | --- |
| ```for``` | Enquanto (valor_inicial até a condição_final passo n) faça<br>Inicio<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Instruções<br>Fim<br><br> *valor_inicial* é uma instrução de atribuição do valor inicial do laço para a variável de controle<br>*condição_final* é a condição que controla o laço<br>*passo* é o incremento ou decremento do laço| for(valor_inicial; condição_final; valor_incremento_ou_decremento){ <br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Instruções; <br> } |
| ```while``` | Iniciar a variável de controle<br>Enquanto (condição) faça<br>Início<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Instruções;<br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Atualizar a variável de controle;<br> Fim;<br><br>*condição* é a condição que controla o laço | while(condição){ <br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Instruções; <br> } |
| ```do ... while``` | Iniciar a variável de controle<br>Início<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Instruções;<br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Atualizar a variável de controle;<br>Enquanto (condição) faça<br>Fim;<br><br>*condição* é a condição que controla o laço | do{ <br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Instruções; <br> }while(condição) |

### Exemplos de loops

| Método  | O que faz | Observações |
| --- |:---:| ---:|
| [```void VerificarCaractereNaString(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo03/Loops.c) | Obtém uma palavra e um caractere como dados de entrada, informados pelo usuário e verifica se a palavra contém o caractere informado | - |
| [```int VerificarCaractereNaString2(char *s, char c)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo03/Loops.c) | Verifica se a palavra contém a letra. Os dados devem ser passados como parâmetros. Retorna 1 se a palavra contém a letra e 0 se a palavra não contém a letra. | *Exemplo* ```VerificarCaractereNaString2("teste", "e")``` verifica se a palavra "teste" contém a letra "e" |
| [```void LoopFor(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo03/Loops.c) | Loop do tipo ```for``` | - |
| [```void LoopWhile(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo03/Loops.c) | Loop do tipo ```while``` | - |
| [```void LoopDoWhile(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo03/Loops.c) | Loop do tipo ```do...while``` | - |
| [```void DiferencaEntreLoopWhileAndDoWhile(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo03/Loops.c) | Exemplo da diferença entre os loops ```while``` e ```do...while``` | - |

# [Capítulo 04](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo04)

## Condicionais

Verifica se uma determinada condição é verdadeira ou falsa para executar o código dentro do contexto da mesma.

**Tipos de condicionais**

```if```, ```else``` e ```else if```.

### Exemplos de condicionais

| Método  | O que faz | Observações |
| --- |:---:| ---:|
| [```void Condicionais(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo04/Condicionais.c) | Condicionais ```if```, ```else if``` e ```else``` | Informar o número 1 para executar o comando do *if*, informar o número 2 para executar o comando do ```else if``` e informar qualquer outro número para executar o comando do ```else``` |

# [Capítulo 05](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo05)

## Variáveis globais

Variáveis globais são reconhecidas pelo contexto global do programa e podem ser utilizadas em qualquer parte do código. Se a variável global for utilizada em outra classe do código, deve-se utilizar o ```extern``` para sinalizar que a variável é global. 
Elas estão acessíveis durante toda a execução do programa. 

### Utilização

Basta declarar a variável fora de qualquer função e ao utilizar em outra classe, declarar a variável com o ```extern```.

### Exemplos de variáveis globais

| Método  | O que faz |
| --- |:---:|
| [```void FuncaoQueUtilizaAsVariaveisGlobais(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo05/VariaveisGlobais.c) | Utiliza a variável x global que foi declarada na mesma classe que o método |
| [```void FuncaoQueUtilizaAsVariaveisGlobais2(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo05/VariaveisGlobais2.c) | Utiliza as variáveis x e y globais que foram declaradas em outra classe |
| [```void FuncaoQueUtilizaAsVariaveisGlobais3(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo05/VariaveisGlobais2.c) | Utiliza a variável y global que foi declarada em outra classe |

# [Capítulo 06](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo06)

## Modificadores de tipo de acesso

### const

O uso do ```const``` no parâmetro de entrada do método, faz com que o código da função não seja capaz de modificar o objeto apontado pelo parâmetro. Apenas um evento externo pode modificar uma variável do tipo ```const```.

#### Exemplos de const

| Método  | O que faz | 
| --- |:---:| 
| [```void VariavelDoTipoConst(const char *frase)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo06/ModificadoresDeVariaveis.c) | Troca os espaços da frase por "-" e imprime a frase com a modificação, ou apenas imprime a frase inteira |

### volatile

O modificador ```volatile``` é usado para informar ao compilador que o valor de uma variável pode ser alterado de uma maneira não explicitamente especificada pelo programa. Exemplo, um endereço de uma variável global pode ser passado para a rotina de relógio do sistema operacional e usado para guardar o tempo real do sistema.

#### Exemplos de volatile

| Método  | O que faz |
| --- |:---:|
| [```void VariavelDoTipoVolatile(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo06/ModificadoresDeVariaveis.c) | Esse método altera o valor da const por meio de um ponteiro | 

# [Capítulo 07](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo07)

## Especificadores de tipo de classe de armazenamento

 ### extern
 
 C permite que módulos do programa sejam compilados separadamente e por conta disso é necessário que haja uma maneira de informar a todos os arquivos sobre as variáveis globais solicitadas pelo programa. Ao declarar a variável global em um determinado arquivo e utilizar ela em outro, será necessário usar o ```extern```, para indicar que aquela é uma variável global. 

#### Exemplos de extern

| Método  | O que faz | Observações |
| --- |:---:| ---:|
| [```void FuncaoQueUtilizaAsVariaveisGlobais2(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo05/VariaveisGlobais2.c) | Utiliza as variáveis x e y globais que foram declaradas em outra classe | Esse método está na classe do Capítulo 05 |
| [```void FuncaoQueUtilizaAsVariaveisGlobais3(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo05/VariaveisGlobais2.c) | Utiliza a variável y global que foi declarada em outra classe | Esse método está na classe do Capítulo 05 |

### static

Ao declarar uma variável como ```static```, o compilador cria um armazenamento permanente para ela quase da mesma forma que cria um armazenamento para uma variável global. 

Com variáveis estáticas é possível preservar um valor entre as chamadas das funções. 

Poderiam ser utilizadas variáveis globais no lugar de variáveis estáticas, no entanto, haveriam outras preocupações. Toda vez que a função é usada, seria necessário lembrar-se de declarar a variável global (como ```extern```) e garantir que ela não conflite com nenhuma outra variável global já declarada. 

Elas não são reconhecidas fora de sua função ou arquivo, mas mantém seus valores entre chamadas.
Uma variável global estática é apenas reconhecida no arquivo no qual a mesma foi declarada.

#### Exemplos de static

| Método  | O que faz | 
| --- |:---:| 
| [```void IniciarSerie(int semente)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo07/VariaveisEstaticas.c) | Inicializa a variável estática global | 
| [```int Serie(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo07/VariaveisEstaticas.c) | Utiliza a variável estática global para somar um valor à ela |
| [```int VariavelEstatica(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo07/VariaveisEstaticas.c) | O número vai ser inicializado com o valor 10 somente na primeira execução, pois a variável estática continua existindo após a função ser finalizada. A variável não é destruída e na segunda chamada dessa função, a variável já vai ter seu valor inicializado. | 

### register

Os objetos são colocados nos registradores da CPU. Portanto, o acesso ao objeto é o mais rápido possível. 

São usadas onde são feitas muitas referências a uma mesma variável.

Só é possível aplicar o especificador ```register``` a variáveis locais e parâmetros formais (os parâmetros da função na sua declaração são chamados parâmetros formais. Na chamada da função os parâmetros são chamados parâmetros atuais/reais) de uma função.

As variáveis ```register``` podem ser armazenadas em um registrador da CPU e podem não ter endereços.

#### Exemplos de register

| Método  | O que faz | 
| --- |:---:| 
| [```int EspecificadorRegister(register int m, register int e)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo07/Register.c) | Exemplo em um loop de um especificador ```register``` |

# [Capítulo 08](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo08)

## Operadores

*Atribuição* 

```
nome_da_variavel = expressão
```

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

| Método  | O que faz | 
| --- |:---:| 
| [```void ConversaoTiposDeValores(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo08/Operadores.c) | Conversão de tipos de valores | 

### Atribuições múltiplas

C permite que você atribua o mesmo valor a muitas variáveis usando atribuições múltiplas em um único comando.

#### Utilização

```
tipo variavel1 = ... = variaveln = valor
```

#### Exemplos de atribuições múltiplas

| Método  | O que faz | 
| --- |:---:| 
| [```void AtribuicoesMultiplas(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo08/Operadores.c) | Atribuições múltiplas | 

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

| Método  | O que faz | 
| --- |:---:|
| [```void Subtracao(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo08/Operadores.c) | Subtrai 1 de 2 | 
| [```void Adicao(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo08/Operadores.c) | Soma 2 e 1 | 
| [```void Multiplicacao(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo08/Operadores.c) | Multiplica 2 e 1 |
| [```void Divisao(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo08/Operadores.c) | Divide 4 por 2 | 
| [```void Modulo(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo08/Operadores.c) | Calcula o módulo de 5 por 2 e o módulo de 1 por 2 | 
| [```void Incremento(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo08/Operadores.c) | Exemplo de incremento |
| [```void Decremento(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo08/Operadores.c) | Exemplo de decremento | 

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

*Operador lógico* refere-se às maneiras como essas relações podem ser conectadas.

| Operador | Ação |
| --- | --- |
| && | AND |
| &#124; | OR |
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

**Precedência relativa**

| | Operador |
| --- | --- |
| Maior | ! |
| | \>   >=  <   <= |
| | ==  != |
| | && |
| Menor | &#124;&#124; |

### Exemplos de operadores relacionais e lógicos

| Método  | O que faz | 
| --- |:---:| 
| [```void MaiorQue(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo09/OperadoresLogicosRelacionais.c) | Exemplos de maior que | 
| [```void MaiorQueOuIgual(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo09/OperadoresLogicosRelacionais.c) | Exemplos de maior que ou igual | 
| [```void MenorQue(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo09/OperadoresLogicosRelacionais.c) | Exemplos de menor que | 
| [```void MenorQueOuIgual(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo09/OperadoresLogicosRelacionais.c) | Exemplos de menor que ou igual |
| [```void Igual(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo09/OperadoresLogicosRelacionais.c) | Exemplos de igual | 
| [```void Diferente(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo09/OperadoresLogicosRelacionais.c) | Exemplos de diferente | 
| [```int xor(int a, int b)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo09/OperadoresLogicosRelacionais.c) | Método de ou excluviso | 
| [```void PrintXor(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo09/OperadoresLogicosRelacionais.c) | Imprime o resultado de alguns valores utilizando o ou exclusivo | 

# [Capítulo 10](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo10)

## Operador bit a bit

Testar, atribuir ou deslocar os bits efetivos em um byte ou uma palavra, que correspondem aos tipos de dados ```char``` e ```int``` e variantes do padrão. 

Operações bit não podem ser usadas em ```float```, ```double```, ```long double```, ```void``` ou outros tipos mais complexos. 

Operações bit a bit encontram aplicações mais frequentemente em "drivers"de dispositivos - como em programas de modems, rotinas de arquivos em disco e rotinas de impressoras - porque as operações bit a bit mascaram certos bits, como o bit de paridade (confirma se o restante dos bits em um byte não se modificaram, é normalmente o bit mais significativo em cada byte).

São frequentemente usados em rotinas de criptografia. 

| Operador | Ação |
| --- | --- |
| & | AND |
| &#124; | OR |
| ^ | OR exclusivo (XOR) |
| ~ | Complemento de um |
| >> | Deslocamento à esquerda |
| << | Deslocamento à direita |

### Tabela verdade

| A | B | A & B | A &#124; B | A ^ B | ~A |
| --- | --- | --- | --- | --- | --- |
| 0 | 0 | 0 | 0 | 0 | 1 |
| 0 | 1 | 0 | 1 | 1 | 1 |
| 1 | 0 | 0 | 1 | 1 | 0 |
| 1 | 1 | 1 | 1 | 0 | 0 |

### Deslocamentos

Desloca *x* bits para a direita ou esquerda, podendo ocorrer a perda de algum bit nesse deslocamento.

| unsigned char x | cada execução da sentença | valor de x |
| --- | --- | --- |
| x = 7 | 00000111 | 7 |
| x = x << 1 | 00001110 | 14 |
| x = x << 3 | 01110000 | 112 |
| x = x << 2 | 11000000 | 448 |
| x = x >> 1 | 01100000 | 224 |
| x = x >> 1 | 00011000 | 112 | 

### Exemplos de operadores bit a bit

| Método  | O que faz | 
| --- |:---:| 
| [```void And(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo10/OperadoresBitABit.c) | Exemplo do operador AND |
| [```void Or(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo10/OperadoresBitABit.c) | Exemplo do operador OR |
| [```void Xor(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo10/OperadoresBitABit.c) | Exemplo do operador XOR |
| [```void ComplementoDeUm(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo10/OperadoresBitABit.c) | Exemplo do operador complemento de um |
| [```void Deslocamentos(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo10/OperadoresBitABit.c) | Exemplo do operador deslocamento à direita e à esquerda | 
| [```char Codificar(char)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo10/OperadoresBitABit.c) | Recebe um caractere e devolve o complemento de um desse caractere |

# [Capítulo 11](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo11)

## Operador ternário

O operador ternário é equivalente à um ```if``` com ```else```.

```
expressão1 ? expressão2 : expressão3
```

*expressão1* é avaliada e se ela for verdadeira, *expressão2* é avaliada e se torna o valor da expressão, senão, *expressão3* é avaliada e se torna o valor da expressão.

### Utilização

```c
x = 10;

y = x > 9 ? 100 : 200;
```

Esse código é equivalente a:

```c
x = 10;

if(x > 9) y = 100;

else y = 200;
```

### Exemplos de operador ternário

| Método  | O que faz | 
| --- |:---:| 
| [```void OperadorTernario(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo11/OperadoresTernarios.c) | Exemplo de operador ternário |
| [```void ExemploComIfElseOperadorTernario(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo11/OperadoresTernarios.c) | O mesmo exemplo do método acima, mas com ```if``` e ```else``` |

# [Capítulo 12](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo12)

## Ponteiros

Ponteiro é um endereço na memória de uma variável. Uma *variável de ponteiro* é uma variável especialmente declarada para guardar um ponteiro para seu tipo especificado. 

**Funções**

* Fornecer uma maneira rápida de referenciar elementos de uma matriz.

* Permite que funções em C modifiquem seus parâmetros de chamada.

* Suportam listas encadeadas e outras estruturas dinâmicas de dados.

### Operador de ponteiro *

Operador unário que devolve o **valor** da variável localizada no endereço que o segue. 

#### Utilização

* ch é um ponteiro

    ```c
    char *ch;
    ``` 
* y é um ponteiro

    ```c
    int x, *y, count;
    ```

### Operador de ponteiros &

Operador unário (que utiliza apenas um operando) que devolve o **endereço na memória** de seu operando.

#### Utilização

 ```c
m = &count;
```

*m* recebe o valor do endereço na memória da variável. Posição interna da variável no computador. 

### Exemplos de operadores de ponteiros

| Método  | O que faz | 
| --- |:---:|
| [```void OperadoresPonteiros(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo12/OperadoresPonteiros.c) | Exemplo de operadores de ponteiros | 

# [Capítulo 13](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo13)

## Operador *sizeof*

Operador em tempo de compilação unário que retorna o tamanho, em bytes, da variável ou especificador de tipo, em parênteses, que ele precede.

### Exemplos de operadores sizeof

| Método  | O que faz | 
| --- |:---:|
| [```void GravarDisco(int rec[6], FILE *fp)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo13/OperadoresSizeof.c) | Escreve 6 inteiros em um arquivo em disco | 

## Operador ponto e seta

Referenciam elementos individuais de estruturas e uniões. 

*Ponto* é usado quando se está referenciando a estrutura. 

*Seta* é usado quando um ponteiro para uma estrutura é usado.

### Exemplos de operadores ponto e seta

| Método  | O que faz |
| --- |:---:| 
| [```void OperadoresPontoSeta(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo13/OperadoresSizeof.c) | Atribui o valor 123.23 ao elemento **salario** da estrutura **trab** | 

# [Capítulo 14](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo14)

## Delimitadores com operadores

*Parênteses* são delimitadores que indicam o aumento da precedência das operações dentro deles.

*Colchetes* são utilizados para indicar a indexação de uma matriz.

### Precedências

Todos os operadores, com exceção de *operadores unários* e ```?```, associam da **esquerda para a direita**.

Operadores unários ```*```, ```&```, ```-``` e ```?``` associam da **direita para a esquerda**.

| Precedência | Elemento | 
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
| | &#124; &#124; |
| | ? |
| | = += -= *= /= |
| Menor | , |

### Exemplos de parênteses e colchetes

| Método  | O que faz | 
| --- |:---:| 
| [```void Array(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo14/ColchetesParenteses.c) | Exemplo de um array (operação utilizando colchetes) |
| [```void Parenteses(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo14/ColchetesParenteses.c) | Exemplo de como os parenteses alteram a ordem de execução das operações |

# [Capítulo 15](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo15)

## Expressões

*Ordem de avaliação*: o padrão C ANSI não estipula que as subexpressões (expressões dentro de uma expressão) de uma expressão devam ser avaliadas em uma ordem especificada.

Por exemplo, ```x = f1() + f2();``` não garante que ```f1()``` vai ser executada antes de ```f2()```.

## Conversão de tipos

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

### Exemplos de conversão de tipos
| Método  | O que faz | 
| --- |:---:| 
| [```void ConversaoDeTipos(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo15/ConversaoDeTipos.c) | Exemplo de conversão de tipos |

## Casts

Forçar expressão a ser de determinado tipo.

### Utilização

```
(tipo) expressão
```

### Exemplos de casts

| Método  | O que faz | 
| --- |:---:| 
| [```void Cast(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo15/Casts.c) | Exemplo de uma divisão de um número inteiro sem utilizar o cast e utilizando o cast |

# [Capítulo 16](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo16)

## C Reduzido

Algumas operações podem ser escritas de maneira reduzida em C.

```c
x = x + 10;
``` 
pode ser escrito de uma maneira reduzida: 

```c
x += 10;
```

```+=``` atribui a ```x``` o valor de ```x``` mais ```10```.

Essas operações existem para todos os operadores binários em C.

```
var = var operador expressão
``` 

é equivalente a 

```
var operador = expressão
```

### Exemplos de operações reduzidas

| Método  | O que faz | 
| --- |:---:|
| [```void SomaReduzida(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo16/CReduzido.c) | Exemplo de uma soma reduzida | 
| [```void SubtracaoReduzida(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo16/CReduzido.c) | Exemplo de uma subtração reduzida |
| [```void MultiplicacaoReduzida(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo16/CReduzido.c) | Exemplo de uma multiplicação reduzida | 
| [```void DivisaoReduzida(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo16/CReduzido.c) | Exemplo de uma divisão reduzida | 
| [```void ModuloReduzido(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo16/CReduzido.c) | Exemplo de um módulo reduzido | 

# [Capítulo 17](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo17)

## Condicional

```if``` e ```else``` (opcional), ```switch``` e ```?``` .

### If e ?

```if``` e ```?``` são comandos condicionais.

O comando ```else``` sempre se refere ao comando ```if``` mais próximo, que está dentro do mesmo bloco do ```else``` e não está associado a outro ```if```.

#### Exemplo de else

```c
if(i){
    if(j) comando1;
    if(k) comando2; //Este if
    else comando3; //está associado a este else
}
else comando4; //Associado ao if(i)
```

#### Utilização

* If e else

```c
if(expressão1) comando1;
if(expressão2) comando2;
else if(expressão3) comando3;
else comando4;
```

Se a *expressão1* for verdadeira, o *comando1* será executado.

Se a *expressão2* for verdadeira, o *comando2* será executado.

Se a *expressão2* for falsa, a *expressão3* vai ser verificada. Se a *expressão3* for verdadeira, o *comando3* será executado.

Se a *expressão3* for falsa, será executado o *comando4*.

* Operador ternário

```c
expressao1 ? comando1 : comando2
```

Se a *expressao1* for verdadeira, então o *comando1* será executado, senão o *comando2* será executado.

#### Exemplos de if e ?

| Método  | O que faz | Observações |
| --- |:---:| ---:|
| [```void AdivinharONumero(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo17/OperadoresDeSelecao.c) | Utiliza o ```if``` e o ```else``` para verificar se o usuário adivinhou o número gerado aleatoriamente pelo programa | - |
| [```void AdivinharONumeroComIfElseIf(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo17/OperadoresDeSelecao.c) | Utiliza o ```if``` e o ```else if``` para verificar se o usuário adivinhou o número gerado aleatoriamente pelo programa | - |
| [```void AdivinharONumeroComOperadorTernario(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo17/OperadoresDeSelecao.c) | Utiliza o operador ternário ```?``` para verificar se o usuário adivinhou o número gerado aleatoriamente pelo programa | - |
| [```void CalcularQuadradoDeUmNumeroComOperadorTernario(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo17/OperadoresDeSelecao.c) | Utiliza o operador ternário ```?``` para calcular a raiz quadrada de um número | - |
| [```void OperadorTernarioComFuncoes(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo17/OperadoresDeSelecao.c) | O operador ternário também pode ser utilizado chamando funções | Utiliza os dois métodos abaixo |
| [```void funcao1(int numero)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo17/OperadoresDeSelecao.c) | Imprime o número passado como parâmetro | Método utilizado pelo método ```OperadorTernarioComFuncoe``` |
| [```void funcao2(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo17/OperadoresDeSelecao.c) | Imprime a mensagem "foi o número digitado." | Método utilizado pelo método ```OperadorTernarioComFuncoe``` |
| [```void VerificaSeONumeroEhZero(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo17/OperadoresDeSelecao.c) | Verifica se o segundo número informado pelo usuário é 0 utilizando o if | A condição ```if(b)``` poderia ser escrita como ```if(b != 0)```, porém esta forma é redundante |

### Ifs aninhados

**If aninhado** é um comando ```if``` dentro de um outro ```if``` ou ```else```.

#### Exemplos de ifs aninhados

| Método  | O que faz | 
| --- |:---:| 
| [```void AdivinharONumeroComIfAninhado(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo17/OperadoresDeSelecao.c) | Utiliza o ifs aninhados para verificar se o usuário adivinhou o número gerado aleatoriamente pelo programa |

### Switch

É um comando de verificação múltipla. Esse comando testa sucessivamente o valor de uma expressão contra uma lista de constantes inteiras ou de caractere. Quando o valor coincide, os comandos associados à aquela constante, são executados.

Também é possível fazer um ```switch``` aninhado, ou seja, um comando ```switch``` dentro de um ```case``` de um outro ```switch```.

#### Utilização

```c
switch(expressão){
    case constante1:
        sequência de comandos
        break;
    case constante2:
        sequência de comandos
        break;
    case constante3;
        sequência de comandos
        break;
    .
    .
    .
    default:
        sequência de comandos
}
```

*default* é opcional e é executado caso nenhuma coincidência seja detectada.

#### Observações

* O comando ```switch``` difere do comando ```if```, porque o ```switch``` só pode testar igualdade, enquanto o ```if``` pode avaliar uma expressão lógica ou relacional.

* Duas constantes ```case``` no mesmo ```switch``` não podem ter valores idênticos.

* Se constantes de caractere são usadas em um comando ```switch```, elas são automaticamente convertidas para seus valores inteiros.

#### Exemplos de switch

| Método  | O que faz | 
| --- |:---:| 
| [```void ComandoSwitchMenu(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo17/OperadoresDeSelecao.c) | Exemplo de utilização do ```switch``` |
| [```void ComandoSwitchSemBreak(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo17/OperadoresDeSelecao.c) | Exemplo de utilização do ```switch``` sem o ```break``` |
| [```void ComandoSwitchDeclarandoVariaveis(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo17/OperadoresDeSelecao.c) | Exemplo de declaração de variável dentro de um ```switch``` | 
| [```void ComandoSwitchComBlocosDeCodigo(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo17/OperadoresDeSelecao.c) | Exemplo de blocos de código dentro de um ```switch*```| 
| [```void SwitchAninhado(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo17/OperadoresDeSelecao.c) | Exemplo de ```switch``` aninhado | 

# [Capítulo 18](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo18)

## Iteração

```for```, ```while``` e ```do while```.

### For

Laço de repetição que inicializa o valor de controle, verifica se a condição de finalização já foi atingida e incrementa/decrementa o valor de controle.

#### Utilização do for

```
for(inicialização; condição; incremento) comando;
``` 

*inicialização* é, geralmente, um comando de atribuição que é usado para colocar um valor na variável de controle do laço.

*condição* é uma expressão relacional que determina quando o laço acaba.

*incremento* define como a variável do laço varia a cada vez que o laço é repetido.

#### Exemplos de for

| Método  | O que faz | Observações |
| --- |:---:| ---:|
| [```void ForIncremento(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo18/OperadoresDeIteracao.c) | Exemplo de utilização do ```for``` incrementando o valor a cada rodada | - |
| [```void ForDecremento(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo18/OperadoresDeIteracao.c) | Exemplo de utilização do ```for``` decrementando o valor a cada rodada | - |
| [```void ForNaoSeraExecutado(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo18/OperadoresDeIteracao.c) | Exemplo de ```for``` que não será executado, pois a condição é falsa | - |
| [```void ForComDoisControles(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo18/OperadoresDeIteracao.c) | É possível utilizar o comando ```for``` com duas variáveis de controle | - |
| [```void ForCondicao(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo18/OperadoresDeIteracao.c) | A condição do ```for``` pode ser alguma outra expressão lógica | - |
| [```void ForComFuncoes(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo18/OperadoresDeIteracao.c) | As expressões que controlam o ```for``` também podem ser funções | Utiliza os métodos ```int QuadradoDeUmNumero(int numero)```, ```int LerNumero(void)``` e ```int ImprimirTexto(void)``` |
| [```void ForSemParteDaDefinicao(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo18/OperadoresDeIteracao.c) | Não é necessário que existam todas as expressões na definição de um ```for``` para que ele funcione adequadamente | - |
| [```void ForInfinito(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo18/OperadoresDeIteracao.c) | For irá rodar infinitamente até parar o programa | - |
| [```void ForSemCorpo(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo18/OperadoresDeIteracao.c) | É possível criar um for sem um corpo. Esse for é um for de atraso de tempo | - |

### While

O laço se repete enquanto a condição for verdadeira.

#### Utilização

```c
while(condição) comando;
```

*comando* pode ser sem comando, uma expressão ou um bloco de expressões.

#### Exemplos de while

| Método  | O que faz | Observações |
| --- |:---:| ---:|
| [```void ComandoWhile(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo18/OperadoresDeIteracao.c) | Enquanto o caractere A não for digitado, o bloco de código será executado | É necessário limpar o buffer para corrigir o problema de imprimir duas vezes a mensagem |
| [```void ComandoWhileCondicaoVerdadeira(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo18/OperadoresDeIteracao.c) | Caso a condição do ```while``` já seja verdadeira, o bloco de código dentro do ```while``` não será executado | - |
| [```void ComandoWhileSemCorpo(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo18/OperadoresDeIteracao.c) | O comando ```while``` não precisa ter um corpo, ele ficará sendo executado até que o usuário digite a letra "A" | - |

### Do-while

Os laços ```for``` e ```while``` testam a condição do laço no começo. O ```do-while``` testa a condição do laço no final, isso significa que o laço ```do-while``` sempre será executado pelo menos uma vez.

#### Utilização

```c
do{
    comando;
}while(condição);
```

#### Exemplos de do-while

| Método  | O que faz | 
| --- |:---:| 
| [```void ComandoDoWhile(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo18/OperadoresDeIteracao.c) | O comando ```do-while``` foi utilizado para a seleção de menu, enquanto um menu válido não for selecionado, ele será executado |

# [Capítulo 19](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo19)

## Desvio

```return```, ```goto```, ```break``` e ```continue```.

### Return

Utilizado para retornar de uma função, ele retorna para o ponto em que a chamada à função foi feita.

Pode ser utilizado em qualquer parte do código.

Se o ```return``` tem um valor associado a ele, esse valor é o valor de retorno da função. Se não existe nenhum valor associado à variável de retorno, apenas lixo é retornado. 

#### Utilização

```c
return expressão;
```

*expressão* é opcional.

#### Exemplos de return

| Método  | O que faz | Observações |
| --- |:---:| ---: |
| [```int ReturnInt(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo19/OperadoresDeDesvio.c) | Método retorna um ```int``` | - |
| [```char ReturnChar(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo19/OperadoresDeDesvio.c) | Método retorna um ```char``` | - |
| [```void SemRetunr(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo19/OperadoresDeDesvio.c) | Método sem retorno é um método do tipo ```void``` | - |
| [```float ReturnFloat(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo19/OperadoresDeDesvio.c) | Método retorna um ```float``` | - |
| [```int ReturnVazio(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo19/OperadoresDeDesvio.c) | Método retorna um ```int``` que não foi atribuído nenhum valor a ele. Por conta disso, o valor retornado, é um valor de lixo de memória. | Esse método está comentado para evitar warnings. | 

### Goto

O ```goto``` vai para uma área demarcada com ```<nome_da_area>:``` no código.

Uma preocupação da maioria dos programadores sobre o ```goto``` é a sua tendência de tornar os programas ilegíveis.   

Pode ser utilizado em qualquer parte do código.

#### Utilização

```c
goto rótulo;
.
.
.

rótulo:
```

#### Exemplos de goto

| Método  | O que faz | 
| --- |:---:|
| [```int ComandoGoto(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo19/OperadoresDeDesvio.c) | Exemplo de loop com ```goto``` | 

### Break

Pode ser utilizado para terminar um ```case``` em um comando ```switch``` ou pode ser usado para forçar uma terminação imediata de um laço, evitando o teste condicional normal do laço.

### Exemplos de goto

| Método  | O que faz |
| --- |:---:|
| [```int ComandoBreak(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo19/OperadoresDeDesvio.c) | Exemplo de ```loop``` com ```break``` |
| [```int SwitchCaseComBreak(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo19/OperadoresDeDesvio.c) | Exemplo de ```switch``` com ```break``` |

### Exit

Da mesma forma que você pode sair de um laço, pode sair de um programa usando a função ```exit()```. 

Força uma terminação imediata do programa inteiro, forçando um retorno ao sistema operacional. 

#### Utilização

```c
void exit(int codigo_de_retorno);
```

O valor de *codigo_de_retorno* é retornado ao processo chamador, que normalmente é o sistema operacional. 

Código de retorno 0 indica terminação normal do programa.

#### Exemplos de exit

| Método  | O que faz | Observações |
| --- |:---:| ---:|
| [```int ComandoExit(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo19/OperadoresDeDesvio.c) | Finaliza o programa | Esse exemplo é utilizado no menu do main |

### Continue

Força para que ocorra a próxima iteração do laço, pulando qualquer código intermediário.

#### Exemplos de continue

| Método  | O que faz |
| --- |:---:|
| [```int ComandoContinue(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo19/OperadoresDeDesvio.c) | Exemplo de ```continue``` em um ```loop``` |

# [Capítulo 20](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo20)

## Comandos de expressões

Uma expressão válida em C (um comando que não gera um erro no compilador) seguida por um ponto e vírgula.

### Utilização

* Chamada a uma função
```c
func();
```

* Comando de atribuição
```c
a = b + c;
```

* Comando válido que não faz nada
```c
b + f();
```

* Comando vazio
```c
;
```

### Exemplos de comandos de expressão

| Método  | O que faz |
| --- |:---:|
| [```void Expressoes(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo20/ComandosDeExpressoes.c) | Exemplo de comandos de expressão | 

## Blocos de comando

Grupos de comandos relacionados que são tratados como uma unidade. Os comandos que constituem um bloco estão logicamente conectados. 

Um bloco começa com uma chave e termina com uma chave correspondente. 

### Exemplos de comandos de bloco de código

| Método  | O que faz |
| --- |:---:| 
| [```void Bloco(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo20/BlocosDeCodigo.c) | Exemplo de um bloco de código |

# [Capítulo 21](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo21)

## Matriz

Coleção de variáveis do mesmo tipo que é referenciada por um nome comum. 

Um elemento específico em uma matriz é acessado por meio de um índice. Em C, todas as matrizes consistem em posições [contíguas](https://www.dicio.com.br/contiguo/) na memória. O menor endereço corresponde ao primeiro elemento e o maior, ao último elemento. 

### Matrizes unidimensionais

Como outras variáveis, as matrizes devem ser explicitamente declaradas para que o compilador possa alocar espaço para elas na memória.

O primeiro índice de uma matriz em C é o 0.

#### Utilização

```
tipo nome[tamanho];
```

*tipo* declara o tipo de base da matriz.

*tamanho* define quantos elementos a matriz irá guardar.

#### Quantidade de armazenamento

A quantidade de armazenamento necessário para guardar uma matriz está diretamente relacionada ao seu tamanho e seu tipo. Para uma matriz unidimensional, o tamanho total em bytes é calculado da seguinte maneira:

*total em bytes = sizeof(tipo) * tamanho da matriz*

A linguagem C não controla se o programador está acessando um index que não pertence à matriz. Por conta disso, deve-se tomar cuidado e atenção, pois você ultrapassar o tamanho máximo da matriz escrevendo ou imprimindo dados indevidos.

#### Exemplos de matrizes unidimensionais

| Método  | O que faz | Observações |
| --- |:---:| ---:|
| [```void Matriz(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo21/MatrizesUnitarias.c) | Exemplo de uma ```matriz``` com tamanho 10 | Esse método não é chamado no menu do *main*, pois ele não imprime nenhum valor na tela |
| [```void UltrapassaLimiteDaMatriz(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo21/MatrizesUnitarias.c) | Exemplo de um ```for``` que ultrapassa o limite de tamanho de uma ```matriz``` | Esse método não é chamado no menu do ```main```, pois ele não imprime nenhum valor na tela |

### Ponteiro

Você pode gerar um ponteiro para o primeiro elemento de uma matriz simplesmente especificando o nome da matriz, sem nenhum índice. 

Também é possível especificar o endereço do primeiro elemento de uma matriz utilizando o operador ```&```. 

```c
int matriz[10];
```

```matriz``` e ```&matriz[0]``` produzem os mesmos resultados.

#### Exemplos de ponteiros

| Método  | O que faz | Observações |
| --- |:---:| ---:|
| [```void PonteiroNaMatriz(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo21/MatrizesUnitarias.c) | Exemplo de ponteiro em uma matriz | Esse método não é chamado no menu do ```main```, pois ele não imprime nenhum valor na tela |

### Passagem de matrizes unidimensionais para funções

Em C, você não pode passar uma matriz inteira como um argumento para uma função. Porém é possível passar um ponteiro para uma matriz para uma função, especificando, o nome da matriz sem um índice. 

#### Exemplos de passagem de matrizes unidimensionais para funções

| Método  | O que faz | Observações |
| --- |:---:| ---:|
| [```void MatrizFuncao(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo21/MatrizesUnitarias.c) | Exemplo de como passar uma matriz para uma função | Esse método não é chamado no menu do ```main```, pois ele não imprime nenhum valor na tela |

# [Capítulo 22](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo22)

## String

Matriz de caracteres terminada por um nulo.

*Nulo = '\0'*

Por este motivo, é necessário que o tamanho das matrizes de caracteres sejam uma unidade maior do que o requisitado.

Para utilizar as funções de ```string``` é necessário incluir o ```<string.h>``` no *header*.

### Atenção

Ao atribuir individualmente os valores à uma matriz de string, você deve-se lembrar de inserir o nulo.

```c
char[4] = {'O', 'l', 'a', '\0'}
```

### Funções

| Nome | Função |
| --- | --- |
| strcpy(s1, s2) | Copia s2 em s1 |
| strcat(s1, s2) | Concatena s2 ao final de s1 |
| strlen(s1) | Retorna o tamanho de s1 |
| strcmp(s1, s2) | Retorna 0 se s1 e s2 são iguais; menor que 0 se s1 < s2; maior que 0 se s1 > s2 |
| strchr(s1, ch) | Retorna um ponteiro para a primeira ocorrência de ch em s1 |
| strstr(s1, s2) | Retorna um ponteiro para a primeira ocorrência de s2 em s1 |

**OBS**: para utilizar essas funções é necessário adicionar o cabeçalho "string.h""

#### Exemplos das funções de strings

| Método  | O que faz |
| --- |:---:| 
| [```void String(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo22/String.c) | Exemplo de utilização das funções de string |

# [Capítulo 23](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo23)

## Matrizes bidimensionais

O primeiro índice da matriz indica a linha e o segundo índice indica a coluna.

Quando uma matriz bidimensional é usada como argumento para uma função, apenas um ponteiro para o primeiro elemento é realmente passado. Porém, uma função que recebe uma matriz bidimensional como um parâmetro, deve definir pelo menos o comprimento da segunda dimensão. Isso ocorre, porque o compilador C precisa saber o comprimento de cada linha para indexar a matriz corretamente.

### Tamanho necessário em bytes para armazenamento na memória

*bytes = tamanho do 1º índice * tamanho do 2º índice * size of(tipo base)*

#### Exemplo de cálculo de bytes

```c
int matriz[10][5];
```

Tem o tamanho *10 * 5 * 2 (tamanho em bytes do tipo int de 16 bits)* que seriam 100 bytes.

### Utilização

Matriz bidimensional de tamanho 10, 20:

```c
int d[10][20];
```
<br>
Acessando o ponto 1, 2:

```c
d[1][2];
```

### Exemplo de chamada de função

```c
void funcao(int x[][10]){
.
.
.

}
```

### Visualização da matriz

|  | Coluna 1 | Coluna 2 | Coluna 3 |
| --- | --- | --- | --- |
| **Linha 1** | ch[0][0] | ch[0][1] | ch[0][2] |
| **Linha 2** | ch[1][0] | ch[1][1] | ch[1][2] |
| **Linha 3** | ch[2][0] | ch[2][1] | ch[2][2] |
| **Linha 4** | ch[3][0] | ch[3][1] | ch[3][2] |

### Exemplos de matrizes bidimensionais

| Método  | O que faz |
| --- |:---:|
| [```void MatrizBidimensional(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo23/MatrizesBidimensionais.c) | Exemplo de uma matriz bidimensional |
| [```void NotasDosAlunos(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo23/MatrizesBidimensionais.c) | Exemplo de uma matriz bidimensial |

# [Capítulo 24](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo24)

## Matrizes de strings

Uma matriz que armazena várias strings.

### Utilização

```c
char string_array[30][81];
```

Uma matriz de 30 strings, cada qual com o comprimento máximo de 80 caracteres.

### Acessar uma string

```c
gets(string_array[2]);
```

Acessa a string na posição de índice 2.

O comando acima é equivalente a:

```c
gets(&string_array[2][0]);
```

### Exemplos de matrizes de strings

| Método  | O que faz |
| --- |:---:|
| [```void MatrizDeString(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo24/MatrizesDeStrings.c) | Exemplo de uma matriz de string | 

# [Capítulo 25](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo25)

## Matrizes de 3 ou mais dimensões

Não são frequentemente usadas devido à quantidade de memória de que elas necessitam. 

### Utilização

```
tipo nome[tamanho1][tamanho2][tamanho3]...[tamanhoN];
```

### Exemplo de cálculo de bytes

```c
int matriz[10][6][9][4];
```

Tem o tamanho *10 * 6 * 9 * 4 * 2*, que seria equivalente à 4.320 bytes.

### Passagem de matrizes multidimensionais para funções

```c
int m[4][3][6][5];
void funcao(int[][3][6][5]){
.
.
.

}
```

### Exemplos de matrizes multidimensionais

| Método  | O que faz |
| --- |:---:|
| [```void MatrizMultidimensional(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo25/MatrizesMultidimensionais.c) | Exemplo de uma matriz multidimensional |

# [Capítulo 26](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo26)

## Indexando ponteiros

Um nome de matriz sem um índice é um ponteiro para o primeiro elemento dela mesma.

```c
//Considere a matriz
char p[10];

//As seguintes sentenças são equivalentes
p;
&p[0];
```

Outro exemplo:

```c
int * p;
int i[10];

p[5] = 100; //Atribui o valor 100 no sexto elemento de i
*(p+5) = 100; //Atribui usando aritmética de ponteiros, será explicado posteriormente
```

Analogamente, essa regra também vale para matrizes de duas ou mais dimensões.

```c
a[j][k]; //É equivalente a
*a(a+(j*comprimento das linhas)+k);
```

Exemplo:

```c
a;
&a[0][0];

a[0][4];
*(a+4);

a[1][2];
*(a+12);
```

A aritmética de ponteiros é geralmente mais rápida que a indexação de matrizes.

### Exemplos de index e ponteiros

| Método  | O que faz |
| --- |:---:|
| [```void ImprimeLinha(int j)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo26/IndexacaoDePonteiros.c) | Exemplo de ponteiros em uma matriz |

# [Capítulo 27](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo27)

## Inicialização de matrizes

A inicialização de matrizes é semelhante à de outras variáveis:

```
especificador_de_tipo nome_da_matriz[tamanho1]...[tamanhoN] = {lista_de_valores};
```

*lista_de_valores* é uma lista separada por vírgulas de valores compatíveis com o *especificador_de_tipo*. 

```c
int i[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
```

 Matrizes que contêm strings permitem a inicialiçazão abreviada:
 
 ```c
 char nome_da_matriz[tamanho] = "string";
 ```

```c
char string[30] = "Eu gosto de legumes.";

//Bem melhor do que escrever
char string[30] = {'E', 'u', ' ', 'g', 'o', 's', 't', 'o', ' ', 'd', 'e', ' ', 'l', 'e', 'g', 'u', 'm', 'e', 's', '.', '\0'}
//Nessa atribuição é necessário incluir o terminador nulo
//Pois o compilador não fará isso automaticamente como no caso da atribuição abreviada
```

Matriz multidimensionais são inicializadas da seguinte forma:

```c
int matriz[10][2] = {
    1,1,
    2,4,
    3,9,
    4,16,
    5,25,
    7,49,
    8,64,
    9,81,
    10,11
}
```

### Exemplos de inicialização de matrizes

| Método  | O que faz |
| --- |:---:|
| [```void InicializacaoMatriz(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo27/InicializacaoDeMatrizes.c) | Exemplo de inicialização de uma matriz de int |
| [```void InicializacaoMatrizString(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo27/InicializacaoDeMatrizes.c) | Exemplo de inicialização de uma matriz de caracteres (string) e compara o modo abreviado com o convencional de inicialização |
| [```void InicializacaoMatrizMultidimensional(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo27/InicializacaoDeMatrizes.c) | Exemplo de inicialização de uma matriz multidimensional |

## Inicialização de matrizes não-dimensionais

As matrizes não dimensionais é quando você deixa que o compilador C calcule automaticamente o tamanho dessas matrizes. Para fazer isso é necessário não especificar o tamanho da matriz ao inicializa-la. 

Outra vantagem de utilizar matrizes não dimensionadas é poder alterar os valores que estão nessas matrizes sem se preocupar de ultrapassar o tamanho máximo da matriz.

Matriz multidimensionais podem ser não dimensionais também. Para utiliza-las basta não informar a primeira dimensão, todas as outras devem ser informadas para que o compilador possa indexar corretamente elas.

### Utilização

* Matriz dimensionada

```c
char string1[17] = "Erro de leitura\n";
char string2[17] = "Erro de escrita\n";
char string3[29] = "Arquivo não pode ser aberto\n";
```

* Matriz unidimensional não dimensionada

```c
char string1[] = "Erro de leitura\n";
char string2[] = "Erro de escrita\n";
char string3[] = "Arquivo não pode ser aberto\n";
```

* Matriz multidimensional não dimensionada

```c
int strings[][2] = {
    1, 2,
    3, 4,
    5, 6, 
    7, 8,
    9, 10,
    11, 12
}
```

### Exemplos de matrizes não dimensionais

| Método  | O que faz |
| --- |:---:|
| [```void InicializacaoMatrizNaoDimensionada(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo27/InicializacaoDeMatrizes.c) | Exemplo de inicialização de uma matriz de unidimencional não dimensionada |
| [```void InicializacaoMatrizMultidimensionalNaoDimensionada(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo27/InicializacaoDeMatrizes.c) | Exemplo de inicialização de uma matriz de multidimensional não dimensionada |

# [Capítulo 28](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo28)

## Jogo da velha

Foram criadas dois códigos do jogo da velha.

### Exemplo jogo da velha versão Hatsumi

| Método  | O que faz |
| --- |:---:|
| [```void JogoDaVelhaVersaoHatsumi(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo28/JogoDaVelhaHatsumi.c) | Realiza a chamada do jogo |
| [```void InicializaOTabuleiro(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo28/JogoDaVelhaHatsumi.c) | Inicializa o tabuleiro com hífens |
| [```void Verificar(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo28/JogoDaVelhaHatsumi.c) | Verifica se ainda existem espaços em branco no tabuleiro ou se algum jogador venceu o jogo |
| [```void ImprimirTabuleiro(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo28/JogoDaVelhaHatsumi.c) | Imprime os valores do tabuleiro |
| [```void ReceberValor(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo28/JogoDaVelhaHatsumi.c) | Recebe o valor da jogada do usuário |
| [```void VezDoRobo(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo28/JogoDaVelhaHatsumi.c) | Realiza a jogada do robô colocando um 0 no primeiro espaço vazio encontrado |

### Exemplo jogo da velha versão do livro

| Método  | O que faz |
| --- |:---:|
| [```void JogoDaVelhaLivro(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo28/JogoDaVelhaLivro.c) | Realiza a chamada do jogo |
| [```void InicializarMatriz(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo28/JogoDaVelhaLivro.c) | Inicializa a matriz com espaços em branco |
| [```void ObterJogadaDoJogador(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo28/JogoDaVelhaLivro.c) | Recebe a jogada do usuário |
| [```void ObterJogadaDoComputador(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo28/JogoDaVelhaLivro.c) | Realiza a jogada do computador |
| [```void Checar(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo28/JogoDaVelhaLivro.c) | Verifica se algum jogador ganhou |
| [```void ImprimirMatriz(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo28/JogoDaVelhaLivro.c) | Imprime a matriz |

# [Capítulo 29](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo29)

## Ponteiros

É uma variável que contém um endereço de memória. 

| Endereço na memória | Variável na memória | Observação |
| --- | --- | --- |
| 1000 | 1003 | Aponta para o endereço de memória 1003 |
| 1001 | | |
| 1002 | | |
| 1003 | | | 
| 1004 | | |

É preciso ter atenção ao utilizar ponteiros, pois as variáveis ponteiro sempre devem apontar para o tipo de dado correspondente. 

Alguns compiladores C não exibirão nenhum erro de compilação caso um ponteiro do tipo ```int```, por exemplo, aponte para um ponteiro do tipo ```float```. No entanto, como esses tipos possuem tamanhos diferentes, ocorrerá um erro posteriormente (```int``` tem 2 bytes e ```float``` tem 8 bytes, só serão salvos os dois primeiros bytes na variável ponteiro).

### Utilização

```c
tipo *nome;
```

*tipo* define o tipo de variáveis que o ponteiro pode apontar.

### Exemplos com ponteiros

| Método  | O que faz | Observações | 
| --- |:---:| ---: |
| [```void VariavelPonteiroTipoDiferente(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo29/Ponteiros.c) | Exibe um exemplo da atribuição do endereço de uma variável float a um ponteiro do tipo int | O código foi comentado para evitar a exibição de warnings. O código não é chamado no ```main```, pois não produz nenhuma saída na tela. | 

## Atribuição de ponteiros

Para atribuir um valor a um ponteiro, basta realizar o comando:

```c
int x = 1;
int *p1;

//Ponteiro p1 recebe o endereço da memória de x
p1 = &x;
```

Também é possível...

```c
int x = 1;
int *p1;
int *p2;

//Ponteiro p1 recebe o endereço da memória de x
p1 = &x;
//Ponteiro p2 recebe o endereço que está em p1
//Que é o endereço de x
p2 = p1;
```

### Exemplos de atribuições de ponteiros

| Método  | O que faz | 
| --- |:---:|
| [```void AtribuicaoDePonteiros(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo29/Ponteiros.c) | Atribui ao ponteiro ```p1``` o endereço de memória de ```x``` e atribui ao ponteiro ```p2``` o endereço de memória que está em ```p1``` | 

## Aritmética de Ponteiros

É possível utilizar duas operações [aritméticas](https://pt.wikipedia.org/wiki/Aritm%C3%A9tica#Opera.C3.A7.C3.B5es_Aritm.C3.A9ticas) com ponteiros, a adição e a subtração.

Não é possível utilizar nenhuma outra operação com ponteiros. Assim como não é possível adicionar ou subtrair valores do tipo ```float``` e ```double``` de ponteiros.

Ao incrementar ou decrementar uma unidade em um ponteiro, o valor final do ponteiro será a posição de memória do próximo/anterior elemento do seu tipo base. 

Para entender melhor o que acontece, vamos ver um exemplo.

### Exemplo

Ponteiro ```p1``` aponta para um inteiro com o valor 2000. Considere que os inteiros são de 2 bytes. Após a operação:

```c
p1++;
```

```p1``` fica com qual valor?

2001? **Errado!**

2002!! O que acontece é que cada vez que incrementamos uma unidade no ponteiro ```p1```, ele aponta para o próximo inteiro, que possui, no mínimo, 2 bytes. O mesmo ocorre com o decremento. 

```c
p1--;
```

Ficará com o valor 1998.

<br>

Também é possível adicionar ou subtrair valores inteiros dos ponteiros:

```c
p1 = p1 + 12;
```

Essa operação faz com que ```p1``` aponte para o décimo segundo elemento do tipo de ```p1``` após o elemento que ```p1``` está apontando atualmente.

### Exemplos de aritmética de ponteiros

| Método  | O que faz | 
| --- |:---:|
| [```void AritmeticaDePonteiros(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo29/Ponteiros.c) | Exemplo de operações aritméticas com ponteiros | 

## Comparação de ponteiros

É possível realizar comparações de ponteiros. Normalmente essas comparações são feitas quando os ponteiros apotam para um objeto em comum. 

### Exemplos de aritmética de ponteiros

| Método  | O que faz | Observações |
| --- |:---:| ---: |
| [```void Push(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo29/PonteiroComPilha.c) | Realiza a comparação de dois ponteiros para verificar se o tamanho máximo da pilha foi excedido | Método chamado pelo método ```Pilha()``` |
| [```int Pop(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo29/PonteiroComPilha.c) | Realiza a comparação de dois ponteiros para verificar se o último elemento da pilha foi removido | Método chamado pelo método ```Pilha()``` |
| [```void Pilha(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo29/PonteiroComPilha.c) | Método que realiza a chamada dos dois métodos anteriores | - |

# [Capítulo 30](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo30)

## Ponteiros e matrizes

Para acessar elementos de matrizes é possível utilizar a aritmética de ponteiros ou a indexação de matrizes. A aritmética de ponteiros pode ser mais rápida que a indexação de matrizes.

### Utilização

```c
char string[80];
char *ponteiro;

//Ponteiro foi incializado com o primeiro elemento da matriz
ponteiro = string;
```

Para acessar o quinto elemento da matriz:

```c
string[4]; 

//Ou também
*(ponteiro+4)
```

### Exemplos de ponteiros e matrizes

| Método  | O que faz | 
| --- |:---:| 
| [```void MatrizComIndexacao(char *s)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo30/PonteirosMatrizes.c) | Exemplo de acesso aos elementos da matriz com indexação | 
| [```void MatrizComPonteiro(char *s)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo30/PonteirosMatrizes.c) | Exemplo de acesso aos elementos da matriz com ponteiro | 

## Matrizes de ponteiros

É possível criar uma matriz de ponteiro.

### Utilização

```c
int *matrizDePonteiro[10];
```

Para atribuir um valor:

```c
matrizDePonteiro[0] = &variavel;
```

Para obter o valor da ```variavel```:

```c
*matrizDePonteiro[0];
```

### Exemplos de matrizes de ponteiros

| Método  | O que faz | Observações |
| --- |:---:| ---: |
| [```void ExibirArray(int *matrizPonteiros[])```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo30/PonteirosMatrizes.c) | Exemplo de função que recebe uma matriz como parâmetro sem informar o tamanho da mesma | Função chamada pela função ```ExibirArrayChamada``` |
| [```void ExibirArray2(int *matrizPonteiros[10])```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo30/PonteirosMatrizes.c) | Exemplo de função que recebe uma matriz como parâmetro informando o tamanho da matriz | Função chamada pela função ```ExibirArrayChamada``` |
| [```void ExibirArray3(int *matrizPonteiros[])```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo30/PonteirosMatrizes.c) | Exemplo de função que recebe o ponteiro que aponta para uma matriz como parâmetro | Função chamada pela função ```ExibirArrayChamada``` |
| [```void ExibirArrayChamada(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo30/PonteirosMatrizes.c) | Exemplo de utilização de matriz de ponteiros e chamada das funções acima | - |

# [Capítulo 31](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo31)

## [Indireção](https://pt.stackoverflow.com/questions/181032/o-que-%C3%A9-indire%C3%A7%C3%A3o) múltipla ou ponteiro para ponteiros

É quando um ponteiro aponta para um ponteiro que aponta para o valor. 

Para entender um pouco mais, veja a imagem a seguir:

![](https://i.stack.imgur.com/RkW0H.jpg)

É possível utilizar ponteiros que apontam para ponteiros que apontam para ponteiros e assim sucessivamente, no entanto, raramente é necessário mais de um ponteiro para um ponteiro.

### Utilização

```c
float **ponteiro;
```

```ponteiro``` é um ponteiro para um ponteiro do tipo ```float```.

**ATENÇÃO**

```ponteiro``` NÃO é um ponteiro para um número ```float```.

### Exemplos de ponteiros de ponteiros

| Método  | O que faz | 
| --- |:---:| 
| [```void PonteiroDePonteiro(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo31/PonteiroDePonteiro.c) | Exemplo de utilização de ponteiro de ponteiro | 

# [Capítulo 32](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo32)

## Inicialização de ponteiros

Caso um ponteiro seja utilizado sem ser inicializado, pode ocorrer um erro inesperado, pois ao instanciar um ponteiro, ele já possui um valor desconhecido.

Uma convenção entre a maioria dos programadores de C é inicializar o ponteiro com o valor nulo. 

No entanto, um ponteiro com o valor nulo, não garante que não correrão erros ao utilizá-lo. Caso o programador utilize o ponteiro do lado esquerdo de um comando de atribuição, ocorrerá um erro.

### Exemplos de ponteiros de ponteiros

| Método  | O que faz | Observações |
| --- |:---:| ---: |
| [```void PonteiroSemInicializar(void)```](https://github.com/hatsumi2301/CStudies/blob/master/CStudies/Capitulo32/InicializacaoDePonteiros.c) | Exemplo de utilização de ponteiro que não foi inicializado | O código está comentado para evitar warnings. O código não é chamado pelo ```main()```, pois está comentado e no meu computador, ele gerou um erro em tempo de execução |

