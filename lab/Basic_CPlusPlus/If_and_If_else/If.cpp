#include<iostream>
using namespace std;

int main (){
    int A = 0;           // ประกาศตัวแปร A ชนิด int และกำหนดค่าเริ่มต้นเป็น 0
    cout<<"Please enter a number to A: "<< endl;
    cin >> A;            // รับค่าที่ผู้ใช้ป้อนมาเก็บในตัวแปร A

    // ตรวจสอบเงื่อนไขว่า A น้อยกว่า 5 หรือไม่
    if(A<5){
        cout<<"Condition met"<<endl;  // ถ้าเงื่อนไขเป็นจริง จะแสดงข้อความนี้
    
    return 0;            // คืนค่า 0 เพื่อจบโปรแกรม
}