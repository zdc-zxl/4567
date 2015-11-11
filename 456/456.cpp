#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  
using namespace cv;  
int main()  
{  
    Mat img1 = imread("D:\\image\\img1.jpg");  
    Mat img2 = imread("D:\\image\\img2.jpg");
	//两幅图像的大小需要一致   
	imshow("1",img1);
	imshow("2",img2);
    Mat img_result1, img_result2, img_result;  
    subtract(img1,img2, img_result1); 
    subtract(img2,img1, img_result2);  
    add(img_result1, img_result2, img_result1);  
    imwrite("D:\\image\\result.jpg", img_result1);  
    imshow("result", img_result1);  

	waitKey();  
    return 0;  
}  