* (Ex. *a) is a pointer of size 8 bytes.

  It is also called as dereferencing pointer.

#include<bits/stdc++.h>
using namespace std;

class student {
    public:
    int rollno;
    int age;
    
};
int main() {
    //static method
    student s1;
    student s2;
    
    //dynamic method
    student *s3 = new student;
    student *s4 = new student;
    
    s1.rollno = 10;
    s1.age = 20;
    (*s3).rollno = 30;
    (*s3).age = 60;
    //or we can also write this as
    
    s4->age = 40;
    s4->rollno = 80;
    
    cout<<"S1 Details -> Age : "<<s1.age<<" Rollno : "<<s1.rollno;
    return 0;
}
