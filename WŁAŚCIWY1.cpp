#include <iostream>
#include <iomanip>
using namespace std;
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
    cin>> wybor;
    if(wybor==1)
    {
        cout<<"Wybrano program numer 1"<<endl;
        cout<<"Ile gram ma produkt?"<<endl;
        double gramy,cena, cenazakilogram;
        cin>>gramy;
        cout<<"Ile kosztuje produkt"<<endl;
        cin>>cena;
        cenazakilogram=(cena*1000)/gramy;
        cout.precision(2);
        cout<<"Cena za kilogram wynosi"<<" "<<fixed<<cenazakilogram<<"zl"<<endl;


    }
    else if(wybor==2)
    {
        cout<<"Wybrano program numer 1"<<endl;
        cout<<"Ile mililitrow ma produkt?"<<endl;
        double mililitry,cena, cenazalitr;
        cin>>mililitry;
        cout<<"Ile kosztuje produkt"<<endl;
        cin>>cena;
        cenazalitr=(cena*1000)/mililitry;
        cout.precision(2);
        cout<<"Cena za kilogram wynosi"<<fixed<<cenazalitr<<endl;
    }
    else if(wybor==3)
    {
        cout<<"Wybrano program numer 3"<<endl;
        double znizka,pelnacena,procent1;
        cout<<" Podaj %"<<endl;
        cin>>procent1;
        cout<<"Podaj ile kosztuje produkt"<<endl;
        cin>>pelnacena;
        znizka=(procent1*pelnacena)/100;
        cout.precision(3);
        cout<<procent1<<"%"<<" "<< "wynosi"<<" "<<fixed<<znizka<<"zl"<<endl;
        double rabat;
        rabat=pelnacena-znizka;
        cout.precision(3);
        cout<<"Cena po rabacie wyniosi "<<fixed<<rabat<<"zl"<<endl;
    }
    else if(wybor==4)
    {
        cout<<"Wybrano program numer 4"<<endl;
        double cenapoczatkowa,procentznizka, produkty, cenakoncowa;
        cout<<"Ile wynosi cena jednego produktu"<<endl;
        cin>> cenapoczatkowa;
        cout<<"Ile procent znizki zostanie odliczone?"<<endl;
        cin>>procentznizka;
        cout<<"Ile produktow musisz kupic aby otrzymac znizke"<<endl;
        cin>>produkty;
        cenakoncowa=(cenapoczatkowa*produkty)-(procentznizka*(cenapoczatkowa)*produkty)/100;
        cout.precision(2);
        cout<<"Cena koncowa wynosi"<<fixed<<cenakoncowa<<endl;
    }
    if(wybor==5)
    {
        cout<<"Wybrano program numer 5"<<endl;
        float c;
        int b,d;
        cout<<"Ile wynosi liczba ktora chcesz sprawdzic"<<endl;
        cin>>b;
        cout<<"Ile wynosi 100%"<<endl;
        cin>>d;
        c=(b*100)/d;

        cout<<b<<" "<< "stanowi"<<" "<<fixed<<c<<"% z liczby"<<" "<<d<<endl;
    }
    else if(wybor==6)
    {
        cout<<" Wybrano program numer 6"<<endl;
        float d;
        int b,c;
        cout<<"Podaj liczbe"<< endl;
        cin>>b;
        cout<<"Ile wynosi %"<<endl;
        cin>>c;
        if(wybor==c)
        {
            d=(b*100)/b;
            cout.precision(3);
            cout<<"100% wynosi"<<" "<<fixed<<d<<endl;
        }
        else
        {
            d=(b*100)/c;
            cout.precision(3);
            cout<<"100% wynosi"<<" "<<fixed<<d<<endl;
        }


    }
    else if(wybor==7)
    {
        cout<<"Wybrano program numer 7"<<endl;
        float b;
        int c,d;
        cout<<" Podaj %"<<endl;
        cin>>c;
        cout<<"Podaj ile wynosi 100%"<<endl;
        cin>>d;
        b=(c*d)/100;
        cout.precision(3);
        cout<<c<<"%"<<" "<< "wynosi"<<" "<<fixed<<b<<endl;

    }


}
return(0)
