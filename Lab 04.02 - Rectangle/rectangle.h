#ifndef PDS2_VPL_RECT_H
#define PDS2_VPL_RECT_H

using namespace std;

class Rectangle
{
private:
    double width, height;
public:
    // *CONSTRUTOR
    // **sem parâmetros
    Rectangle();
    // **com parâmetros
    Rectangle(double largura, double altura);
    
    // *MÉTODOS
    int set_width(double largura);
    int set_height(double altura);
    double get_width();
    double get_height();
    double get_perimeter();
    double get_area();

};

#endif /* PDS2_VPL_RECT_H */