#include <iostream>
#include <fstream>
using namespace std ;
int main() {
    std::ofstream outFile("image.ppm");

    int image_width = 15;
    int image_height = 15;

    outFile << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int i=0;i<image_height;i++){
        for (int j=0;j<image_width;j++){
            clog << "\r ScanLines remaining: " << (image_height - j)<< " " << std::flush;

            double a  = (double)i/image_height;
            double b = (double)j/image_height;
            double c = 0.0;

            
            outFile<<(int)(a*259.99)<< " "<<(int)(b*259.99)<<"  "<<(int)(c*259.99)<<"\n";

        }
    }
    clog << "\rDone";
    outFile.close();
    return 0;
}