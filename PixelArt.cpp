#include "PixelArt.h"
#include <iostream>
using namespace std;

void PixelArt::GetImageFile()
{
    fstream img("1.jpg", fstream::in | ios::binary);
    fstream imgout("2.jpg", fstream::out | ios::binary);
    img.seekg(0, img.end);
    long length = img.tellg();
    img.seekg(0, img.beg);
    if (length > 0)
    {
        char* buffer = new char[length];
        img.read(buffer, length);



        imgout.write(buffer, length);
        delete[] buffer;
    }
    img.close();
    imgout.close();

    return;
}
