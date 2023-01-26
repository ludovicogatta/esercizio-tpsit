#include<fstream>
#include <iostream>
using namespace std;
//Categoria, Marca, Modello, Colore, L/A, 
struct Auto
{
    string categoria;
    string marca;
    string modello;
    string colore;
    string lunedi, martedi,mercoledi,giovedi,venerdi,sabato,domenica;
    
};
void  stampaf()
{
    string s;
    ifstream fin("auto.txt",ios::in);
    while(!fin.eof())
    {
        getline(fin,s);
        cout<<s<<endl;
    }
    fin.close();
}

void caricamentoVet(Auto vet[])
{
      ifstream fin("auto.txt",ios::in);
    while(!fin.eof())
    {
        for(int i=0;i<7;i++)
        {
            fin>>vet[i].categoria>>vet[i].marca>>vet[i].modello>>vet[i].colore>>vet[i].lunedi>>vet[i].martedi>>vet[i].mercoledi>>vet[i].giovedi>>vet[i].venerdi>>vet[i].sabato>>vet[i].domenica;
            
        }
    }
    fin.close();
    
}

void aggiornaFile(autod auto_vet[])
{
    ofstream fout("auto.txt");
    
    for(int v=0; v<7; v++)
    {
        fout<<endl<<auto_vet[v].categoria<<" "<<auto_vet[v].marca<<" "<<auto_vet[v].modello<<" "<<auto_vet[v].colore<<" ";
        fout<<auto_vet[v].lu<<" "<<auto_vet[v].ma<<" "<<auto_vet[v].me<<" "<<auto_vet[v].gi<<" "<<auto_vet[v].ve<<" "<<auto_vet[v].sa<<" "<<auto_vet[v].dom;
    }
    
    fout.close();
}
void prenota_auto(Auto vet[])
{
    string cat;
    int gio;
    char oc;
    cout<<"scegli bene la categoria dell' auto che vuoi noleggiare: "<<endl;
    cout<<"inserisci la categoria dell' auto scelta:";
    cin>>cat;
    cout<<"inserisci i giorni: ";
    cin>>gio;
  
    

}
    


int main()
{
    Auto vet[14];
    int scelta;
    
    do
    {
        cout<<"\n\nMENU"<<endl;
        cout<<"1) VISUALIZZAZIONE DEL FILE "<<endl;
        cout<<"2)PRENOTA MACCHINA"<<endl;
        cout<<"3)ESCI"<<endl;
        cin>>scelta;
        switch(scelta)
        {
            case 1:
            stampaf();
            break;
            
            case 2:
            break;
            
        }
    }while(scelta!=3);
        
   

    return 0;
}
