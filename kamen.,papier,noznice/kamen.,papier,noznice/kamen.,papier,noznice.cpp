#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <conio.h>
using namespace std;

int main()
{
	cout << "\t\t\t\t";
	for (int i = 0; i < 55; i++) {
		cout << "+";
	}
	cout << endl;
	cout << "\t\t\t\t";
	cout << "\t Vitajte v hre Kamen, Papier, Noznice" << endl;
	cout << "\t\t\t\t";
	for (int i = 0; i < 55; i++) {
		cout << "+";
	}
	cout << endl;
	string player_name; //zadanie mena hráèa
	cout << "Zadaj svoje meno : ";
	cin >> player_name;
	int rounds; // zadáme kolko kôl chceme hrat
	cout << player_name << " Kolko kol chces hrat? : ";
	cin >> rounds;
	int player_score = 0, computer_score = 0; //score
	for (int round = 1; round<=rounds; round++)
	{
		system("cls"); //vyèistí obrazovku
		int player_choice, computer_choice;
		cout << "Kolo cislo : " << round << "/" << rounds << endl;
		cout << player_name << " Skore = " << player_score << endl;
		cout << "Skore Pocitaca = " << computer_score << endl;
		cout << "1. Kamen" << endl;
		cout << "2. Papier" << endl;
		cout << "3. Noznice" << endl;
		do {
		    cout << "Zadaj co chces pouzit : ";
		    cin >> player_choice;
		} while (player_choice != 1 && player_choice != 2 && player_choice != 3);
		srand (time(0)); //náhodné èísla
		computer_choice = (rand() % 3) + 1;
		if(player_choice == 1 && computer_choice == 3)
		{
			cout << "Vyhravas!" << endl;
			player_score++;
		}
		else if (player_choice == 2 && computer_choice == 1)
		{
			cout << "Vyhravas!" << endl;
			player_score++;
		}
		else if(player_choice == 3 && computer_choice == 2)
		{
			cout << "Vyhravas!" << endl;
			player_score++;
		}
		else if (player_choice == computer_choice)
		{
			cout << "Je to remiza!" << endl;
		}
		else 
		{
			cout << "Pocitac vyhral!" << endl;
			computer_score++;
		}
		cout << "Zmackni nejake tlacidlo aby si pokracoval..." << endl;
		_getch(); //aby sa hned po odpovedi nepreskocil vysledok
	} 
	     
    if(computer_score == player_score)
	{
		cout << "\t\t\t\t";
		for (int i = 0; i < 55; i++) {
			cout << "-";
		}
		cout << endl;
		cout << "\t\t\t\t";
		cout << "\t Hra skoncila, je to REMIZA!" << endl;
		cout << "\t\t\t\t";
		for (int i = 0; i < 55; i++) {
			cout << "-";
		}
		_getch();
		
		
	}
	else if(player_score > computer_score)
	{
		cout << "\t\t\t\t";
		for (int i = 0; i < 55; i++) {
			cout << "-";
		}
		cout << endl;
		cout << "\t\t\t\t";
		cout << "\t Koniec hry.Vyhral si! GG!" << endl;
		cout << "\t\t\t\t";
		for (int i = 0; i < 55; i++) {
			cout << "-";
		}
		_getch();
	}
	else
	{
		cout << "\t\t\t\t";
		for (int i = 0; i < 55; i++) {
			cout << "-";
		}
		cout << endl;
		cout << "\t\t\t\t";
		cout << "\t Pocitac vyhral hru! Snad nabuduce." << endl;
		cout << "\t\t\t\t";
		for (int i = 0; i < 55; i++) {
			cout << "-";
		}
		_getch();
		
	}
	system("cls"); //vyèistí obrazovku
	 cout << "\t\t\t\t";
	 for (int i = 0; i < 55; i++) {
		 cout << "+";
	 }
	 cout << endl;
	 cout << "\t\t\t\t";
	 cout << "\t Hra skoncila dakujem za hranie! " << endl;
	 cout << "\t\t\t\t";
	 for (int i = 0; i < 55; i++) {
		 cout << "+";
	 }
    return 0;
}
