#include <iostream>
#include <cstdlib>

using namespace std;

void converte_para_binario(int n)
{
    int dig, valor=1073741824;
    bool mostra=false;
    while (valor>0)
    {
        dig=n/valor;
        if (dig == 1)
        {
            n=n-valor;
            mostra=true;
        }
        if (mostra)
        {
            cout <<dig;
        }
        valor = valor /2;
    }
    cout <<" bin\n";
}

int main()
{
    int n_v,casos=0;
    char linha[100];
    string tipo_entrada;
    cin >>n_v;
    while (n_v--)
    {
        casos ++;
        cin >> linha >> tipo_entrada;
        if (tipo_entrada == "bin")
        {
            cout << "Case " << casos << ":\n";
            int decimal = strtol(linha,NULL,2);
            cout <<decimal << " dec\n";
            cout <<hex <<decimal <<" hex\n" <<dec;
        }
        else if (tipo_entrada == "dec")
        {
            cout << "Case " <<casos <<":\n";
            int decimal = strtol(linha,NULL,10);
            cout <<hex <<decimal <<" hex\n" <<dec;
            converte_para_binario(decimal);
        }
        else if (tipo_entrada == "hex")
        {
            cout << "Case " <<casos <<":\n";
            int decimal = strtol(linha,NULL,16);
            cout << decimal <<" dec\n";
            converte_para_binario(decimal);
        }
        cout << endl;
    }
    return 0;
}
