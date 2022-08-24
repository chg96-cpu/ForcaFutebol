#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

int main() {
	
	char timeFutebol[15],letra[1],secreto[30],erros[30];
	int tam,i,chances,acertos,contagemErro;
	bool acerto;
	int resenha;
	chances =4;
	tam = 0;
	i=0;
	acertos=0;
	
	unsigned seed = time(0);
	srand(seed);
	int numero;
    	numero=(rand() % 25) + 0;
	
    	char times[26][15] = {"palmeiras","fluminense","flamengo","corinthians","internacional","atletico-pr","atletico-mg","santos","america-mg","bragantino","goias","sao paulo","fortaleza","botafogo","ceara","cuiaba","avai","coritiba","atletico-go","juventude","vasco","gremio","cruzeiro","chapecoense","barcelona","juventus"};
	strcpy(timeFutebol, times[numero]);
	
	cout << "!Informacoes basicas dessa resenha!\n1-times como atletico-mg ou atletico-pr e esperado que vc bote o '-'como se fosse uma letra\n2-Bom dia!/Boa tarde!/Boa Noite!\nDigite 1 para comecar(se vc nao digitar exatamente 1,fudeu): ";
	while(resenha!=1) {
		cin >> resenha;
		cout << "Digite 1 kaceta: ";
	}
	
	system("cls");
	
	while(timeFutebol[i] != '\0') {
		i++;
		tam++;
	}
	
	for(i=0;i<30;i++) {
		secreto[i] = '_';
	}
	
	for(i=0;i<30;i++) {
		erros[i] = '_';
	}
	
	
	
	while((chances>0) && (acertos<tam) && (contagemErro<6)) {
		cout << "Chances restantes:" << chances << "\n\n";
		cout << "Time secreto: ";
		
		for(i=0;i<tam;i++) {
			cout << secreto[i] << " ";
		}
		cout << "\n";
		cout << "erros: ";
		for (i=0;i<4;i++) {
			cout << erros[i] << " ";
		}
		
		cout << "\nDigite uma letra: ";
		cin >>letra[0];
		
		for(i=0;i<tam;i++) {
			if(timeFutebol[i]==letra[0]) {
				acerto=true;
				secreto[i]=timeFutebol[i];
				acertos++;
			}
		}
		if(!acerto) {
			
			erros[contagemErro]=letra[0];
			contagemErro++;
			chances--;
		}
		
		acerto=false;
		system("cls");
	}
	
	if (acertos==tam) {
		cout << "Voce venceu,cabeca de pika!"<< "\n";
	}else {
		cout << "Voce perdeu,lixo!" << "\n";
	}
	
	system("pause");
	return 0;
}
