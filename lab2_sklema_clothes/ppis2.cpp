#include <iostream>
#include <string>
#include "clothes.h"

using namespace std;
using namespace ShopSpace;


int main() {
	setlocale(LC_ALL, "Rus");
	Dress firstclothes("Zara", 120);

	firstclothes.printKategorii();
	ShopSpace::PrintInfo(firstclothes);

	Short secondclothes("Bershka", 60);

	secondclothes.printKategorii();

	cout << "Бренд:" << secondclothes.GetBrend() << endl;
	cout << "Цена (бел.руб) :" << secondclothes.GetZena() << endl;

	cout << "____________________" << endl;
	Trousers thirdclothes("Stradivarius", 87);

	thirdclothes.printKategorii();

	cout << "Бренд:" << thirdclothes.GetBrend() << endl;
	cout << "Цена (бел.руб) :" << thirdclothes.GetZena() << endl;


	cout << "____________________" << endl;

	Jeans fourthclothes("GloriaJeans", 147);

	fourthclothes.printKategorii();

	cout << "Бренд:" << fourthclothes.GetBrend() << endl;
	cout << "Цена (бел.руб) :" << fourthclothes.GetZena() << endl;

	cout << "____________________" << endl;

	T_Shirt fifthclothes("Levis", 200);

	fifthclothes.printKategorii();

	cout << "Бренд:" << fifthclothes.GetBrend() << endl;
	cout << "Цена (бел.руб) :" << fifthclothes.GetZena() << endl;

	cout << "____________________" << endl;

	Jumpsuit sixthclothes("Podval", 5);

	sixthclothes.printKategorii();

	cout << "Бренд:" << sixthclothes.GetBrend() << endl;
	cout << "Цена (бел.руб) :" << sixthclothes.GetZena() << endl;

	cout << "____________________" << endl;

	Suit seventhclothes("Prada", 10101010);

	seventhclothes.printKategorii();

	cout << "Бренд:" << seventhclothes.GetBrend() << endl;
	cout << "Цена (бел.руб) :" << seventhclothes.GetZena() << endl;

	cout << "____________________" << endl;

	Transformer eighthclothes("Tvoe", 1010);

	eighthclothes.printKategorii();

	cout << "Бренд:" << eighthclothes.GetBrend();
	cout << "Цена (бел.руб) :" << eighthclothes.GetZena() << endl;

	return 0;

}

