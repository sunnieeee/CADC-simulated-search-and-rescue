
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
using namespace cv;



/**
 * @function main
 * @author GUABGUO
 */
Mat src;
char key;
Ball ball;
Cube cube;

int main(int argc, char** argv)
{
    
    VideoCapture capture(0);
    std::cout<<"width:"<<capture.get(CV_CAP_PROP_FRAME_WIDTH)<<std::endl;
    std::cout<<"height:"<<capture.get(CV_CAP_PROP_FRAME_HEIGHT)<<std::endl;
    capture.set(CV_CAP_PROP_FRAME_WIDTH, 640);  
    capture.set(CV_CAP_PROP_FRAME_HEIGHT, 480); 

    while(1)
    {
        capture >> src; 
        imshow("src",src);

        key=waitKey(10);
        ball.get_pic(src);
        cube.get_pic(src);
        
        switch(key)
        {
            //按z识别球的投放区
            case 'z':
                ball.reco_box();       
                break;

            //按x识别球
            case 'x':
                ball.reco_coordinate();
                break;

            //按c抓取球
            case 'c':
                ball.send_coordinate();
                break;

            //按v放球
            case 'v':
                ball.loosen_hand();
                break;

            //按a识别魔方
            case 'a':
                cube.reco_coordinate();
                break;
            //按s抓取魔方
            case 's':
                cube.send_coordinate();
                break;

            //按d放魔方
            case 'd':
                cube.loosen_hand();
                break;

        }
    }
    src.release();
   
    return 0;
}
