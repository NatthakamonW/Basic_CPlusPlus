// main.cpp

#include <iostream>   // ใช้งานฟังก์ชันแสดงผล เช่น cout
#include "function.h" // รวมไฟล์ header ที่มีการประกาศฟังก์ชัน print_hello
using namespace std;  // เพื่อให้ใช้ std::cout เป็น cout ได้เลย

// main() is where program execution begins.
int main() {

	print_hello();   // เรียกใช้ฟังก์ชันที่ประกาศไว้ใน function.h และนิยามใน hello.cpp
	return 0;        // ส่งค่ากลับ 0 เพื่อแสดงว่าโปรแกรมสิ้นสุดอย่างถูกต้อง
}