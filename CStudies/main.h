//
//  main.h
//  CStudies
//
//  Created by Hatsumi Hashi on 16/10/17.
//  Copyright © 2017 Hatsumi Hashi. All rights reserved.
//

#ifndef main_h
#define main_h

#include <stdio.h>

extern int numeros[10][10];

int Opcoes(void);
void Saida(void);
void EntradaNumero(void);
void EntradaTexto(void);
void TiposDeVariaveis(void);
void NomeDaVariavel(void);
void NomeDaVariavelRepetido(void);
void NomeDaVariavelRepetidoEmOutraClasse(void);
void VerificarCaractereNaString(void);
int VerificarCaractereNaString2(char *s, char c);
void LoopFor(void);
void LoopWhile(void);
void LoopDoWhile(void);
void DiferencaEntreLoopWhileAndDoWhile(void);
void Condicionais(void);
void FuncaoQueUtilizaAsVariaveisGlobais(void);
void FuncaoQueUtilizaAsVariaveisGlobais2(void);
void FuncaoQueUtilizaAsVariaveisGlobais3(void);
void VariavelDoTipoConst(const char *frase);
void VariavelDoTipoVolatile(void);
void IniciarSerie(int semente);
int Serie(void);
int VariavelEstatica(void);
int EspecificadorRegister(register int m, register int e);
void ConversaoTiposDeValores(void);
void AtribuicoesMultiplas(void);
void Subtracao(void);
void Adicao(void);
void Multiplicacao(void);
void Divisao(void);
void Modulo(void);
void Incremento(void);
void Decremento(void);
void PrintXor(void);
void MaiorQue(void);
void MaiorQueOuIgual(void);
void MenorQue(void);
void MenorQueOuIgual(void);
void Igual(void);
void Diferente(void);
void And(void);
void Or(void);
void Xor(void);
void ComplementoDeUm(void);
void Deslocamentos(void);
char Codificar(char);
void OperadorTernario(void);
void ExemploComIfElseOperadorTernario(void);
void OperadoresPonteiros(void);
void OperadorSizeof(void);
void OperadoresPontoSeta(void);
void Array(void);
void Parenteses(void);
void Cast(void);
void SomaReduzida(void);
void SubtracaoReduzida(void);
void MultiplicacaoReduzida(void);
void DivisaoReduzida(void);
void ModuloReduzido(void);
void AdivinharONumero(void);
void AdivinharONumeroComIfElseIf(void);
void AdivinharONumeroComOperadorTernario(void);
void CalcularQuadradoDeUmNumeroComOperadorTernario(void);
void OperadorTernarioComFuncoes(void);
void funcao1(int numero);
void funcao2(void);
void AdivinharONumeroComIfAninhado(void);
void VerificaSeONumeroEhZero(void);
void ComandoSwitchMenu(void);
void ComandoSwitchSemBreak(void);
void ComandoSwitchDeclarandoVariaveis(void);
void ComandoSwitchComBlocosDeCodigo(void);
void SwitchAninhado(void);
void ForCondicao(void);
void ForComFuncoes(void);
void ForSemParteDaDefinicao(void);
void ForInfinito(void);
void ForDigiteA(void);
void ForSemCorpo(void);
void ComandoWhile(void);
void ComandoWhileCondicaoVerdadeira(void);
void ComandoWhileSemCorpo(void);
void ComandoDoWhile(void);
int ReturnInt(void);
char ReturnChar(void);
void SemReturn(void);
float ReturnFloat(void);
void ComandoGoto(void);
void ComandoBreak(void);
void SwitchCaseComBreak(void);
void ComandoExit(void);
void ComandoContinue(void);
void Expressoes(void);
void Bloco(void);
void String(void);
void MatrizBidimensional(void);
void NotasDosAlunos(void);
void MatrizDeString(void);
void MatrizMultidimensional(void);
void ImprimeLinha(int numero);
void InicializacaoMatriz(void);
void InicializacaoMatrizString(void);
void InicializacaoMatrizMultidimensional(void);
void InicializacaoMatrizMultidimensionalNaoDimensionada(void);
void InicializacaoMatrizNaoDimensionada(void);
void ConversaoDeLongEUnsignedInt(void);
void ConversaoDeTipos(void);
void JogoDaVelhaVersaoHatsumi(void);
void JogoDaVelhaLivro(void);
void AtribuicaoDePonteiros(void);
void AritmeticaDePonteirosInt(void);
void AritmeticaDePonteirosDouble(void);
void Pilha(void);
void MatrizComIndexacao(char *s);
void MatrizComPonteiro(char *s);
void ExibirArrayChamada(void);
void PonteiroDePonteiro(void);

#endif /* mainn_h */
