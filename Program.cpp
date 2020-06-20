#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
struct cadlogin
{
	char namelogin[200];
	char senhalogin[200];
}logL[200];
struct login
{
	char login[200];
	char senha[200];
}logLL[200];
struct pedido
{
    char namePed[200];
    char CPF[200];
    char numPed[200];
    char qtdPed[200];
    char valorped[200];
    int cod;
}logP[200];

struct cadastro
{
    char CPF[200];
    char telefone[200];
    char nome[200];
    char endereco[200];
    char data[200];
    int vazio,cod;
    struct pedido clientePed;    
   
}log[200];
struct bebidas
{
	char nomebeb[200];
	char teor[200];
	char preco[200];
	char qtd[200];
	int  vazio;
	struct pedido clientePed;    
}logB[200];
struct pizzaiolos
{
	char nome[200];
	char idade[200];
	char cpf [200];
	char telefone[200];
	char endereco[200];
	int vazio;
}logPZ[200];
struct reclama
{
	char reclama[200];
	char sucess[200];
	int vazio;
}logR[200];
struct elogios
{
	char elogio[200];
	char sucesso[200];
	int vazio;	
}logE[200];
struct controle
{
    char cod;
    float compra;
    float venda;
    float preco;
    int qdt;
    float lucro;
    char descricao[100];
    char nome[50];
}logC[200];
//AQUI DECLARO AS FUNÇÕES A SEREM USADAS
int verifica_pos(void);
int verifica_cod( int cod );
int opt;
void cadlogin();
void menu();
void cadastroP(int cod,int pos);
void cadastroB();
void cadastroPZ();
void cardapio();
void sabores();
void reclama();
void elogios();
void promo();
void list();
void listbeb();
void cadastroPedido();
void consultaCod (void);
void controle();
void excluirCliente (void);
int main(void){ //INICIO DO MAIN

	int i,Opcao,OpcaoCliente,posicao,retorno,listaBb;
    int codaux;
    	printf("\n*--------------Bem vindo ao nosso Sistema--------------*\n");
		system("pause");
		posicao=verifica_pos();
			if ( posicao != -1 ){
			retorno = verifica_cod( codaux );
			if ( retorno == 1 )
              cadlogin();  
                }
}
void cadlogin()
{
	int i;
	int opcaol;
	do{
	printf("Digite 1 para se cadastrar ou 2 para login:\n");
	scanf("%d", &opcaol);fflush(stdin);	
	if(opcaol ==1){
		system("cls");
		printf("Digite o seu usuario:\n");
		gets(logL[i].namelogin);
		printf("Digite uma senha:\n");
		gets(logL[i].senhalogin);
		printf("Pressione enter para volta ao menu principal");
	}
	else{
	do 
	{
		system("cls");
		printf ("Digite seu login:\n");
		gets(logLL[i].login);
		printf ("Digite sua senha:\n");
		gets(logLL[i].senha);
		if ((!strcmp (logL[i].namelogin,logLL[i].login)) || (logL[i].senhalogin,logLL[i].senha)) {
		printf("\n\n Bem-vindo.\n\n"); 
		system("cls");
		menu();
		}else{
		printf("Login ou senha errados, digite novamente\n");
}
}while((strcmp (logL[i].namelogin,logLL[i].login)) && (logL[i].senhalogin,logLL[i].senha));
	}
        opt ==1;
        getchar();  
    }while(opt==1);
    system("cls");
	main();
}
void menu(){
	FILE *arq;
	int i,Opcao,OpcaoCliente,posicao,retorno,listaBb;
    int codaux;
    system("cls");
	do
    {
		arq = fopen("arquivo_pim", "w");       
	    printf("1 - Cadastrar Novo Cliente\n");
		fputs("1 - Cadastrar Novo Cliente\n", arq);
        printf("2 - Cliente\n");
		fputs("2 - Cliente\n", arq);
        printf("3 - Excluir Cliente\n");
		fputs("3 - Excluir Cliente\n", arq);
        printf("4 - Cadastrar Pedido\n");
		fputs("4 - Cadastrar Pedido\n", arq);
        printf("5 - Cadastrar Bebidas\n");
     	fputs("5 - Cadastrar Bebidas\n", arq);
        printf("6 - Sabores\n");
		fputs("6 - Sabores\n",arq);
        printf("7 - Cardapio\n");
		fputs("7 - Cardapio\n", arq);
		printf("8 - Pizzaiolos\n");
		fputs("8 - Pizzaiolos\n", arq);
        printf("9 - Excluir Pedido\n");
		fputs("9 - Excluir Pedido\n", arq);
        printf("10 - Reclamacoes\n");
        fputs("10 - Reclamacoes\n", arq);
        printf("11 - Elogios dos Clientes\n");
 		fputs("11 - Elogios dos Clientes\n", arq);
        printf("12 - Promocoes\n");
 		fputs("12 - Promocoes\n", arq);
        printf("13 - Controle de estoque\n");
 		fputs("13 - Controle de estoque\n", arq);
        printf("14 - Relatorios\n");
 		fputs("14 - Relatorios\n", arq);
        printf("15 - Sair\n");
 		fputs("15 - Sair\n", arq);
        printf(" Selecione uma opcao por favor: ");
 		fputs(" Selecione uma opcao por favor: ", arq);
        scanf("%d", &Opcao);fflush(stdin);
        fclose(arq);
		getchar();
        if (Opcao == 1)
        {
            printf("Voce selecionou a opcao 1 - Cadastrar Novo Cliente\n");
            posicao=verifica_pos();

                if ( posicao != -1 )
                {

                    printf("\nEntre com um codigo de 1 a 200 para seu cadastro: \n");
                    scanf("%d",&codaux);fflush(stdin);

                    retorno = verifica_cod( codaux );

                    if ( retorno == 1 )
                        cadastroP( codaux, posicao );
                    else{
                        printf("\nCodigo ja existente ou invalido pressione enter para voltar ao menu principal\n");
                        getchar();
                        system("cls");
                        main();
                    }

                }
                else
                    printf("\nNao e possivel realizar mais cadastros!\n");

                break;
 
        }
        else if (Opcao == 2)
        {
            system("cls");
            do{
            printf("Voce selecionou a opcao 2 - Clientes\n\n");
            printf("1 - Pesquisar cliente por codigo\n");
            printf("2 - Listar todos os clientes\n");
            printf("3 - Voltar ao menu principal\n");
            printf("Selecione uma opcao por favor: ");
            scanf("%d", &OpcaoCliente);fflush(stdin);
            getchar();
                 if(OpcaoCliente == 1){
                    consultaCod();
                }
                else if(OpcaoCliente == 2){
                    list();
                }
                else if(OpcaoCliente == 3){
                    printf("Voce selecionou voltar ao menu principal, pressione ENTER para continuar");
                    getchar();
                    system("cls");
                }
                else
                    printf("Opcao Invalida\n\n");
    }while(OpcaoCliente =! 3 || OpcaoCliente > 3 || OpcaoCliente < 0 || OpcaoCliente == 0);
        }
        else if (Opcao == 3)
        {
            printf("Voce selecionou a opcao 3 - Excluir Cliente\n");
            excluirCliente();
        }
        else if (Opcao == 4)
        {
            printf("Voce selecionou a opcao 4 - Cadastrar Pedido\n");
            cadastroPedido();
        }
        else if (Opcao == 5)
        {
            system("cls");
			printf("Voce selecionou a opcao 5 - Cadastrar Bebidas\n");
             posicao=verifica_pos();

            if ( posicao != -1 ){
			
			retorno = verifica_cod( codaux );
			
			if ( retorno == 1 )
                cadastroB();      
                }
            printf("Digite 2 para consultar as bebidas cadastradas:\n");
			if(listaBb == 2){
				listbeb();
			}
        }
        else if (Opcao == 6)
        {
             system("cls");
			printf("Voce selecionou a opcao 6 - Sabores\n");
             posicao=verifica_pos();

            if ( posicao != -1 ){
			
			retorno = verifica_cod( codaux );
			
			if ( retorno == 1 )
                sabores(); 
    			}
    	}
        else if (Opcao == 7) //cardapio
        {
            system("cls");
			printf("Voce selecionou a opcao 7 - Cardapio\n");
             posicao=verifica_pos();

            if ( posicao != -1 ){
			
			retorno = verifica_cod( codaux );
			
			if ( retorno == 1 )
                cardapio();      
                }
        }
        else if (Opcao == 8) //Pizzaiolos
        {
            printf("Voce selecionou a opcao 8 - Pizzaiolos\n");
    		posicao=verifica_pos();
			if ( posicao != -1 ){
			retorno = verifica_cod( codaux );
			if ( retorno == 1 )
                cadastroPZ();   
                }
		}
	
         if (Opcao == 9)
        {
            printf("Voce selecionou a opcao 9 - Excluir Pedido\n");
    	}
    	else if (Opcao == 10)
        {
         system("cls");
			printf("Voce selecionou a opcao 10 -Reclamacao \n");
             posicao=verifica_pos();

            if ( posicao != -1 ){
			
			retorno = verifica_cod( codaux );
			
			if ( retorno == 1 )
                reclama();
        		}   	
    	}
    	else if (Opcao == 11)
        {
             system("cls");
			printf("Voce selecionou a opcao 11 - Elogios dos Clientes  \n");
            posicao=verifica_pos();
			if ( posicao != -1 ){
			retorno = verifica_cod( codaux );
			if ( retorno == 1 )
              elogios();  
                }
    	}
    	else if (Opcao == 12)
        {
            system("cls");
			printf("Voce selecionou a opcao 12 - Promocoes\n");
			posicao=verifica_pos();
			if ( posicao != -1 ){
			retorno = verifica_cod( codaux );
			if ( retorno == 1 )
              promo();  
                }
    	}
    	else if (Opcao == 13)
        {
            system("cls");
			printf("Voce selecionou a opcao 13 - Controle de Estoque\n");
            posicao=verifica_pos();
            if ( posicao != -1 ){
			retorno = verifica_cod( codaux );
			if ( retorno == 1 )
                controle();      
                }
    	}
    	else if (Opcao == 14)
        {
            printf("Voce selecionou a opcao 14 - Relatorios\n");
     	}
    	else if (Opcao == 15)
        {
            printf("Voce selecionou a opcao 15 - Sair\n");
    		 exit(0);
    	}
        else{
		
            printf("Opcao invalida, favor pressione enter para voltar ao menu principal");
            getchar();
            system("cls");
        }
        }    while (Opcao != 15 || Opcao < 15);

}//fim menu
void list(){ // Lista os usuarios cadastrados.
    int i,j;  
    for(i=0;i<200;i++){
        if(log[i].cod!=NULL){
            printf("\nCodigo: %d \nNome: %s\nCPF: %s\nEndereco: %s\nTelefone: %s\n\n", log[i].cod,log[i].nome,log[i].CPF,log[i].endereco,log[i].telefone);
    }
}
    printf("Pressione enter para volta ao menu principal");
    getchar();
    system("cls");
	menu();
} //FIM DO LIST
void listbeb(){ // Lista todas as bebidas cadastrados.
    int i,j;  
    for(i=0;i<200;i++){
        if(log[i].cod!=NULL){
            printf("\nNome Bebida: %s\n\n", logB[i].nomebeb);
    }
}
    printf("Pressione enter para volta ao menu principal");
    getchar();
    system("cls");
    menu();
} //FIM DA LISTA BEBIDA
void cadastroP(int cod, int pos){ //Cadastro das pessoas
    int i;
    do{
    pos = verifica_pos();
    log[pos].cod = cod;
        printf("\nDigite seu nome: ");
        gets(log[pos].nome);
        printf("\nDigite seu CPF: ");
        gets(log[pos].CPF);
        printf("\nDigite seu Endereco: ");
        gets(log[pos].endereco);
        printf("\nDigite seu Telefone:\n ");
        gets(log[pos].telefone);
        printf("cadastro realizado com sucesso\n");
        log[pos].vazio = 1;
        printf("Pressione enter para volta ao menu principal");
        opt ==1;
        getchar();  
    }while(opt==1);
    system("cls");
    menu();

} // FIM DO CADASTRO DE PESSOAS
void cadastroB(){ //CADASTRO BEBIDAS
	int i;
    do{
		printf("\nDigite o nome da bebida: ");
        gets(logB[i].nomebeb);
        printf("\nDigite o Teor alcoolico: ");
        gets(logB[i].teor);
        printf("\nDigite o preço: ");
        gets(logB[i].preco);
        printf("\nDigite a quantidade:\n ");
        gets(logB[i].qtd);
        printf("\ncadastro realizado com sucesso\n");
        log[i].vazio = 1;
   		printf("Pressione enter para volta ao menu principal");
        opt ==1;
        getchar();  
    }while(opt==1);
    system("cls");
    menu();
}//FIM DO CADASTRO DE BEBIDAS;
void cadastroPZ(){//CADASTRO PIZZAIOLOS
	int i;
    do{
		printf("Digite o seu nome:\n");
        gets(logPZ[i].nome);
		printf("Digite seu CPF:\n");
		gets(logPZ[i].cpf);
		printf("Digite seu telefone:\n");
		gets(logPZ[i].telefone);
		printf("Digite seu endereco:\n");
		gets(logPZ[i].endereco);
		printf("\nCadastro realizado com sucesso:\n");
		log[i].vazio = 1;
   		printf("Pressione enter para volta ao menu principal");
        opt ==1;
        getchar();  
    }while(opt==1);
    system("cls");
    menu();
}//FIM CADASTRO PIZZAIOLOS
void cardapio(){ //CARDAPIO
    do{
		printf("\n1-Mussarela");
        printf("\n2-Calabresa");
        printf("\n3-Portuguesa");
        printf("\n4-Baiana");
        printf("\n5-Frango com requeijao\n");
    	printf("Pressione enter para volta ao menu principal");
        opt ==1;
        getchar();  
    }while(opt==1);
    system("cls");
    menu();
}//FIM CARDAPIO
void sabores(){ //SABORES
    do{
		printf("\n1-Mussarela");
        printf("\n2-Calabresa");
        printf("\n3-Portuguesa");
        printf("\n4-Baiana");
        printf("\n5-Frango com requeijao\n");
   		printf("Pressione enter para volta ao menu principal");
        opt ==1;
        getchar();  
    }while(opt==1);
    system("cls");
    menu();
}//FIM SABORES
void reclama(){ //RECLAMACAO
   int i;
    do{
    	printf("Digite sua Reclamacao:\n");
        gets(logR[i].reclama);
        printf("Reclamacao realizada com sucesso\n");
        gets(logR[i].sucess);
		printf("Pressione enter para volta ao menu principal");
        opt ==1;
        getchar();  
    }while(opt==1);
    system("cls");
    menu();
}//FIM RECLAMACAO
void elogios(){	//ELOGIO
	int i; 
	do{
    	printf("Digite seu Elogio:\n");
        gets(logE[i].elogio); 
        printf("Elogio realizada com sucesso");
        gets(logE[i].sucesso);
		 printf("Pressione enter para volta ao menu principal");
        opt ==1;
        getchar();  
    }while(opt==1);
    system("cls");
    menu();
}//FIM DO ELOGIO
void promo(){ //PROMOCAO 
	int i; 
	do{
		printf("Ao comprar 2 pizza leve um refrigerante de graça");
		printf("Pressione enter para volta ao menu principal");
        opt ==1;
        getchar();  
    }while(opt==1);
    system("cls");
    menu();
}int verifica_pos( void ) //VERIFICADOR DA POSICAO
{
    int cont = 0;

    while ( cont <= 200 )
    {

        if ( log[cont].vazio == 0 )
            return(cont);

        cont++;

    }

    return(-1);

} // FIM DO VERIFICADOR
int verifica_cod( int cod ) // VERIFICADOR DE CODIGO
{
    int cont = 0;

    while ( cont <= 200 )
    {
        if ( log[cont].cod == cod )
            return(0);

        cont++;
    }

    return(1);

} // FIM DO VERIFICADOR
void cadastroPedido(){ //Cadastro dos pedidos
    system("cls");    
    int i;
    int Option;
    int OpcaoPedido;
    char nomeCad[200];
    printf("\nDigite seu nome como esta no cadastro: ");
    gets(nomeCad);
    for(i=0;i<200;i++){
            if(strcmp(log[i].nome, nomeCad)==0){
                do{
                printf("\nEscolha o seu pedido: "); //PEDIDOS MERAMENTE ILUSTRATIVOS, COLOQUEI SO PARA	VER SE CONSEGUIA ANEXAR A 1 CADATRO MAS NAO CONSEGUI.
                printf("\n1- Mussarela:");
                printf("\n2- Calabresa:"); 
                printf("\n3- Portuguesa:");
                printf("\n4- Baiana:");
                printf("\n5- Frango com requeijao;");
                scanf("%d", &OpcaoPedido);fflush(stdin);
                if(OpcaoPedido == 1){
                    strcpy(log[i].clientePed.namePed, "Mussarela");
                    printf("\nVoce escolheu %s, seu pedido foi adicionado ao seu cadastro.",log[i].clientePed.namePed);
                    printf("\nPressione 1 para continuar pedindo ou 2 para volar ao menu principal: ");
                    scanf("%d", &Option);fflush(stdin);
                    i++;
                    getchar();
					system("cls");
                }
                else if(OpcaoPedido == 2){
                    strcpy(log[i].clientePed.namePed, "Calabresa");
                    printf("\nVoce escolheu %s, seu pedido foi adicionado ao seu cadastro.", log[i].clientePed.namePed);
                    printf("\nPressione 1 para continuar pedindo ou 2 para volar ao menu principal: ");
                    scanf("%d", &Option);fflush(stdin);
                    i++;
                    getchar();
					system("cls");
                   }
                   else if(OpcaoPedido == 3){
                    strcpy(log[i].clientePed.namePed, "Portuguesa");
                    printf("\nVoce escolheu %s, seu pedido foi adicionado ao seu cadastro.", log[i].clientePed.namePed);
                    printf("\nPressione 1 para continuar pedindo ou 2 para volar ao menu principal: ");
                    scanf("%d", &Option);fflush(stdin);
                    i++;
                    getchar();
					system("cls");
				}
					else if(OpcaoPedido == 4){
                    strcpy(log[i].clientePed.namePed, "Baiana");
                    printf("\nVoce escolheu %s, seu pedido foi adicionado ao seu cadastro.", log[i].clientePed.namePed);
                    printf("\nPressione 1 para continuar pedindo ou 2 para volar ao menu principal: ");
                    scanf("%d", &Option);fflush(stdin);
                    i++;
                    getchar();
					system("cls");
					}
					else if(OpcaoPedido == 5){
                    strcpy(log[i].clientePed.namePed, "Frango com requeijao");
                    printf("\nVoce escolheu %s, seu pedido foi adicionado ao seu cadastro.", log[i].clientePed.namePed);
                    printf("\nPressione 1 para continuar pedindo ou 2 para volar ao menu principal: ");
                    scanf("%d", &Option);fflush(stdin);
                    i++;
                    getchar();
					system("cls");
                }
    }while(Option == 1);
    system("cls");

   
}
}
} // FIM DO CADASTRO DE PEDIDOS.
void consultaCod (void) // CONSULTAR 1 CADASTRADO QUALQUER VIA CODIGO DADO POR USUARIO.
{
    int cont = 0, cod;

    printf("\nEntre com o codigo\n");
    scanf("%d",&cod);
    fflush(stdin);
    system("cls");

    while ( cont <= 200 )
    {

        if (log[cont].cod==cod)
        {
            if (log[cont].vazio==1)
            {
               
                printf("\nCodigo: %d \nNome: %s\nCPF: %s\nEndereco: %s\nTelefone: %s\n\n", log[cont].cod,log[cont].nome,log[cont].CPF,log[cont].endereco,log[cont].telefone);
               

                system ("pause");

                system("cls");

                break;

            }
        }

        cont++;

        if ( cont > 200 ){
            printf("\nCodigo nao encontrado, pressione enter para volar ao menu principal\n");
            getchar();
            system("cls");
        }

    }
} // FIM DA FUNCAO CONSULTAR
void controle() //CONTROLE DE ESTOQUE;
{
    int opc;
    int i;
    int per;
    float lucro;
    int ven;
    int sair;

    while(opc!=0)
    {
        printf("1-Cadatrar produto\n2-Lucro total\n3-Conferir estoque\n4-Venda\n0-Sair\n");
        scanf("%d", &opc);
        fflush(stdin);
		switch(opc)
        {
        case 1:
            puts("Olá, cadastre um item");

            for(i=0; i<40; i++)
            {
                puts("Nome:");
                gets(logC[i].nome);
                fflush(stdin);
                puts("Código:");
                scanf("%c", &logC[i].cod);
                fflush(stdin);
                puts("Descrição:");
                gets(logC[i].descricao);
                fflush(stdin);
                puts("Quantidade:");
                scanf("%d", &logC[i].qdt);
                fflush(stdin);
                puts("Valor da compra:");
                scanf("%f", &logC[i].compra);
                fflush(stdin);
                puts("Preço:");
                scanf("%f", &logC[i].preco);
                fflush(stdin);

                puts("gostaria de cadastrar outro produto?");
                puts("1-sim\t2-nao");
                scanf("%d", &per);

                if(per!=1)
                {
                    system("cls");
                    printf("finalização de cadastramento de produto\n");
                    break;
                }

                else if(per==1)
                {
                    system("cls");
                }

                fflush(stdin);
            }
            break;

        case 2:
            for(i=0; i<40; i++)
            {
                if(logC[i].venda==0)
                {
                    fflush(stdin);
                    system("cls");
                    printf("Não foi feito nenhuma venda:\n");
                    break;
                  } 

                else if(logC[i].venda>0)
                {
                    fflush(stdin);

                    printf("%.2f", logC[i].venda);
                }   
            }
            break;

        case 3:

            for(i=0;i<40;i++)
            {
                fflush(stdin);

                puts("Código do produto:");
                scanf("%s", &logC[i].cod);
                fflush(stdin);

                if(logC[i].qdt<12)
                {
                    printf("%s", logC[i].nome);
                    fflush(stdin);
                    printf("Produto no fim:\t\t%d\n\n", logC[i].qdt);
                    system("pause");
                }

                else if(logC[i].qdt>11)
                {
                    puts(logC[i].nome);
                    fflush(stdin);
                    printf("Qtd:t\t%d\n\n", logC[i].qdt);
                    system("pause");

                }

                if(logC[i].qdt==0)
                {
                    puts(logC[i].nome);
                    fflush(stdin);
                    printf("Item em falta");
                    system("pause");
                }

                fflush(stdin);

                puts("gostaria de pesquisar outro produto?");
                puts("1-sim\t2-nao");
                scanf("%d", &per);

                if(per!=1)
                {
                    system("cls");
                    printf("finalização de cadastramento de produto\n");
                    break;
                }

                else if(per==1)
                {
                    system("cls");
                }

                fflush(stdin);
            }

            break;

        case 4:

            for(i=0; i<40; i++)
            {
        puts("Código do produto:");
}
}
}
}
void excluirCliente(void)  // EXCLUI CLIENTE
{
    int cod, cont = 0;
    char resp;
    printf("\nEntre com o codigo do registro que deseja excluir: \n");
    scanf("%d", &cod );

    while ( cont <= 200 )
    {

        if ( log[cont].cod == cod )
        {

            if (log[cont].vazio == 1 )
            {
                printf("\nCodigo: %d \nNome: %s\nCPF: %s\nEndereco: %s\nTelefone: %s\n\n", log[cont].cod,log[cont].nome,log[cont].CPF,log[cont].endereco,log[cont].telefone);
                getchar();
                printf("\nDeseja realmente exlucir? s/n: ");
                scanf("%s",&resp);fflush(stdin);

                if ( ( resp == 'S' ) || ( resp == 's' ) )
                {
                    log[cont].vazio=0;
                    log[cont].cod = NULL;
                    printf("\nExclusao feita com sucesso\n");
                    break;
                }
                else
                {
                    if ( ( resp == 'N' ) || ( resp == 'n' ) )
                    {
                        printf("Exclusao cancelada!\n");
                        break;
                    }
                }

            }

        }

        cont++;

        if ( cont > 200 )
            printf("\nCodigo nao encontrado\n");

    }
	

    system("pause");
    system("cls");

}
