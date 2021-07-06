#include <iostream>
#include <iomanip>
using namespace std;

static const char sCZKW[] = "Cena za kilogram wynosi ";
static const char sWALUT[] = "zl";

float Ile_ma_produkt(float x, float y)
{
    return (x*1000)/y;
}

float Procenty(float x, float y, float z)
{
    return (x*y)/z;
}

float Ile_za_kl(float gr, float cn)
{
    while(gr <= 0.0 || cn <= 0.0)
    {
        cout<<"Jedna z podanych wartoœci wynosi 0 lub jest ujemne"<<endl;
        cout<<"Podaj wartosc ponownie"<<endl;
        cout<<"Ile gram ma produkt?"<<endl;
        cin>>gr;
        cout<<"Ile kosztuje produkt"<<endl;
        cin>>cn;
    }
    Ile_ma_produkt(gr,cn);
}

void wybor_1(void)
{
    cout<<"Wybrano program numer 1"<<endl;
    cout<<"Ile gram ma produkt?"<<endl;
    float gramy,cena;
    cin>>gramy;
    cout<<"Ile kosztuje produkt"<<endl;
    cin>>cena;
    Ile_za_kl(gramy, cena);
    cout<<sCZKW<<fixed<<Ile_ma_produkt(gramy, cena)<<sWALUT<<endl;
}

void wybor_2(void)
{
    cout<<"Wybrano program numer 1"<<endl;
    cout<<"Ile mililitrow ma produkt?"<<endl;
    float mililitry,cena;
    cin>>mililitry;
    cout<<"Ile kosztuje produkt"<<endl;
    cin>>cena;
    while(cena <= 0.0 || mililitry <= 0.0)
    {
        cout<<"Jedna z podanych wartoœci wynosi 0 lub jest ujemne"<<endl;
        cout<<"Podaj wartosc ponownie"<<endl;
        cout<<"Ile mililitrow ma produkt?"<<endl;
        cin>>mililitry;
        cout<<"Ile kosztuje produkt"<<endl;
        cin>>cena;
    }
    cout<<sCZKW<<fixed<<Ile_ma_produkt(cena,mililitry)<<sWALUT<<endl;
}

void wybor_3(void)
{
    cout<<"Wybrano program numer 3"<<endl;
    float znizka,pelnacena,procent1,rabat;
    cout<<" Podaj %"<<endl;
    cin>>procent1;
    cout<<"Ile kosztuje produkt"<<endl;
    cin>>pelnacena;
    while(procent1 <= 0.0 || pelnacena <= 0.0)
    {
        cout<<"Jedna z podanych wartosci wynosi 0 lub jest ujemne"<<endl;
        cout<<"Podaj wartosc ponownie"<<endl;
        cout<<"Podaj %"<<endl;
        cin>>procent1;
        cout<<"Ile kosztuje produkt"<<endl;
        cin>>pelnacena;
    }
    znizka=(procent1*pelnacena)/100;
    cout<<procent1<<"% "<< "wynosi "<<fixed<<znizka<<sWALUT<<endl;
    rabat=pelnacena-znizka;
    cout<<sCZKW<<fixed<<rabat<<sWALUT<<endl;
}

void wybor_4(void)
{
    cout<<"Wybrano program numer 4"<<endl;
    float procentznizka, produkty, cenakoncowa, gramy, cena, cenazakilogram;
    cout<<"Ile gram ma produkt?"<<endl;
    cin>>gramy;
    cout<<"Ile kosztuje produkt"<<endl;
    cin>>cena;
    cenazakilogram=Ile_za_kl(gramy, cena);
    cout<<"Ile procent znizki zostanie odliczone?"<<endl;
    cin>>procentznizka;
    cout<<"Ile produktow musisz kupic aby otrzymac znizke"<<endl;
    cin>>produkty;
    cenakoncowa=(cenazakilogram*produkty)-(procentznizka*cenazakilogram*produkty)/100;
    cout<<"Cena koncowa wynosi"<<fixed<<cenakoncowa<<sWALUT<<endl;
}

void wybor_5(void)
{
    cout<<"Wybrano program numer 5"<<endl;
    float b,d;
    cout<<"Ile wynosi liczba ktora chcesz sprawdzic"<<endl;
    cin>>b;
    cout<<"Ile wynosi 100%"<<endl;
    cin>>d;
    while(b <= 0.0 || d <= 0.0)
    {
            cout<<"Jedna z podanych wartoœci wynosi 0 lub jest ujemne"<<endl;
            cout<<"Podaj wartosc ponownie"<<endl;
            cout<<"Ile wynosi liczba ktora chcesz sprawdzic"<<endl;
            cin>>b;
            cout<<"Ile wynosi 100%"<<endl;
            cin>>d;
    }
    cout<<b<<" stanowi "<<fixed<<Procenty(b, 100, d)<<"% z liczby "<<d<<endl;
}

void wybor_6(void)
{
    cout<<" Wybrano program numer 6"<<endl;
    float b, c;
    cout<<"Podaj liczbe"<< endl;
    cin>>b;
    cout<<"Ile wynosi %"<<endl;
    cin>>c;
    while(b <= 0.0 || c <= 0.0)
    {
        cout<<"Jedna z podanych wartosci wynosi 0 lub jest ujemne"<<endl;
        cout<<"Podaj wartosc ponownie"<<endl;
        cout<<"Podaj liczbe"<< endl;
        cin>>b;
        cout<<"Ile wynosi %"<<endl;
        cin>>c;
    }
    cout<<"100% wynosi "<<fixed<<Procenty(b, 100, c)<<endl;

}

void wybor_7(void)
{
    cout<<"Wybrano program numer 7"<<endl;
    float c,d;
    cout<<" Podaj %"<<endl;
    cin>>c;
    cout<<"Podaj ile wynosi 100%"<<endl;
    cin>>d;
    while(c <= 0.0 || d <= 0.0)
    {
        cout<<"Jedna z podanych wartosci wynosi 0 lub jest ujemne"<<endl;
        cout<<"Podaj wartosc ponownie"<<endl;
        cout<<" Podaj %"<<endl;
        cin>>c;
        cout<<"Podaj ile wynosi 100%"<<endl;
        cin>>d;
    }
    cout<<c<<"% wynosi "<<fixed<<Procenty(c, d, 100)<<endl;
}

int main()
{
    int wybor;

    cout<<"Czy chcesz aby program liczyl:"<<endl;
    cout<<"1. Jaka cena wychodzi za kilogram"<<endl;
    cout<<"2. Jaka cena wychodzi za litr"<<endl;
    cout<<"3. Ile wynosi rabat oraz jaka cena bedzie po rabacie"<<endl;
    cout<<"4. Promocje typu kup pare a dostaniesz paredziesiat % znizki"<<endl;
    cout<<"5. Jaki procent stanowi konkretna liczba"<<endl;
    cout<<"6. Ile wynosi 100%"<<endl;
    cout<<"7. Ile wynosi dany %"<<endl;
    cout<<"Wybierz: 1,2,3,4,5,6 lub 7"<<endl;
    cout.precision(2);

    cin>> wybor;

    switch(wybor)
    {
        case 1:
	    wybor_1();
	    break;
	case 2:
	    wybor_2();
	    break;
	case 3:
	    wybor_3();
	    break;
	case 4:
	    wybor_4();
	    break;
	case 5:
	    wybor_5();
	    break;
	case 6:
	    wybor_6();
	    break;
	case 7:
	    wybor_7();
	    break;
	default:
	    break;
    }

    return(0);

}

