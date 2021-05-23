#include <iostream>
#include <string.h>

using namespace std;

int compvet=0;
char de, para;
string msg, codmsg;

int Ftroca(string fmsg, int fcompvet, char fde, char fpara, string fcodmsg){
    int shift=0;

    fcodmsg=fmsg;
    fcompvet=fmsg.length();
    for(int i=0; i<fcompvet; i++)
    {
        if (fcodmsg[i]==fde)
        {
        fcodmsg[i]=fpara;
        shift=shift+1;    
        }
    
    }
    cout<<endl<<"N.o Elementos do Vetor: "<<fcompvet<<endl;
    cout<<fcodmsg<<endl;
    cout<<fmsg<<endl;
    return shift;
}

int main() {

cout<<endl<<endl<<"ATIVIDADE 1 - Problema de troca em um vetor de caracteres"<<endl<<endl;
cout<<"Digite uma mensagem: "<<endl;
getline(cin,msg);
cout<<endl<<"Informe o caractere a ser retirado da mensagem: "<<endl;
cin>>de;
cout<<endl<<"Insira o caractere para a codificaçao: "<<endl;
cin>>para;
cout<<Ftroca(msg,compvet,de,para,codmsg)<<endl;
}