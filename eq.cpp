#include <iostream>
#include <conio.h>
#include "eq.h"
#include <string>

using namespace std;

struct Diabolo{
    int Moc = 28;
    int HP = 150;
    int Mana = 150;
    int Wiedza = 9; // odjecie
    int Pancerz_sieczne = 25;
    int Pancerz_obuchowe = 25;
    int Pancerz_klute = 25;
};

struct Czacha{
    int Moc = 18;
    int Wiedza = 14;
    int HP = 130;
    int Mana = 40;
    int Pancerz_sieczne = 25;
    int Pancerz_obuchowe = 25;
    int Pancerz_klute = 25;
};

struct Wzorek{
    int Moc = 4;
    int Wiedza = 20;
    int Hp = 140;
    int Mana = 110;
    int Pancerz_sieczne = 25;
    int Pancerz_obuchowe = 25;
    int Pancerz_klute = 25;
};

struct Berglisy{
    int Moc = 12;
    int Wiedza = 18;
    int HP = 240;
    int Mana = 60;
};

struct Nurthil{
    int Moc = 39;
    int Wiedza = 24;
    int HP = 90; // ODEJMOWANIE
    int Mana = 50; // ODEJMOWANIE
    int Odpornosc_ogien = 20;
};

struct Thorrimy{
    int Moc = 9;
    int Wiedza = 20;
    int HP = 160;
    int Mana = 40;
    int Pancerz_sieczne = 30;
    int Pancerz_obuchowe = 30;
    int Pancerz_klute = 30;
    int Odpornosc_zimno = 30; 
};

void menu(){
    char znak;
    do{
        system("cls");
        cout << "Kalkulator Broken Ranks";
        cout << "1. Oblicz powera\n";
        cout << "2. Wyjscie\n";
        cout << "Wybierz opcje: ";
        znak = getch();

        switch(znak){
            case '1':
                menu_helm();
                break;
            case '2':
                system("exit");
                break;
            default:
                system("cls");
                cout << "NIE MA TAKIEJ OPCJI";
                Sleep(1500);
        } 
    }while(znak != '2');
}


void menu_helm(){
    char zdk;
    do{
        system("cls");
        cout << "To JEST TYLKO TESTOWY WYBOR\n\n";
        cout << "Wybierz Helm\n";
        cout << "1. Czacha\n";
        cout << "2. Powrot\n\n";
        cout << "Wybierz opcje: ";
        zdk = getch();

        switch(zdk){
            case '1':
                menu_zbroja();
                break;
            case '2':
                menu();
                break;
            default:
                system("cls");
                cout << "NIE MA TAKIEJ OPCJI";
                Sleep(1500);
        }
    }while(zdk != '1' && zdk != '2');
}


void menu_zbroja(){
    char xxx;
    do{
        system("cls");
        cout << "Wybierz Zbroje\n\n";
        cout << "1. Diabolo\n";
        cout << "2. Powrot\n\n";
        cout << "Wybierz opcje: ";
        xxx = getch();

        switch(xxx){
            case '1':
                break;
            default:
                system("cls");
                cout << "NIE MA TAKIEJ OPCJI";
                Sleep(1500);
        }
    }while(xxx != 2);
}