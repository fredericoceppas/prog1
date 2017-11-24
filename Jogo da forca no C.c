# include <iostream>
# include <stdlib.h>
# include <time.h>
# include <string.h>
# include <ctype.h>

using namespace std;

const int quant_palavras = 5 ;

char banco[quant_palavras] [30] = {
"cachorro",
"computador",
"cadeira",
"automovel",
"edificio"};

char palavra_sort [30];
char palavra_dig  [30];



int sorteia() {
    srand (time (NULL));
    return rand () % (quant_palavras);
}

void imprime_palavras_dig () {
	cout<<"\n     "<<strlen(palavra_sort)<<" letras \n\n     ";
for ( int i=0;i< strlen(palavra_sort); i++){
      cout<<palavra_dig [i] <<" " ;
}
}

void copia ( int ind ){
    for (int i = 0 ;i< 30 ; i ++) {
	     palavra_sort[i] = banco[ind] [i] ;
}
}

void limpa_palavra_dig(){
	
    for(int i=0; i< strlen(palavra_sort);i++){
    	palavra_dig[i] =  ;
    }
	}

int main() {
	limpa_palavra_dig();
	
    int	cont_let_dig=0 ;
	int ind_palavra= sorteia() ;

	char letras_digitadas[26] ;
	
	while (cont_let_dig<=6)	{
	
	
	
	}
	
	return 0 ;
}

void imprime_forca(int let_erro){
	
	switch( let_erro){
		case 0:
			cout<<" |     "<<endl;
			cout<<" |     "<<endl;
			cout<<" |     "<<endl;
			cout<<" |     "<<endl;
			cout<<" |     "<<endl;
			    break;
		case 1:
			cout<<"  _____"<<endl;
			cout<<" |     O"<<endl;
			cout<<" |      "<<endl;
			cout<<" |      "<<endl;
			cout<<" |      "<<endl;
			    break;
	   case 2:
	   	    cout<<" _______"<<endl;
	   	    cout<<"|      O"<<endl;
	   	    cout<<"|      |"<<endl;
	   	    cout<<"|       "<<endl;
	   	    cout<<"|       "<<endl;
       case 3:
	        cout<<"________"<<endl;
			cout<<"|      O"<<endl;
			cout<<"|     /|"<<endl;
			cout<<"|       "<<endl;	        		    
	    	cout<<"|       "<<endl;
			    break;
	   case 4:
	        cout<<" ________"<<endl;
	        cout<<"|       O"<<endl;
			cout<<"|      /|\\"<<endl;
			cout<<"|        "<<endl;
			cout<<"|        "<<endl;
			    break;
	   case 5 :
	        cout<<" ________"<<endl;
			cout<<"|       O"<<endl;
			cout<<"|      /|\\"<<endl;
			cout<<"|      / "<<endl;
			cout<<"|        "<<endl;
			    break:
	   case 6 :
	        cout<<" _________"<<endl;
			cout<<"|        O"<<endl;
			cout<<"|       /|\\"<<endl;
			cout<<"|       / \\"<<endl;
			cout<<"|           "<<endl;
	            break:
				   													 	    
	}
}
int main ( ) {
	

	int ind_palavra= sorteia( );

    limpa_palavra_dig ( );
	
	
	int cont_erros=0;

	char letras_digitadas [26];

    while ( cont_ erros<=6){
    	system("cls");
    	imprime_forca(cont_erros);
    	imprime_palavra_dig( );
    if( palavra_sort[i]==letra){
    	palavra_dig[i] = letra;
	   } 
	}		
} 
void imprime_let_dig(char letras[], int tam){
	cout<<"\n \n letras digitadas: ";
	for( int i=0;i< tam; i++){
		cout<<letras[i]<<",";
}
    cout<<"\n";
}

int main(){
	int ind_palavra=sorteia();
	copia( ind_palavra);
	    system("cls");
	    imprime_forca( cont erros);
	    imprime_palavra_dig();
	    cout<<"\n\n";
	    cout<<"digite uma letra:";
	    cin>>letra;
	    letra= tolower(letra);
	    if(verica_letra(letra,letras_digitadas)){
	    	cout<<"letra ja foi digitada!tente novamente!\n\n";
	    	system("pause");
		}
		
else{
	letras_digitadas [cont_let_dig] = letra;
	cont_let_dig++;
	if (verica_letra(letra,palavra_sort)){
	}
  }
}

int main(){
	int ind_palavra= sorteia();
	copia(ind_palavra);
	limpa_palavra_dig();
	int cont_erros=0
	char letras_digitadas[26];
	char letras;
	while (cont_erros<6);
	system("cls");
	imprime_forca(cont_erros);
	imprime_palavra_dig();
	imprime_let_dig(letras_digitadas,cont_let_dig);
	cout<<"\n\n tentativas restantes: "<<6-cont_erros<<"\n\n";
	cout<<"digite uma letra:";
	cin>>letra;
	letra= tolower(letra);
	if(verifica_letra[letra,letras_digitadas]){
		cout<<"letra ja foi digitada! tente novamente!\n\n";
		system("pause");
	} else {
		letras_digitadas[cont_let_dig] = letras;
		cont_let_dig++;
		
		if(verifica_letra_(letra,palavra_sotr)){
			substitui(letra);
			
		}else{
			cout<<"\n letra incorreta! tente novamente \n\n ";
			cont_erros++;
			system("pause");
		}
	}
    
    if(cont_erros>=6 ){
    	system("cls");
    	cout<<"\n\n t suas tentativas acabaram ! \n reinicie o software par";
    
		system ("pause");
    	return 0;
	}
