#include <iostream>
#include <vector>
#include "Header1.h"

using namespace std;

int main()
{
    vector<pair<int, int>> mas;

    int x1, y1, w, h;
    Rectangle first;

        cin >> x1 >> y1;
        cin >> w >> h;

        first.set_coordinate(x1, y1, w, h);    
        first.display();
        cin >> w >> h;

        first.set_new_param(w, h);
        first.display();
        

        first.min_param();
        first.display();

    return 0;
}
