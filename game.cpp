#include<iostream>
#include<string>
#include<map>
#include<vector>


using namespace std;

const string PALAVRA_SECRETA = "MELANCIA";

map<char,bool>chutou;
vector <char> chutesErrados;

bool letraExistes(char chute){

    for (char letra : PALAVRA_SECRETA)
    {
        if(chute == letra){
            return true;
        }
    }return false;   
}

int main(){


    bool naoAcertou = true;
    bool naoEnforcou = true;

    while (naoAcertou && naoEnforcou){

        cout << "chutes errados:";
        for(char letra : chutesErrados){
            cout << letra << " ";
        }

        cout << endl;

        for(char letra : PALAVRA_SECRETA){
            if(chutou[letra]){
                cout<< letra << " ";
            }else{
                cout <<"_ ";
            }
        }
        cout<< endl;

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
    
}