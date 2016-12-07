#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Zadajte cislo:" << endl;
    cout<< "Vylepsenie:"<<endl;
	int n,x,c;
    cin >> x;
    if (x > 5){
        cout << "Zadane cislo je vacsie ako 5!" << endl;
    }
    cout << "Pokracujem dalej" << endl;


    cout << "Zadajte cislo,z ktoreho chces urobit odmocninu:" << endl;
    int o;
    cin >> o;
    if(o >= 0){
        double odmocnima = sqrt (o);
        cout << "Odmocnina z cisla " << o << " je: " << odmocnima << endl;
    }else cout << "Zle zadane cislo, cislo je mensie ako nula" << endl;

    cout << "Zadajte cislo medzi 10 a 20" << endl;
    int s;
    cin >> s;
    if(s >= 10 && s <= 20){
        cout << "Zadal si spravne cislo" << endl;
    }else cout << "Zle zadane cislo" << endl;

    cout << "Zadajte cislo medzi 0 a 5 alebo 10 a 20" << endl;
    int q;
    cin >> q;
    if((q >= 10 && q <= 20) || ((q >= 0 && q <= 5))){
        cout << "Zadal si spravne cislo" << endl;
    }else cout << "Zle zadane cislo" << endl;


    return 0;
}
