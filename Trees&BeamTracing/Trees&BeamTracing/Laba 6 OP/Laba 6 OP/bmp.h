#include <fstream>
#include <string>
#include <filesystem>

using namespace std;

typedef struct 
{
    int8_t id;
    int8_t id1;               // ������ �� ����� 'B' � 'M'
    int32_t filesize;        //*** ����� ����� � ������
    int16_t reserved;
    int16_t reserved1;        // 0, 0
    int32_t headersize;      // 54L ��� 24-����� ���������
    int32_t infoSize;        // 40L ��� 24-����� ���������
    int32_t width;           //*** ������ ���������� � �������
    int32_t depth;           //*** ������ ���������� � �������
    int16_t biPlanes;        // 1 (��� 24-����� ���������)
    int16_t bits;            // 24 (��� 24-����� ���������)
    int32_t biCompression;   // 0L
    int32_t biSizeImage;     // ����� ��������� � 0L ��� ��������� ��� �������� (��� ������)
    int32_t biXPelsPerMeter; // ������������� ������� ������ �� ����, ����� 0L
    int32_t biYPelsPerMeter; // �� ����, �� �����
    int32_t biClrUsed;       // ��� ������������ ���������, ����� ��������� 0L
    int32_t biClrImportant;  // �� ����
} BMPHEAD;

typedef struct 
{
    uint8_t redComponent;
    uint8_t greenComponent;
    uint8_t blueComponent;
} PIXELDATA;

class bmpWriter 
{
private:
    BMPHEAD header;
    float** pixelMap;
    string path, name;
    int height, width;
public:
    bmpWriter(string name, float** pixelMap, int h, int w);
    void bmpWrite();
};