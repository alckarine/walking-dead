# walking-dead
Programa em C feito para a disciplina de MC102. Este programa tem como objetivo mostrar as interacoes zumbi/humano que ocorrem em uma população
declarada a partir de uma matriz inicial. As regras sao:
- Humano (1) com pelo menos um vizinho zumbi, vira zumbi (2)
- Zumbi (2) com nenhum humano vizinho ou 2+ vizinhos humanos é morto (0)
- Vazio (0)com exatamente dois vizinhos humanos (n importa os zumbis), nasce humano (1)

A primeira entrada é o nro de linhas e coluna na matriz de pop. inicial, a segunda é o nro de
dias de interação, e a terceira entrada é os dados da matriz inicial.
Como saida, o programa da a matriz populacional apos cada dia de interacao
