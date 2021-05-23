#include <iostream>
#include <string.h>

using namespace std;

int nt, compvet=0;
char de, para;
string msg, codmsg;

int Ftroca(string *pfmsg, int *pfcompvet, char fde, char fpara, string *pfcodmsg){
    int shift=0;

    *pfcodmsg=*pfmsg;
    *pfcompvet=(*pfmsg).length();
    for(int i=0; i<*pfcompvet; i++)
    {
        if ((*pfcodmsg)[i]==fde)
        {
        (*pfcodmsg)[i]=fpara;
        shift=shift+1;    
        }
    }
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

nt=Ftroca(&msg,&compvet,de,para,&codmsg);

cout<<endl<<codmsg<<endl;
cout<<msg<<endl;
cout<<nt<<endl<<endl;
cout<<"Opcional: Qtd Elementos do vetor: "<<compvet<<endl<<endl;

}