#include "fly.h"


Boll::Boll()
{
    color_=0;
    x_=0;
    y_=0;
}

Boll::Boll(int c, int x, int y)
{
    color_=c;
    x_=x;
    y_=y;
}


Boll::~Boll()
{
}

int Boll::get_pic(cv::Mat pic)
{
    pic_=pic.clone();
}

int Boll::reco_box()
{
}

int Boll::reco_coordinate()
{
}

int Boll::send_coordinate()
{
}

int Boll::loosen_hand()
{
}