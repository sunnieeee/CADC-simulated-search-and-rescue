/*=================================================================================
 *	                    Copyleft! 2018 Sunny Cao
 *          Some rights reserved：CC(creativecommons.org)BY-NC-SA
 *                      Copyleft! 2018 Sunny Cao
 *      版权部分所有，遵循CC(creativecommons.org)BY-NC-SA协议授权方式使用
 *
 * Filename                : fly.h
 * Description             : 
 * Reference               : 
 * Programmer(s)           : Sunny Cao, sunniecyq@163.com
 * 							 GUABGUO, 809565546@qq.com
 * Company                 : Thinkfly Studio
 * Modification History	   : ver1.0, 2018.09.11, Sunny Cao
 *                          
=================================================================================*/

#ifndef FLY_H_
#define FLY_H_
#include<iostream>
#include<opencv2/opencv.hpp>

/**
 * @class Boll
 * @author GUABGUO
 */
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

/**
 * @class Cube
 * @author GUABGUO
 */
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
