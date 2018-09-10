#include "fly.h"

Cube::Cube()
{
    color_=0;
    x_=0;
    y_=0;
}

Cube::Cube(int c, int x, int y)
{
    color_=c;
    x_=x;
    y_=y;
}

Cube::~Cube()
{
}

int Cube::get_pic(cv::Mat pic)
{
    pic_=pic.clone();
}

int Cube::reco_coordinate()
{
}

int Cube::send_coordinate()
{
}

int Cube::loosen_hand()
{
}