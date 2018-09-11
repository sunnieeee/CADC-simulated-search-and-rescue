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

#include "fly.h"

/**
 * @class function of Cube
 * @author GUABGUO
 */
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