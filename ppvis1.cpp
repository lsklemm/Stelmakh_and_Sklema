
#include <iostream>
#include <vector>
#include "Header1.h"

using namespace std;

int main()
{

   int x1, y1, w,x2,y2, h;
    /*Rectangle first;

        cin >> x1 >> y1;
        cin >> w >> h;

        first.set_coordinate(x1, y1, w, h);    
        first.display();
        cin >> w >> h;

        first.set_new_param(w, h);
        first.display();
        

        first.min_param();
        first.display();*/

    Rectangle one, two, rez;

    cin >> x1 >> y1 >> x2 >> y2;
    one.set_coordinate(x1, y1, x2, y2);
    one.display();
    

    cin >> x1 >> y1 >> x2 >> y2;
    two.set_coordinate(x1, y1, x2, y2);
    two.display();


    cout << "\nJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ\n";

    rez = one - two;
    rez.display();

    cout << "\nJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ\n";

    one += two;
    one.display();
    return 0;
}
