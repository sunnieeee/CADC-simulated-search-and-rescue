/*=================================================================================
 *	                    Copyleft! 2018 Sunny Cao
 *          Some rights reserved：CC(creativecommons.org)BY-NC-SA
 *                      Copyleft! 2018 Sunny Cao
 *      版权部分所有，遵循CC(creativecommons.org)BY-NC-SA协议授权方式使用
 *
 * Filename                : fly.h
 * Description             : 
 * Reference               : 
 * Programmer(s)           : GUABGUO, 809565546@qq.com
 * 							 Sunny Cao, sunniecyq@163.com
 * Company                 : Thinkfly Studio
 * Modification History	   : ver1.0, 2018.09.11, Sunny Cao
 *                          
=================================================================================*/

#include "fly.h"

/**
 * @class function of Boll
 * @author GUABGUO
 */
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