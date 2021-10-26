
#include <iostream>
#include <vector>
#include "Header1.h"

using namespace std;
int action;

void menu() ///MENU
{        
    system("pause");
    system("cls");
    cout << "Choose action:\n1)Create rectangle\n2)View coordinates\n3)Move rectangle\n4)Change parametr\n5)Parametr++\n6)Parametr--\n7)Smaller(+)\n8)Smaller(+=)\n9)Intersection(-)\n10)Intersection(-=)\n0)Exit";
    cout << "\n";
    cin >> action;
}

int main() ///MAIN
{

    int x1, y1, w, x2, y2, h;
    Rectangle one, two, rez;

    menu();

   while (action != 0) {
    
        switch (action) {
        case 1:
            cout << "--- Creating first rectangle ---\n";
            cout << "Print first coordinates:\n";
            cin >> x1 >> y1;
            cout << "Print second coordinates:\n";
            cin >> x2 >> y2;

            one.set_coordinate(x1, y1, x2, y2);
            menu();
            break;

        case 2:

            cout << "\n---------------- First-Rectangle ----------------------\n\n";
            one.display();

                
            cout << "\n---------------- Second-Rectangle ----------------------\n\n";
            two.display();


            cout << "\n---------------- Rezult-Rectangle ----------------------\n\n";
            rez.display();

            menu();
            break;

        case 3:
            cout << "--- Changing strat position ---\n";
            cout << "Print new start:\n";
            cin >> x1 >> y1;
            one.new_start(x1, y1);
            menu();
            break;

        case 4:
            cout << "--- Changing width & height ---\n";
            cout << "Print new width:\n";
            cin >> w;
            cout << "Print new height:\n";
            cin >> h;
            one.set_new_param(w, h);
            menu();
            break;

        case 5:
            cout << "--- Width++ & Height++ ---\n";
            one.plus_param();
            cout << "\n---------------- First-Rectangle ----------------------\n\n";
            one.display();
            menu();
            break;

        case 6:
            cout << "--- Width-- & Height-- ---\n";
            one.min_param();
            cout << "\n---------------- First-Rectangle ----------------------\n\n";
            one.display();
            menu();
            break;

        case 7:
            cout << "--- Creating second rectangle ---\n";
            cout << "Print first coordinates:\n";
            cin >> x1 >> y1;
            cout << "Print second coordinates:\n";
            cin >> x2 >> y2;

            two.set_coordinate(x1, y1, x2, y2);

            cout << "--- Creating smaller rectangle ---\n";
            rez = one + two;
            

            cout << "\n---------------- Rezult-Rectangle ----------------------\n\n";
            rez.display();
            menu();
            break;

        case 8:
            cout << "--- Creating second rectangle ---\n";
            cout << "Print first coordinates:\n";
            cin >> x1 >> y1;
            cout << "Print second coordinates:\n";
            cin >> x2 >> y2;

            two.set_coordinate(x1, y1, x2, y2);

            cout << "--- Creating smaller rectangle ---\n";
            one += two;

            cout << "\n---------------- Rezult-Rectangle ----------------------\n\n";
            two.display();
            menu();
            break;

        case 9:
            cout << "--- Creating second rectangle ---\n";
            cout << "Print first coordinates:\n";
            cin >> x1 >> y1;
            cout << "Print second coordinates:\n";
            cin >> x2 >> y2;

            two.set_coordinate(x1, y1, x2, y2);

            cout << "--- Creating intersection ---\n";
            rez = one - two;

            cout << "\n---------------- Rezult-Rectangle ----------------------\n\n";
            rez.display();
            menu();
            break;

        case 10:
            cout << "--- Creating second rectangle ---\n";
            cout << "Print first coordinates:\n";
            cin >> x1 >> y1;
            cout << "Print second coordinates:\n";
            cin >> x2 >> y2;

            two.set_coordinate(x1, y1, x2, y2);

            cout << "--- Creating intersection ---\n";
            one -= two;

            cout << "\n---------------- Rezult-Rectangle ----------------------\n\n";
            one.display();
            menu();
            break;       
        }
    }

    return 0;
}
