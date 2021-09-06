#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv){
	
	
	string usuario = "";
	string senha = "";
	bool Login_sucesso = false;
	cout << "Seja bem vindo a tela de acesso\n\n";	
	
	
	do{
		cout << "Digite seu login: ";
		cin >> usuario;
		
		cout << "Digite sua senha: ";
		cin >> senha;
		
		if(usuario == "Lino" && senha == "12345"){	
			cout << "Login realizado com sucesso!\n\n";
			
			Login_sucesso = true;
			
		} else{
			cout << "Login invalido, tente novamente!\n\n";
		}
		
	}while (!Login_sucesso);
	
	return 0;
}
