#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<fstream>
#include<ctime>
#include<cstdlib>


using namespace std;

string palavraSecreta = "MELANCIA";

map<char,bool>chutou;
vector <char> chutesErrados;

bool letraExistes(char chute){

    for (char letra : palavraSecreta)
    {
        if(chute == letra){
            return true;
        }
    }return false;   
}

bool naoAcertou(){
    for(char letra : palavraSecreta){
        if(!chutou[letra]){
            return true;
        }
    }return false;
}

bool naoEnforcou(){
    return chutesErrados.size() < 5;
}

void imprimeErros(){
    cout << "chutes errados:";
    for(char letra : chutesErrados){
        cout << letra << " ";
    }

    cout << endl;    
}

void imprimePalavra(){
    for(char letra : palavraSecreta){
                if(chutou[letra]){
                    cout<< letra << " ";
                }else{
                    cout <<"_ ";
                }
            }
            cout<< endl;
}

void chuta(){
    cout << "seu chute: ";
    char chute;
    cin >> chute;

    chutou[chute]= true;

    if (letraExistes(chute))
    {
        cout  << "você acertou seu chute esta na palavra ." << endl;

    }else{
        cout << " você errou! seu chute não esta na palavra." << endl;
        chutesErrados.push_back(chute);
    }
    cout << endl;    
}

vector <string> leArquivo(){
    ifstream arquivo;
    arquivo.open("palavras.txt");

    int qdtPalavras;
    arquivo >> qdtPalavras;

    vector <string> palavrasDoArquivo;

    for(int i = 0; i< qdtPalavras;i++){
        string palavraLida;
        arquivo >> palavraLida;
        palavrasDoArquivo.push_back(palavraLida);
    }return palavrasDoArquivo;
}

void sorteiaPalavra(){
    vector <string> palavras = leArquivo();

    srand(time(NULL));
    int iSorteado = rand() % palavras.size();

    palavraSecreta = palavras[iSorteado];
}

int main(){

    leArquivo();
    sorteiaPalavra();

    while (naoAcertou() && naoEnforcou()){

        imprimeErros();
        imprimePalavra();
        
        chuta();

    }

    cout << "fim de jogo" << endl;
    cout << "palavra secreta era:" << palavraSecreta << endl;

    if(naoAcertou()){
        cout << "você perdeu" << endl;
    }else{
        cout << "boa" << endl;
    }
    
}
