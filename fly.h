#ifndef FLY_H_
#define FLY_H_
#include<iostream>
#include<opencv2/opencv.hpp>

class Boll
{
private:
    int color_;
    int x_;
    int y_;
    cv::Mat pic_;
public:
    Boll();
    Boll(int c, int x, int y);
    ~Boll();
    int get_pic(cv::Mat pic);

    //识别投放区颜色
    int reco_box();
    //按照待抓取求的颜色确定球的坐标
    int reco_coordinate();
    //发送坐标
    int send_coordinate();
    //松手放球
    int loosen_hand();
};


class Cube
{
private:
    int color_;
    int x_;
    int y_;
    cv::Mat pic_;
public:
    Cube();
    Cube(int c, int x, int y);
    ~Cube();
    int get_pic(cv::Mat pic);
    //确定坐标
    int reco_coordinate();
    //发送坐标
    int send_coordinate();
    //松手
    int loosen_hand();

};

#endif 
