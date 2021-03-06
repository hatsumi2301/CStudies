//
//  main.c
//  CStudies
//
//  Created by Hatsumi Hashi on 05/09/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#include "main.h"

int main(){
    while (1==1) {
        int opcao = Opcoes();
        int opcao2;
        int existe;
        int valorDeRetorno;
        
        switch (opcao) {
            case 1:
                printf("\nInforme uma opção: \n");
                printf("1. Printf\n2. Scanf\n\n");
                scanf("%d", &opcao2);
                printf("\n");
                
                switch(opcao2){
                    case 1:
                        Saida();
                        break;
                    case 2:
                        printf("\nInforme uma opção: \n");
                        printf("1. Número\n");
                        printf("2. Texto\n\n");
                        scanf("%d", &opcao2);
                        printf("\n");
                        
                        switch(opcao2){
                            case 1:
                                EntradaNumero();
                                break;
                            case 2:
                                EntradaTexto();
                                break;
                            default:
                                printf("Opção inexistente.");
                        }
                        break;
                    default:
                        printf("Opção inexistente.");
                }
                
                break;
            case 2:
                printf("\nInforme uma opção: \n");
                printf("1. Tipos de variáveis\n");
                printf("2. Variáveis podem ter o mesmo nome, se estiverem em contextos diferentes");
                scanf("%d", &opcao2);
                printf("\n");
                
                switch(opcao2){
                    case 1:
                        TiposDeVariaveis();
                        break;
                    case 2:
                        NomeDaVariavel();
                        NomeDaVariavelRepetido();
                        NomeDaVariavelRepetidoEmOutraClasse();
                        break;
                    default:
                        printf("Opção inexistente.");
                }
                
                break;
            case 3:
                printf("\nInforme uma opção: \n");
                printf("1. Verificar se o caractere existe na palavra informando a palavra e o caractere \n");
                printf("2. Verificar que o caractere 'x' não existe na palavra 'fécula'\n");
                printf("3. Verificar que o caractere 'a' existe na palavra 'ave'\n");
                printf("4. Loop for\n");
                printf("5. Loop while\n");
                printf("6. Loop do while\n");
                printf("7. Diferença entre o loop while e do while\n\n");
                scanf("%d", &opcao2);
                printf("\n");
                
                switch(opcao2){
                    case 1:
                        VerificarCaractereNaString();
                        break;
                    case 2:
                        existe = VerificarCaractereNaString2("fécula", 'x');
                        if(existe == 0) printf("A palavra não contém a letra.\n");
                        else printf("A palavra contém a letra.\n");
                        break;
                    case 3:
                        existe = VerificarCaractereNaString2("ave", 'x');
                        if(existe == 0) printf("A palavra não contém a letra.\n");
                        else printf("A palavra contém a letra.\n");
                        break;
                    case 4:
                        LoopFor();
                        break;
                    case 5:
                        LoopWhile();
                        break;
                    case 6:
                        LoopDoWhile();
                        break;
                    case 7:
                        DiferencaEntreLoopWhileAndDoWhile();
                        break;
                    default:
                        printf("Opção inexistente.");
                }
                
                break;
            case 4:
                Condicionais();
                break;
            case 5:
                FuncaoQueUtilizaAsVariaveisGlobais();
                FuncaoQueUtilizaAsVariaveisGlobais2();
                FuncaoQueUtilizaAsVariaveisGlobais3();
                break;
            case 6:
                printf("Variável do tipo const.\n");
                VariavelDoTipoConst("Isso é um teste");
                
                printf("\n\nVariável do tipo volatile.\n");
                VariavelDoTipoVolatile();
                break;
            case 7:
                printf("\nInforme uma opção: \n");
                printf("1. Variável estática\n");
                printf("2. Variável estática global\n");
                printf("3. Especificador register\n\n");
                scanf("%d", &opcao2);
                printf("\n");
                
                switch (opcao2) {
                    case 1:
                        printf("A variável estática vai ser inicializada somente uma vez, na primeira chamada do método. Ela será inicializada com o valor 10, será somado 1 ao seu valor e será retornado o valor 11.\nNas próximas chamadas do método, o valor da variável será o resultado do valor da soma da execução anterior.\n");
                        for(int i = 0; i < 10; i++){
                            valorDeRetorno = VariavelEstatica();
                            printf("%d\n", valorDeRetorno);
                        }
                        break;
                    case 2:
                        printf("Informe um valor inteiro: ");
                        scanf("%d", &valorDeRetorno);
                        
                        IniciarSerie(valorDeRetorno);
                        valorDeRetorno = Serie();
                        
                        printf("Valor informado + 23 = %d.\n", valorDeRetorno);
                        break;
                    case 3:
                        valorDeRetorno = EspecificadorRegister(10, 10);
                        
                        printf("%d\n", valorDeRetorno);
                        break;
                    default:
                        printf("Opção inexistente.");
                }
                
                break;
            case 8:
                printf("Conversão de tipos de valores\n\n");
                ConversaoTiposDeValores();
                
                printf("Atribuições múltiplas\n\n");
                AtribuicoesMultiplas();
                
                printf("\n\nInforme uma opção: \n");
                printf("1. Subtração\n");
                printf("2. Adição\n");
                printf("3. Multiplicação\n");
                printf("4. Divisão\"n");
                printf("5. Módulo\n");
                printf("6. Incremento\n");
                printf("7. Decremento\n\n");
                scanf("%d", &opcao2);
                printf("\n");
                
                switch (opcao2) {
                    case 1:
                        Subtracao();
                        break;
                    case 2:
                        Adicao();
                        break;
                    case 3:
                        Multiplicacao();
                        break;
                    case 4:
                        Divisao();
                        break;
                    case 5:
                        Modulo();
                        break;
                    case 6:
                        Incremento();
                        break;
                    case 7:
                        Decremento();
                        break;
                    default:
                        printf("Opção inexistente.");
                }
                
                break;
            case 9:
                MaiorQue();
                MaiorQueOuIgual();
                MenorQue();
                MenorQueOuIgual();
                Igual();
                Diferente();
                PrintXor();
                break;
            case 10:
                And();
                Or();
                Xor();
                ComplementoDeUm();
                Deslocamentos();
                
                char aCodificado = Codificar('a');
                printf("Caractere \'a\' codificado: %c\n", aCodificado);
                
                break;
            case 11:
                OperadorTernario();
                ExemploComIfElseOperadorTernario();
                break;
            case 12:
                OperadoresPonteiros();
                break;
            case 13:
                OperadorSizeof();
                OperadoresPontoSeta();
                break;
            case 14:
                Array();
                Parenteses();
                break;
            case 15:
                Cast();
                
                ConversaoDeLongEUnsignedInt();
                ConversaoDeTipos();
                break;
            case 16:
                SomaReduzida();
                SubtracaoReduzida();
                MultiplicacaoReduzida();
                DivisaoReduzida();
                ModuloReduzido();
                break;
            case 17:
                printf("\n\nInforme uma opção: \n");
                printf("1. If e else\n");
                printf("2. If e else if\n");
                printf("3. Operador ternário\n");
                printf("4. Calcular quadrado de um número com operador ternário\n");
                printf("5. Chamada de funções com o operador ternário\n");
                printf("6. Ifs aninhados\n");
                printf("7. If para verificar se o número é zero\n");
                printf("8. Menu switch\n");
                printf("9. Comando switch sem break\n");
                printf("10. Comando switch com declação de variáveis\n");
                printf("11. Comando switch com blocos de código\n");
                printf("12. Switch aninhado\n\n");
                scanf("%d", &opcao2);
                printf("\n");
                    
                switch (opcao2) {
                    case 1:
                        AdivinharONumero();
                        break;
                    case 2:
                        AdivinharONumeroComIfElseIf();
                        break;
                    case 3:
                        AdivinharONumeroComOperadorTernario();
                        break;
                    case 4:
                        CalcularQuadradoDeUmNumeroComOperadorTernario();
                        break;
                    case 5:
                        OperadorTernarioComFuncoes();
                        break;
                    case 6:
                        AdivinharONumeroComIfAninhado();
                        break;
                    case 7:
                        VerificaSeONumeroEhZero();
                        break;
                    case 8:
                        ComandoSwitchMenu();
                        break;
                    case 9:
                        ComandoSwitchSemBreak();
                        break;
                    case 10:
                        ComandoSwitchDeclarandoVariaveis();
                        break;
                    case 11:
                        ComandoSwitchComBlocosDeCodigo();
                        break;
                    case 12:
                        SwitchAninhado();
                        break;
                    default:
                        printf("Opção inexistente.");
                }
                break;
            case 18:
                printf("\n\nInforme uma opção: \n");
                printf("1. Condição do for\n");
                printf("2. For com funções\n");
                printf("3. For sem parte da definição\n");
                printf("4. Laço infinito\n");
                printf("5. Laço infinito até que digite a letra A\n");
                printf("6. For sem corpo\n");
                printf("7. Comando while\n");
                printf("8. Comando while com condição verdadeira\n");
                printf("9. Comando while sem corpo\n");
                printf("10. Comando do-while\n\n");
                scanf("%d", &opcao2);
                printf("\n");
                
                switch (opcao2) {
                    case 1:
                        ForCondicao();
                        break;
                    case 2:
                        ForComFuncoes();
                        break;
                    case 3:
                        ForSemParteDaDefinicao();
                        break;
                    case 4:
                        ForInfinito();
                        break;
                    case 5:
                        ForDigiteA();
                        break;
                    case 6:
                        ForSemCorpo();
                        break;
                    case 7:
                        ComandoWhile();
                        break;
                    case 8:
                        ComandoWhileCondicaoVerdadeira();
                        break;
                    case 9:
                        ComandoWhileSemCorpo();
                        break;
                    case 10:
                        ComandoDoWhile();
                        break;
                    default:
                        printf("Opção inexistente.");
                }
                break;
            case 19:
                {
                    int numero;
                    char ch;
                    float f;
                    
                    numero = ReturnInt();
                    ch = ReturnChar();
                    f = ReturnFloat();
                    
                    printf("Método que retorna um inteiro, retornou o valor: %d\n", numero);
                    printf("Método que retorna um caractere, retornou o valor: %c\n", ch);
                    SemReturn();
                    printf("Método que retorna um float, retornou o valor: %f\n", f);
                    
                    printf("\n\nLoop com goto:\n");
                    ComandoGoto();
                    
                    printf("\n\nComando de loop com break\n");
                    ComandoBreak();
                    
                    printf("\n\nComando switch case com break\n");
                    SwitchCaseComBreak();
                    
                    printf("\n\nComando continue\n");
                    ComandoContinue();
                    break;
                }
            case 20:
                Expressoes();
                Bloco();
                break;
            case 21:
                printf("Os métodos não são chamados aqui, pois não produzem nenhuma saída significativa para o usuário.\n");
                break;
            case 22:
                String();
                break;
            case 23:
                MatrizBidimensional();
                printf("\n\n");
                NotasDosAlunos();
                break;
            case 24:
                MatrizDeString();
                break;
            case 25:
                MatrizMultidimensional();
                break;
            case 26:
            {
                int i;
                int k;
                int numero;
                
                for(i = 0; i < 10; i++)
                    for(k = 0; k < 10; k++)
                        numeros[i][k] = i + k; //Utilizando variável global
                
                printf("Informe um número: \n");
                scanf(" %d", &numero);
                
                printf("Valores da linha %d: \n", numero);
                
                ImprimeLinha(numero);
                break;
            }
            case 27:
                printf("Inicialização matriz de int:\n");
                InicializacaoMatriz();
                
                printf("\n\nInicialização matriz de caracteres:\n");
                InicializacaoMatrizString();
                
                printf("\n\nInicialização matriz multidimensional:\n");
                InicializacaoMatrizMultidimensional();
                
                printf("\n\nInicialização matriz unidimensional não dimensionada:\n");
                InicializacaoMatrizNaoDimensionada();
                
                printf("\n\nInicialização matriz multidimensional não dimensionada:\n");
                InicializacaoMatrizMultidimensionalNaoDimensionada();
                break;
            case 28:
                printf("\n\nInforme uma opção: \n");
                printf("1. Jogo da velha versão Hatsumi\n");
                printf("2. Jogo da velha versão livro\n");
                scanf("%d", &opcao2);
                printf("\n");
                
                switch (opcao2) {
                    case 1:
                        JogoDaVelhaVersaoHatsumi();
                        break;
                    case 2:
                        JogoDaVelhaLivro();
                        break;
                    default:
                        printf("Opção inexistente.");
                }
                break;
            case 29:
                AtribuicaoDePonteiros();
                
                printf("\n\nAritmética de ponteiros inteiros:\n\n");
                AritmeticaDePonteirosInt();
                
                printf("\n\nAritmética de ponteiros double:\n\n");
                AritmeticaDePonteirosDouble();
                
                printf("\n\nPilha\n");
                Pilha();
                break;
            case 30:
            {
                char palavra[100];
                
                printf("Informe uma palavra: \n");
                scanf(" %s", palavra);
                
                MatrizComIndexacao(palavra);
                MatrizComPonteiro(palavra);
                
                printf("\n\nMatriz de ponteiros");
                ExibirArrayChamada();
                break;
            }
            case 31:
                PonteiroDePonteiro();
                break;
            case 32:
                PonteiroSemInicializar();
                break;
            case 100:
                ComandoExit();
                break;
            default:
                printf("Opção inexistente.");
                break;
        }
    }
}

int Opcoes(){
    printf("\n______________________________________________________\n");
    printf("Para finalizar o programa, digite 100 ou \n");
    printf("informe o número do capítulo\n");
    
    int opcao;
    
    scanf(" %d", &opcao);
    printf("\n");
    
    return opcao;
}
