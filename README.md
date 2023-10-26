# jogoDaForca
jogoDaForca

Passo 1: Incluímos as bibliotecas necessárias, como iostream para entrada/saída, string para manipulação de strings, map para criar um mapa de dados, vector para criar um vetor, fstream para operações de arquivo, ctime para trabalhar com tempo e cstdlib para gerar números aleatórios.

Passo 2: Definimos algumas variáveis globais:

    palavraSecreta: Armazena a palavra que o jogador deve adivinhar. Inicialmente, é definida como "MELANCIA".
    chutou: É um mapa que rastreia quais letras o jogador já chutou. Inicialmente, está vazio.
    chutesErrados: É um vetor que armazena as letras chutadas incorretamente. Inicialmente, está vazio.

Passo 3: Definimos a função letraExistes(char chute) que verifica se uma letra está presente na palavra secreta (palavraSecreta).

Passo 4: A função naoAcertou() verifica se o jogador não acertou todas as letras da palavra secreta. Ela percorre a palavraSecreta e verifica se alguma letra ainda não foi chutada corretamente.

Passo 5: A função naoEnforcou() verifica se o jogador não excedeu o limite de chutes incorretos, que é de 5. Ela verifica o tamanho do vetor chutesErrados.

Passo 6: A função imprimeErros() imprime as letras chutadas incorretamente armazenadas no vetor chutesErrados.

Passo 7: A função imprimePalavra() imprime a palavra secreta parcialmente adivinhada. Se o jogador já acertou uma letra, ela é exibida; caso contrário, é exibido um sublinhado.

Passo 8: A função chuta() permite ao jogador fazer um chute, lê a letra que o jogador digita, verifica se a letra está na palavra secreta, atualiza as variáveis e exibe mensagens apropriadas.

Passo 9: A função leArquivo() lê palavras de um arquivo chamado "palavras.txt". O arquivo deve conter um número seguido das palavras a serem lidas. As palavras lidas são armazenadas em um vetor e retornadas.

Passo 10: A função sorteiaPalavra() escolhe aleatoriamente uma palavra do vetor de palavras lidas do arquivo e a define como a nova palavra secreta.

Passo 11: Na função main(), o programa começa lendo as palavras do arquivo e sorteia uma palavra secreta. Em seguida, entra em um loop enquanto o jogador não adivinhar completamente a palavra e não exceder o limite de chutes incorretos.

Passo 12: No loop principal do jogo, o programa imprime as letras chutadas incorretamente, a palavra parcialmente adivinhada e permite ao jogador fazer chutes até que o jogo termine.

Passo 13: No final do jogo, o programa exibe uma mensagem indicando se o jogador venceu ou perdeu, e mostra qual era a palavra secreta.

Este código implementa um jogo da forca em C++, onde o jogador deve adivinhar a palavra secreta. O código utiliza funções e estruturas de dados para gerenciar o jogo e torná-lo mais interativo.
