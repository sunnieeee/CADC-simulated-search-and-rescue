#include "fly.h"
using namespace cv;

Mat src;
char key;
Boll boll;
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
        boll.get_pic(src);
        cube.get_pic(src);
        
        switch(key)
        {
            //按z识别球的投放区
            case 'z':
                boll.reco_box();       
                break;

            //按x识别球
            case 'x':
                boll.reco_coordinate();
                break;

            //按c抓取球
            case 'c':
                boll.send_coordinate();
                break;

            //按v放球
            case 'v':
                boll.loosen_hand();
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
