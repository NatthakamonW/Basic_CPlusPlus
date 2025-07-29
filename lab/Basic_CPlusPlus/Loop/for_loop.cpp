#include <iostream>
using namespace std;

int main() {

  	// วนลูป for เพื่อแสดงข้อความ "Hi" จำนวน 5 ครั้ง
    for (int i = 0; i < 5; i++) {
      // แสดงข้อความ พร้อมค่าของตัวแปร i ในแต่ละรอบของลูป
      	cout << "Hi => i = " << i << endl;
    }
  
    return 0;         // คืนค่า 0 เพื่อจบการทำงานของโปรแกรม
}