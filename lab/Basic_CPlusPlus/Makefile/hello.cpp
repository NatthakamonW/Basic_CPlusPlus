// hello.cpp

#include <iostream>    // เรียกใช้ไลบรารีสำหรับแสดงผลทางหน้าจอ
#include "function.h"  // เรียกใช้ไฟล์ header ที่กำหนดเอง
using namespace std;   // ใช้ namespace std เพื่อไม่ต้องพิมพ์ std:: ทุกครั้ง

void print_hello()
{
   cout << "Hello World" << endl;  // แสดงข้อความ "Hello World" และขึ้นบรรทัดใหม่
}