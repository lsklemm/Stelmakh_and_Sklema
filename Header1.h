#pragma once

#include <vector>
#include <string>
#include <iostream>
#include <cmath>
using namespace std;


class Rectangle {
public:

    void set_coordinate(int n1, int m1, int w, int h) {
        mas_x[0] = n1;
        mas_x[1] = n1;
        mas_x[2] = n1+w;
        mas_x[3] = n1+w;
      

        mas_y[0] = m1;
        mas_y[1] = m1+h;
        mas_y[2] = m1+h;
        mas_y[3] = m1;

        height = abs(h);
        width = abs(w);
        square = height * width;
    }
    
    void set_new_param(int w, int h) {
        height = abs(h);
        width = abs(w);
        square = height * width;

        mas_x[2] = mas_x[0] + w;
        mas_x[3] = mas_x[0] + w;

        mas_y[1] = mas_y[0] + h;
        mas_y[2] = mas_y[0] + h;
    }

    void plus_param() {
        height++; width++;
        square = height * width;
        mas_x[2]++;
        mas_x[3]++;

        mas_y[1]++;
        mas_y[2]++;
    }

    void min_param() {
        height--; width--;
        square = height * width;
        mas_x[2]--;
        mas_x[3]--;

        mas_y[1]--;
        mas_y[2]--;
    }

    void new_start(int n1, int m1) {
        mas_x[0] = n1;
        mas_x[1] = n1;
        mas_x[2] = n1 + width;
        mas_x[3] = n1 + width;


        mas_y[0] = m1;
        mas_y[1] = m1 + height;
        mas_y[2] = m1 + height;
        mas_y[3] = m1;
    }

    int get_x(int n) {
        return mas_x[n];
    }

    int get_y(int n) {
        return mas_y[n];
    }

    int get_height(){
        return height;
    }

    int get_width() {
        return width;
    }

    int get_square() {
        return square;
    }

    void display() {
        cout << "height: "<< get_width() << "\nwidth:  " << get_height() << "\nsquare: " << get_square() << "\n";

        cout << get_width() << "  " << get_height() << "\n";
        for (int i = 0; i < 4; i++) {
            cout << "(" << get_x(i) << "," << get_y(i) << ")\n";
        }
    }

private:
    int mas_x[4], mas_y[4];
    int square;
    int height;
    int width;
};
