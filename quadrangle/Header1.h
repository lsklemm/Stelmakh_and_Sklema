#pragma once

#include <vector>
#include <string>
#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;


class Rectangle {
public:
    Rectangle() 
    {
        mas_x[0] = 0, mas_x[1] = 0, mas_x[2] = 0, mas_x[3] = 0;
        mas_y[0] = 0, mas_y[1] = 0, mas_y[2] = 0, mas_y[3] = 0;
        square = 0; height = 0; width = 0;
    } ///constructor for rectangle

    void set_coordinate(int n1, int m1, int n2, int m2) 
    {
        mas_x[0] = n1;
        mas_x[1] = n1;
        mas_x[2] = n2;
        mas_x[3] = n2;
      

        mas_y[0] = m1;
        mas_y[1] = m2;
        mas_y[2] = m2;
        mas_y[3] = m1;

        height = abs(m2-m1);
        width = abs(n2-n1);
        square = height * width;
    }///set start coordinates
    
    void set_new_param(int w, int h) {
        height = abs(h);
        width = abs(w);
        square = height * width;

        mas_x[2] = mas_x[0] + w;
        mas_x[3] = mas_x[0] + w;

        mas_y[1] = mas_y[0] + h;
        mas_y[2] = mas_y[0] + h;
    }///set new height & width

    void plus_param() {
        height++; width++;
        square = height * width;
        mas_x[2]++;
        mas_x[3]++;

        mas_y[1]++;
        mas_y[2]++;
    } /// set params++

    void min_param() {
        height--; width--;
        square = height * width;
        mas_x[2]--;
        mas_x[3]--;

        mas_y[1]--;
        mas_y[2]--;
    } ///set params--

    void new_start(int n1, int m1) {
        mas_x[0] = n1;
        mas_x[1] = n1;
        mas_x[2] = n1 + width;
        mas_x[3] = n1 + width;


        mas_y[0] = m1;
        mas_y[1] = m1 + height;
        mas_y[2] = m1 + height;
        mas_y[3] = m1;
    } ///set new start

    int get_x(int n) {
        return mas_x[n];
    } ///return x

    int get_y(int n) {
        return mas_y[n];
    } ///return y

    int get_height(){
        return height;
    } ///return height

    int get_width() {
        return width;
    }///return width

    int get_square() {
        return square;
    }///return square

    void display() {
 
        cout << "height: "<< get_width() << "\nwidth:  " << get_height() << "\nsquare: " << get_square() << "\n";
        for (int i = 0; i < 4; i++) {
            cout << "(" << get_x(i) << "," << get_y(i) << ")\n";
        }
        cout << "\n";
        if (get_square() == 0) { cout << "it is now a rectangle\n";
        }
    }///show all coordinates

private:
    int mas_x[4], mas_y[4];
    int square;
    int height;
    int width; 
};



Rectangle operator+ (Rectangle first, Rectangle second) {
    if (first.get_square() >= second.get_square()) {
        return second;
    }
    else
    {
        return first;
    }
} ///create new smaller rectangle

Rectangle operator- (Rectangle first, Rectangle second) {
    Rectangle fin;
    int max_x, max_y, min_x, min_y;
    int sw1, sw2, sh1, sh2;
    max_x = max(max(first.get_x(0), first.get_x(3)), max(second.get_x(0), second.get_x(3)));
    min_x = min(min(first.get_x(0), first.get_x(3)), min(second.get_x(0), second.get_x(3)));
    sw1 = abs(min(first.get_x(0), first.get_x(3)) - min(second.get_x(0), second.get_x(3)));
    sw2 = abs(max(first.get_x(0), first.get_x(3)) - max(second.get_x(0), second.get_x(3)));


    max_y = max(max(first.get_y(0), first.get_y(1)), max(second.get_y(0), second.get_y(1)));
    min_y = min(min(first.get_y(0), first.get_y(1)), min(second.get_y(0), second.get_y(1)));
    sh1 = abs(min(first.get_y(0), first.get_y(1)) - min(second.get_y(0), second.get_y(1)));
    sh2 = abs(max(first.get_y(0), first.get_y(1)) - max(second.get_y(0), second.get_y(1)));
    
    if (max(first.get_x(0), first.get_x(3)) < min(second.get_x(0), second.get_x(3))){ cout << "rectangles: we haven't got an intersection";}
    else if (min(first.get_x(0), first.get_x(3)) > max(second.get_x(0), second.get_x(3))) { cout << "rectangles: we haven't got an intersection"; }
    else if (max(first.get_y(0), first.get_y(1)) < min(second.get_y(0), second.get_y(1))) { cout << "rectangles: we haven't got an intersection"; }
    else if (min(first.get_y(0), first.get_y(1)) > max(second.get_y(0), second.get_y(1))) { cout << "rectangles: we haven't got an intersection"; }
    else {

        fin.set_coordinate(min_x + sw1, min_y + sh1, max_x - sw2, max_y - sh2);
        
    }
    return fin;
} ///create new intersection

Rectangle& operator+=(Rectangle& first, Rectangle& second) {

    if (first.get_square() >= second.get_square()) {
        first = second;
    }
    else {
        return first;
    }
} ///rename first to smaller

Rectangle& operator-= (Rectangle& first, Rectangle& second) {

    Rectangle fin;
    int max_x, max_y, min_x, min_y;
    int sw1, sw2, sh1, sh2;
    max_x = max(max(first.get_x(0), first.get_x(3)), max(second.get_x(0), second.get_x(3)));
    min_x = min(min(first.get_x(0), first.get_x(3)), min(second.get_x(0), second.get_x(3)));
    sw1 = abs(min(first.get_x(0), first.get_x(3)) - min(second.get_x(0), second.get_x(3)));
    sw2 = abs(max(first.get_x(0), first.get_x(3)) - max(second.get_x(0), second.get_x(3)));


    max_y = max(max(first.get_y(0), first.get_y(1)), max(second.get_y(0), second.get_y(1)));
    min_y = min(min(first.get_y(0), first.get_y(1)), min(second.get_y(0), second.get_y(1)));
    sh1 = abs(min(first.get_y(0), first.get_y(1)) - min(second.get_y(0), second.get_y(1)));
    sh2 = abs(max(first.get_y(0), first.get_y(1)) - max(second.get_y(0), second.get_y(1)));

    if (max(first.get_x(0), first.get_x(3)) < min(second.get_x(0), second.get_x(3))) { cout << "rectangles: we haven't got an intersection"; }
    else if (min(first.get_x(0), first.get_x(3)) > max(second.get_x(0), second.get_x(3))) { cout << "rectangles: we haven't got an intersection"; }
    else if (max(first.get_y(0), first.get_y(1)) < min(second.get_y(0), second.get_y(1))) { cout << "rectangles: we haven't got an intersection"; }
    else if (min(first.get_y(0), first.get_y(1)) > max(second.get_y(0), second.get_y(1))) { cout << "rectangles: we haven't got an intersection"; }
    else {

        fin.set_coordinate(min_x + sw1, min_y + sh1, max_x - sw2, max_y - sh2);

    }
      
    first = fin;
    return first;
} ///rename first to intersection