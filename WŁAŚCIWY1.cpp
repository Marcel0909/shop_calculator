#include <iostream>
#include <iomanip>
using namespace std;


void wybor_1(void)
{
  cout<<"Wybrano program numer 1"<<endl;
  cout<<"Ile gram ma produkt?"<<endl;
  double gramy,cena, cenazakilogram;
  cin>>gramy;
  cout<<"Ile kosztuje produkt"<<endl;
  cin>>cena;
  while(gramy <= 0 || cena <=0)
      {
          cout<<"Jedna z podanych wartoœci wynosi 0 lub jest ujemne"<<endl;
          cout<<"Podaj wartosc ponownie"<<endl;
          cout<<"Ile gram ma produkt?"<<endl;
          cin>>gramy;
          cout<<"Ile kosztuje produkt"<<endl;
          cin>>cena;
      }
      cenazakilogram=(cena*1000)/gramy;
      cout.precision(2);
      cout<<"Cena za kilogram wynosi"<<" "<<fixed<<cenazakilogram<<"zl"<<endl;
}

void wybor_2(void)
{
    cout<<"Wybrano program numer 1"<<endl;
    cout<<"Ile mililitrow ma produkt?"<<endl;
    double mililitry,cena, cenazalitr;
    cin>>mililitry;
    cout<<"Ile kosztuje produkt"<<endl;
    cin>>cena;
    while(cena <= 0 || mililitry <= 0)
        {
            cout<<"Jedna z podanych wartoœci wynosi 0 lub jest ujemne"<<endl;
            cout<<"Podaj wartosc ponownie"<<endl;
            cout<<"Ile mililitrow ma produkt?"<<endl;
            cin>>mililitry;
            cout<<"Ile kosztuje produkt"<<endl;
            cin>>cena;
        }
        cenazalitr=(cena*1000)/mililitry;
        cout.precision(2);
        cout<<"Cena za litr wynosi"<<fixed<<cenazalitr<<endl;
    }

void wybor_3(void)
{
        cout<<"Wybrano program numer 3"<<endl;
        double znizka,pelnacena,procent1;
        cout<<" Podaj %"<<endl;
        cin>>procent1;
        cout<<"Ile kosztuje produkt"<<endl;
        cin>>pelnacena;
            while(procent1 <= 0 || pelnacena <= 0)
            {
                cout<<"Jedna z podanych wartosci wynosi 0 lub jest ujemne"<<endl;
                cout<<"Podaj wartosc ponownie"<<endl;
                cout<<"Podaj %"<<endl;
                double proecnt1, pelnacena;
                cin>>procent1;
                cout<<"Ile kosztuje produkt"<<endl;
                cin>>pelnacena;
            }
            znizka=(procent1*pelnacena)/100;
            cout.precision(3);
            cout<<procent1<<"%"<<" "<< "wynosi"<<" "<<fixed<<znizka<<"zl"<<endl;
            double rabat;
            rabat=pelnacena-znizka;
            cout.precision(3);
            cout<<"Cena po rabacie wyniosi "<<fixed<<rabat<<"zl"<<endl;
        }

void wybor_4(void)
{
        cout<<"Wybrano program numer 4"<<endl;
        double procentznizka, produkty, cenakoncowa;
        cout<<"Ile gram ma produkt?"<<endl;
        double gramy,cena, cenazakilogram;
        cin>>gramy;
        cout<<"Ile kosztuje produkt"<<endl;
        cin>>cena;
      while(gramy <= 0 || cena <=0)
      {
          cout<<"Jedna z podanych wartoœci wynosi 0 lub jest ujemne"<<endl;
          cout<<"Podaj wartosc ponownie"<<endl;
          cout<<"Ile gram ma produkt?"<<endl;
          double gramy,cena;
          cin>>gramy;
          cout<<"Ile kosztuje produkt"<<endl;
          cin>>cena;
      }
      cenazakilogram=(cena*1000)/gramy;
        cout<<"Ile procent znizki zostanie odliczone?"<<endl;
        cin>>procentznizka;
        cout<<"Ile produktow musisz kupic aby otrzymac znizke"<<endl;
        cin>>produkty;
        cenakoncowa=(cenazakilogram*produkty)-(procentznizka*(cenazakilogram)*produkty)/100;
        cout.precision(2);
        cout<<"Cena koncowa wynosi"<<fixed<<cenakoncowa<<endl;
}

void wybor_5(void)
{
        cout<<"Wybrano program numer 5"<<endl;
        float c;
        int b,d;
        cout<<"Ile wynosi liczba ktora chcesz sprawdzic"<<endl;
        cin>>b;
        cout<<"Ile wynosi 100%"<<endl;
        cin>>d;
        if(b <= 0 || d <= 0)
        {
            cout<<"Jedna z podanych wartosci wynosi 0 lub jest ujemne"<<endl;
            cout<<"Podaj wartosc ponownie"<<endl;
            cout<<"Ile mililitrow ma produkt?"<<endl;
            float c,b,d;
            cout<<"Ile wynosi liczba ktora chcesz sprawdzic"<<endl;
            cin>>b;
            cout<<"Ile wynosi 100%"<<endl;
            cin>>d;
            while(b <= 0 || d <= 0)
                {
                    cout<<"Jedna z podanych wartoœci wynosi 0 lub jest ujemne"<<endl;
                    cout<<"Podaj wartosc ponownie"<<endl;
                    float c,b,d;
                    cout<<"Ile wynosi liczba ktora chcesz sprawdzic"<<endl;
                    cin>>b;
                    cout<<"Ile wynosi 100%"<<endl;
                    cin>>d;
            }
            c=(b*100)/d;
            cout.precision(2);
            cout<<b<<" "<< "stanowi"<<" "<<fixed<<c<<"% z liczby"<<" "<<d<<endl;
        }
        else
        {
             c=(b*100)/d;
             cout.precision(2);
             cout<<b<<" "<< "stanowi"<<" "<<fixed<<c<<"% z liczby"<<" "<<d<<endl;
        }
}

void wybor_6(void)
{
        cout<<" Wybrano program numer 6"<<endl;
        float d,b,c;
        cout<<"Podaj liczbe"<< endl;
        cin>>b;
        cout<<"Ile wynosi %"<<endl;
        cin>>c;
            while(b <= 0 || c <= 0)
            {
                cout<<"Jedna z podanych wartosci wynosi 0 lub jest ujemne"<<endl;
                cout<<"Podaj wartosc ponownie"<<endl;
                float d,b,c;
                cout<<"Podaj liczbe"<< endl;
                cin>>b;
                cout<<"Ile wynosi %"<<endl;
                cin>>c;
            }
            if(b == c)
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


void wybor_7(void)
{
        cout<<"Wybrano program numer 7"<<endl;
        float b,c,d;
        cout<<" Podaj %"<<endl;
        cin>>c;
        cout<<"Podaj ile wynosi 100%"<<endl;
        cin>>d;
            while(c <= 0 || d <= 0)
            {
                cout<<"Jedna z podanych wartosci wynosi 0 lub jest ujemne"<<endl;
                cout<<"Podaj wartosc ponownie"<<endl;
                float b,c,d;
                cout<<" Podaj %"<<endl;
                cin>>c;
                cout<<"Podaj ile wynosi 100%"<<endl;
                cin>>d;
            }
            b=(c*d)/100;
            cout.precision(3);
            cout<<c<<"%"<<" "<< "wynosi"<<" "<<fixed<<b<<endl;
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

