<h1 style="color: pink">Estudos da linguagem C</h1>

Estou usando como guia de estudos o livro "C completo e total". Terceira edição. Herbert Schildt.

[<h2 style="color: lightpink">Capítulo 01</h2>](https://github.com/hatsumi2301/CStudies/tree/master/CStudies/Capitulo01)

### Printf

O printf imprime textos na tela.

Para utilizar a função ```printf```, é necessário importar a biblioteca ```#include <stdio.h>```.

#### Utilização

Caso deseje imprimir valores de variáveis, é necessário utilizar especificadores de conversão.

| Valor | Exemplo |
| ----- | ---------------- |
| texto | ```printf("<texto>")``` |
| char | ```printf("%c", <char>)``` |
| int | ```printf("%d", <int>)``` |
| float | ```printf("%f", <float>)``` |
| double | ```printf("%f", <double>)``` |
| pointer | ```printf("%p", <pointer>)``` |

Caso deseje imprimir determinadas informações, utilizar os códigos abaixo:

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

#### Exemplos de printf

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| ```Saida()```| Imprime o texto "Olá mundo!" | - | 

### Scanf

O scanf obtém dados digitados pelo teclado.

Para utilizar a função ```scanf```, é necessário importar a biblioteca ```#include <stdio.h>```.

#### Utilização

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
| ```EntradaNumero()```| Obtém um número digitado pelo teclado | - |
| ```EntradaTexto()```| Obtém um texto digitado pelo teclado | - |

<h2 style="color: lightpink">Capítulo 02</h2>

### Variáveis

Variável é um espaço na memória para guardar um determinado dado.

As variáveis locais devem ser declaradas no início do bloco em que elas são definidas.

Os nomes das variáveis devem ser únicos em cada contexto.

### Modificando os tipos básicos

*signed*

*unsigned*

*long*

*short*

### Tipos de variáveis com seus modificadores

| Tipo | bits | Faixa mínima |
| ---- | ---- | ------------ |
| char | 8 | -127 a 127 |
| unsigned char | 8 | 0 a 255 |
| signed char | 8 | -127 a 127 |
| int | 16 | -32.767 a 32.767 |
| unsigned int | 16 | 0 a 65.535 |
| signed int | 16 | 0 a 65.535 |
| short int | 16 | 0 a 65.535 |
| unsigned short int | 16 | 0 a 65.535 |
| signed short int | 16 | 0 a 65.535 |
| long int | 32 | -2.147.483.647 a 2.147.483.637 |
| signed long int | 32 | -2.147.483.647 a 2.147.483.637 |
| unsigned long int | 32 | 0 a 4.294.967.295 |
| float | 32 | seis dígitos de precisão |
| double | 64 | dez dígitos de precisão |
| long dougle | 80 | dez dígitos de precisão |

### Exemplos de variáveis

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| ```TiposDeVariaveis()``` | Tipos de variáveis em C | - |
| ```NomeDaVariavel()``` | Esse método possui uma variável com o nome x | Os métodos ```NomeDaVariavel()```, ```NomeDaVariavelRepetido()``` e ```NomeDaVariavelRepetidoEmOutraClasse()``` possuem uma variável com nomes iguais. Os dois primeiros métodos estão na mesma classe e o último em uma classe separada. |
| ```NomeDaVariavelRepetido()``` | Esse método possui uma variável com o nome x | Os métodos ```NomeDaVariavel()```, ```NomeDaVariavelRepetido()``` e ```NomeDaVariavelRepetidoEmOutraClasse()``` possuem uma variável com nomes iguais. Os dois primeiros métodos estão na mesma classe e o último em uma classe separada. |
| ```NomeDaVariavelRepetidoEmOutraClasse()``` | Esse método possui uma variável com o nome x | Os métodos ```NomeDaVariavel()```, ```NomeDaVariavelRepetido()``` e ```NomeDaVariavelRepetidoEmOutraClasse()``` possuem uma variável com nomes iguais. Os dois primeiros métodos estão na mesma classe e o último em uma classe separada.  |

<h2 style="color: lightpink">Capítulo 03</h2>

### Loops

Loops são repetições de um determinado trecho do código que obedece uma determinada condição.

**Tipos de loops:**

*for*

*while*

*do while*

### Exemplos de loops

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| ```VerificarCaractereNaString()```| Obtém uma palavra e um caractere como dados de entrada, informados pelo usuário e verifica se a palavra contém o caractere informado | - |
| ```VerificarCaractereNaString2(char *s, char c)```| Verifica se a palavra conté o caractere. Os dados devem ser passados como parâmetros | *Exemplo* ```VerificarCaractereNaString2("teste", "e")``` verifica se a palavra "teste" contém a letra "e" |
| ```LoopFor()```| Loop do tipo "for" | - |
| ```LoopWhile()```| Loop do tipo "while" | - |
| ```LoopDoWhile()```| Loop do tipo "do while" | - |
| ```DiferencaEntreLoopWhileAndDoWhile()```| Exemplo da diferença entre os loops "while" e "do while" | - |

<h2 style="color: lightpink">Capítulo 04</h2>

### Condicionais

Verifica se uma determinada condição é verdadeira ou falsa para executar o código dentro do contexto da mesma.

**Tipos de condicionais**

*if*

*else*

*else if*

### Exemplos de condicionais

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| ```Condicionais()```| Condicionais *if*, *else if* e *else* | Informar o número 1 para executar o comando do *if*, informar o número 2 para executar o comando do *else if* e informar qualquer outro número para executar o comando do *else* |

<h2 style="color: lightpink">Capítulo 05</h2>

### Variáveis globais

Variáveis globais são reconhecidas pelo programa inteiro e podem ser utilizadas em qualquer parte do código. 
Elas também guardam seus valores durante toda a execução do programa. 

### Utilização

Basta declarar a variável fora de qualquer função.

### Exemplos de variáveis globais

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| ```FuncaoQueUtilizaAsVariaveisGlobais()``` | Utiliza a variável x global que foi declarada na mesma classe que o método | - |
| ```FuncaoQueUtilizaAsVariaveisGlobais2()``` | Utiliza as variáveis x e y globais que foram declaradas em outra classe | - |
| ```FuncaoQueUtilizaAsVariaveisGlobais3()``` | Utiliza a variável y global que foi declarada em outra classe | - |

## Capítulo 06

### Modificadores de tipo de acesso

| Modificador | Descrição |
| --- | --- |
| const | O uso do const no parâmetro de entrada do método, faz com que o código da função não seja capaz de modificar o objeto apontado pelo parâmetro. Apenas um evento externo pode modificar uma variável do tipo const. |
| volatile | O modificador volatile é usado para informar ao compilador que o valor de uma variável pode ser alterado de uma maneira não explicitamente especificada pelo programa. Exemplo, um endereço de uma variável global pode ser passado para a rotina de relógio do sistema operacional e usado para guardar o tempo real do sistema. |

### Exemplos de modificadores de tipo de acesso

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| ```VariavelDoTipoConst(const char *frase)```| Troca os espaços da frase por "-" | - |
| ```VariavelDoTipoVolatile()``` | Esse método altera o valor da const por meio de um ponteiro | - |

## Capítulo 07

### Especificadores de tipo de classe de armazenamento

 **extern**
 
 C permite que módulos do programa sejam compilados separadamente e por conta disso é necessário que haja uma maneira de informar a todos os arquivos sobre as variáveis globais solicitadas pelo programa. Ao declarar a variável global em um determinado arquivo e utilizar ela em outro, será necessário usar o extern, para indicar que aquela é uma variável global. 

### Exemplos de extern

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| ```FuncaoQueUtilizaAsVariaveisGlobais()``` | Utiliza a variável x global que foi declarada na mesma classe que o método | Esse método está na classe do Capítulo 05 |
| ```FuncaoQueUtilizaAsVariaveisGlobais2()``` | Utiliza as variáveis x e y globais que foram declaradas em outra classe | Esse método está na classe do Capítulo 05 |
| ```FuncaoQueUtilizaAsVariaveisGlobais3()``` | Utiliza a variável y global que foi declarada em outra classe | Esse método está na classe do Capítulo 05 |

**static**

Ao declarar uma variável como static, o compilador cria um armazenamento permanente para ela quase da mesma forma que cria um armazenamento para uma variável global. 

Com variáveis estáticas é possível preservar um valor entre as chamadas das funções. 

Poderiam ser utilizadas variáveis globais no lugar de variáveis estáticas, no entanto, haveriam outras preocupações. Toda vez que a função é usada, seria necessário lembrar-se de declarar a variável global (como extern) e garantir que ela não conflite com nenhuma outra variável global já declarada. 

Elas não são reconhecidas fora de sua função ou arquivo, mas mantém seus valores entre chamadas.
Uma variável global estática é apenas reconhecida no arquivo no qual a mesma foi declarada.

### Exemplos de static

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| ```IniciarSerie(int semente)``` | Inicializa a variável estática global | - |
| ```Serie()```| Utiliza a variável estática global para somar um valor à ela | - |
| ```VariavelEstatica()```| O número vai ser inicializado com o valor 10 somente na primeira execução, pois a variável estática continua existindo após a função ser finalizada. A variável não é destruída e na segunda chamada dessa função, a variável já vai ter seu valor inicializado. | - |

**register**

Os objetos são colocados nos registradores da CPU. Portanto, o acesso ao objeto é o mais rápido possível. 

São usadas onde são feitas muitas referências a uma mesma variável.

Só é possível aplicar o especificador register a variáveis locais e parâmetros formais (os parâmetros da função na sua declaração são chamados parâmetros formais. Na chamada da função os parâmetros são chamados parâmetros atuais/reais) de uma função.

As variáveis register podem ser armazenadas em um registrador da CPU e podem não ter endereços.

### Exemplos de register

| Método  | O que faz | Observações |
| ------------- |:-------------:| -----:|
| ```EspecificadorRegister(register int m, register int e)``` | Exemplo em um loop de um especificador register | - |


