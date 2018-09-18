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
 * @class function of b
 * @author GUABGUO
 */
Ball::Ball()
{
    color_=0;
    x_=0;
    y_=0;
}

Ball::Ball(int c, int x, int y)
{
    color_=c;
    x_=x;
    y_=y;
}


Ball::~Ball()
{
}

int Ball::get_pic(cv::Mat pic)
{
    pic_=pic.clone();
}

int Ball::reco_box()
{
    //20180918
    /*cv::Mat hsvImg;
    cvtColor(pic_,hsvImg,COLOR_BGR2HSV);
    enum colorType{Red = 0, Green, Blue, ColorButt};
    const Scalar hsvRedLo( 0,  40,  40);
    const Scalar hsvRedHi(40, 255, 255);
    const Scalar hsvGreenLo(41,  40,  40);
    const Scalar hsvGreenHi(90, 255, 255);
    const Scalar hsvBlueLo(100,  40,  40);
    const Scalar hsvBlueHi(140, 255, 255);
    vector<Scalar> hsvLo{hsvRedLo, hsvGreenLo, hsvBlueLo};
    vector<Scalar> hsvHi{hsvRedHi, hsvGreenHi, hsvBlueHi};
    
    vector<String> textColor{"R", "G", "B"};
    // 查找指定范围内的颜色
    inRange(hsvImg, hsvLo[colorIdx], hsvHi[colorIdx], imgThresholded);
    // 转换成二值图
    threshold(imgThresholded, imgThresholded, 1, 255, THRESH_BINARY);

    copyMakeBorder(imgThresholded, imag_1, 1, 1, 1, 1, BORDER_CONSTANT, 0);
    vector<vector<Point> > contours0;
    vector<Vec4i> hierarchy;
    findContours(imag_1, contours0, hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE);
    for (int idx = 0; idx < contours0.size(); idx++ )
        {
            Rect bound = boundingRect(Mat(contours0[idx]));
            Point bc = Point(bound.x + bound.width / 2,
                             bound.y + bound.height / 2);
            uchar x = imgThresholded.at<uchar>(bc);

            if (x > 0)
            {
                org = bc;
                putText(image, textColor[colorIdx], org, fontFace, 1, color,
                thickness, lineType, bottomLeftOrigin);
            }
        } */
}

int Ball::reco_coordinate()
{
}

int Ball::send_coordinate()
{
}

int Ball::loosen_hand()
{
}