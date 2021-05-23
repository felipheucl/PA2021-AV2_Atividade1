#include <iostream>
#include <string.h>

using namespace std;

int nt, compvet=0;
char de, para;
string msg, codmsg;

/* Os ponteiros da function "Ftroca" recebem os ederecos das variaveis globais e então
mudam seus valores diretamente na memoria, não sendo necessario retornar esses 
valores a chamada da função. 
*/

int Ftroca(string *pfmsg, int *pfcompvet, char fde, char fpara, string *pfcodmsg){   
    int shift=0;

    *pfcodmsg=*pfmsg; // copia o valor que está no endereco da varivel global "msg" para "pfcodmsg"
    *pfcompvet=(*pfmsg).length();// escreve no valor do endereço da var. global "compvet" o comprimento do vetor "msg"
    for(int i=0; i<*pfcompvet; i++) // abaixo segue a logica para identificação dos caracteres e suas devidas trocas
    {
        if ((*pfcodmsg)[i]==fde) // elemento por elemento do vetor 
        {
        (*pfcodmsg)[i]=fpara; // caso seja encontrado um caracter indesejado, aqui se faz a substituição deste.
        shift=shift+1;    // toda vez que é feita a troca, incrementa-se 1 na variavel
        }
    }
    return shift; // retorna o valor da variavel "shift" a function "Ftroca"
}

int main() {

cout<<endl<<endl<<"ATIVIDADE 1 - Problema de troca em um vetor de caracteres"<<endl<<endl;
cout<<"Digite uma mensagem: "<<endl;
getline(cin,msg); // grava toda a linha de caracteres, inclusive espacos, num vetor
cout<<endl<<"Informe o caractere a ser retirado da mensagem: "<<endl;
cin>>de; // caracter a ser exculido
cout<<endl<<"Insira o caractere para a codificaçao: "<<endl;
cin>>para; // caracter a ser inserido

nt=Ftroca(&msg,&compvet,de,para,&codmsg); // nt: numeros de trocas de caracteres. Pelo retorno da Function "Ftroca"
// na linha acima, também entregamos os endereços das var. globais "msg", "compvet" e "codmsg"

cout<<endl<<codmsg<<endl; // mensagem codificada
cout<<msg<<endl;   //  mensagem original
cout<<nt<<endl<<endl; // // nt: numeros de trocas de caracteres 
cout<<"Opcional: Qtd Elementos do vetor: "<<compvet<<endl<<endl;   // numero de elementos do vetor

}