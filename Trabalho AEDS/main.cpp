#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <exception>

using namespace std;

// CLASSE DATA
class Data
{
private:
    int dia;
    int mes;
    int ano;

public:

//Leva valores
    void setDia(int dia)
    {
        this->dia = dia;
    }

    void setMes(int mes)
    {
        this->mes = mes;
    }

    void setAno(int ano)
    {
        this->ano = ano;
    }

    void setData(int dia, int mes, int ano)
    {
        setDia(dia);
        setMes(mes);
        setAno(ano);
    }

    void LeiaData()
    {
        int dia, mes, ano;

        do {
            printf("\n [dd/mm/aaaa]: ");
            scanf("%i/%i/%i", &dia, &mes, &ano);
            if (dia < 0 || dia > 31 || mes > 12 || mes < 0 || ano < 1900) {
                printf("\n\a DATA INVALIDA \n");
            }
        } while (dia < 0 || dia > 31 || mes > 12 || mes < 0 || ano < 1900);

        setData(dia, mes, ano);
    }


//Pega valores
    int getDia()
    {
        return dia;
    }

    int getMes()
    {
        return mes;
    }

    int getAno()
    {
        return ano;
    }

    void escreveData()
    {
        printf("%i/%i/%i", getDia(), getMes(), getAno());
    }
};


// CLASSE PESSOA


class Pessoa
{
private:
    char nome[50];
    Data nascimento;

public:

// CONSTRUTORES
    static int p;

    Pessoa(char nome[], int dia, int mes, int ano)
    {
        setNome(nome);
        nascimento.setData(dia, mes, ano);
    }

    Pessoa() {}

    ~Pessoa() {}

//LEVA VALORES

    void setNome(char nome[])
    {
        this->nome[50]=nome[50];
    }

    void setNascimento(int dia, int mes, int ano)
    {
        nascimento.setData(dia, mes, ano);
    }

    void LeiaPessoa()
    {
        cin.ignore();
        cout << "\n Nome: ";
        cin.getline(nome, 50);
        cout << "\n Data de Nascimento: ";
        nascimento.LeiaData();
    }


// PEGA VALORES

    char* getNome()
    {
        return nome;
    }

    Data getNascimento()
    {
        return nascimento;
    }

   virtual void escrevePessoa()
    {
        cout << "\n Nome: " << nome;
        cout << "\n Nascimento: ";
        nascimento.escreveData();
    }

    bool Aniversariante(int mes)
    {
        bool aniversariante= false;

       if(nascimento.getMes()== mes){aniversariante= true;}

        return aniversariante;

    }
};

//Classe Aluno
class Aluno: public Pessoa
{
private:
    int matricula;

public:

    static int a;
    Aluno(){}
    ~Aluno(){}


    void setMatricula(int matricula)
    {
        this->matricula=matricula;
    }

    int getMatricula()
    {
        return matricula;
    }

    void LerMatricula()
    {
        int matricula;

         LeiaPessoa();
       do{
        cout<< "\n Student ID: ";
        scanf("%i",&matricula);
        if(matricula<999){cout<< "\n\a ID INVALIDO ";}
       }while(matricula<999);
       setMatricula(matricula);


    }

    void escrevePessoa() override
    {
        Pessoa::escrevePessoa();
        printf("\n Student ID: %i\n", matricula);


    }




};
//CLASSE PROFESSOR

class Professor: public Pessoa
{
private:
    char titulo[50];

public:

    static int f;
    Professor(){}
    ~Professor(){}

    void setTitulo(char titulo[])
    {
        this->titulo[50]=titulo[50];
    }

    char* getTitulo()
    {
        return titulo;
    }

    void LerTitulo()
    {


         LeiaPessoa();
         cin.ignore();

         cout<< " Titulo: ";
         cin.getline(titulo, 50);
         setTitulo(titulo);





    }


    void escrevePessoa() override
    {
        Pessoa::escrevePessoa();
        cout << "\n Titulo: " << getTitulo() << endl;

    }
};

//coisas
int Pessoa::p = 0;
int Aluno::a=0;
int Professor:: f=0;

void listaPessoa(Pessoa* pessoa[]);
void novaPessoa(Pessoa* pessoa[]);
const int TAM = 100;

int menu()
{
    cout << "------------------------ \n";
    int opcao;

    do {
        puts("\n Menu Opcoes\n\n");
        puts("\n 0-Sair");
        puts("\n 1-Cadastrar Aluno");
        puts("\n 2-Cadastrar Professor");
        puts("\n 3-Listar Aluno");
        puts("\n 4-Listar Professor");
        puts("\n 5-Listar Todos os Aniversariantes");
        puts("\n 6-Deletar usuario");

        printf("\n\n Sua Opcao:");
        scanf("%i", &opcao);
    } while (opcao < 0 || opcao > 6 );

    return opcao;
}


//LISTAR
void listaProfessor (Professor* Professor[])
{
    if(Professor::f==0){cout << "\n\a NENHUM PROFESSOR CADASTRADO\n";}


    for(int i=0; i< Professor::f; i++)
    {
        Professor[i]->escrevePessoa();


    }

}

void listaAluno( Aluno* aluno[])
{   if(Aluno::a == 0){cout << "\n\a NENHUM ALUNO CADASTRADO\n";}

    for (int i = 0; i < Aluno::a; i++)
    {
        aluno[i]->escrevePessoa();


    }
}

void listaPessoa(Pessoa* pessoa[])
{   if(Pessoa::p == 0){cout << "\n\a NENHUMA PESSOA CADASTRADA\n";}

    for (int i = 0; i < Pessoa::p; i++)
    {
        pessoa[i]->escrevePessoa();
    }
}

void listarAniversariante(Aluno* aluno[],Professor* professor[])
{
    int niver=0;
    int mes;
    printf("\n Indique o Mes[1-12]: ");
    do{
    scanf("%i",&mes);
    if( mes > 12 || mes < 0){printf("\n\a MES INVALIDO");}
    }while( mes > 12 || mes < 0);

    for (int i = 0; i < Aluno::a ; i++)
    {
        if(aluno[i]->Aniversariante(mes)==true)
        {
            aluno[i]->escrevePessoa();
            cout << endl;
            niver++;
        }
    }

    for (int i = 0; i < Professor::f ; i++)
    {
        if (professor[i]->Aniversariante(mes)==true)
        {
            professor[i]->escrevePessoa();
            cout << endl;
            niver++;
        }
    }
    cout<<" Total de Aniversariantes: "<< niver << endl;

}


//CRIAR

void novaPessoa(Pessoa* pessoa[])
{
    pessoa[Pessoa::p] = new Pessoa();
    pessoa[Pessoa::p]->LeiaPessoa();
    Pessoa::p++;

}
void novoAluno(Aluno* aluno[])
{
    try{
    aluno[Aluno::a]= new Aluno();
    aluno[Aluno::a]->LerMatricula();

    Aluno::a++;

    }catch (const std::bad_alloc& e)
    {
        std::cerr << "Erro na Criação de Aluno(" << e.what() << ")" << std::endl;
    }


}
void novoProfessor(Professor* professor[]) {
   try {
      professor[Professor::f] = new Professor();
      professor[Professor::f]->LerTitulo();

      Professor::f++;
   } catch (const std::bad_alloc& e) {
      std::cerr << "Erro na Criação de Professor(" << e.what() << ")" << std::endl;

   }
}



//DELETAR
void deletaPessoa(Pessoa* pessoa[])
{
     if (Pessoa::p > 0)
    {

        delete pessoa[Pessoa::p-1];
        Pessoa::p--;
        cout<< "\n PESSOA DELETADA\n";
    }
    else
    {
        cout << "\n\a NENHUMA PESSOA CADASTRADA\n" ;
    }
}
void deletaAluno(Aluno* aluno[])
{
     if (Aluno::a > 0)
    {

        delete aluno[Aluno::a-1];
        Aluno::a--;
        cout<< "\n    ALUNO [" << Aluno::a+1 << "] DELETADO\n";
    }
    else
    {
        cout << "\n\a    NENHUM ALUNO CADASTRADO\n" ;
    }
}
void deletaProfessor(Professor* professor[])
{
     if (Professor::f > 0)
    {

        delete professor[Professor::f-1];
        Professor::f--;
        cout << "\n    PROFESSOR [" << Professor::f+1 << "] DELETADO\n";

    }
    else
    {
        cout << "\n\a    NENHUM PROFESSOR  CADASTRADO\n" ;
    }
}

void escolhaDeleta(Aluno* aluno[],Professor* professor[])
{
    int deleta;

   do{
    cout<<"\n    Qual vc quer deletar ALUNO[1] ou PROFESSOR[2]?:";
    scanf("%i",&deleta);

    if(deleta==1){deletaAluno(aluno);}
    if(deleta==2){deletaProfessor(professor);}
    if(deleta!=1 && deleta!=2){cout<< "\n\a ESCOLHA INVALIDA\n";}


    }while(deleta!=1 && deleta!=2);





}

//MAIN
int main()
{
    Aluno* aluno[TAM];
    Professor* professor[TAM];

    int op;

    do {
        op = menu();

        switch (op)
        {
        case 0:
            puts("\n VAZA");
            break;

        case 1:
            novoAluno(aluno);
            break;

        case 2:
            novoProfessor(professor);
            break;
        case 3:
            listaAluno(aluno);
            break;
        case 4:
            listaProfessor(professor);
            break;
        case 5:
            listarAniversariante(aluno,professor);
        case 6:
            escolhaDeleta(aluno,professor);

        }

    } while (op != 0);

    return 0;
}
