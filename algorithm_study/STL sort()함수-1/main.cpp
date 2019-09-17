#include <iostream>
#include <algorithm>

using namespace std;

class Student{
public:
    string name;
    int score;
    Student(string name,int score){
        this -> name = name;
        this -> score = score;
    }
    // ���� ������ '������ ���� ����'
    bool operator <(Student &student){
        return this->score < student.score;
    }

};

bool compare(int a,int b){// a<b : ��������, a>b : ��������
    return a<b;
}

int main()
{
    Student students[]={
        Student("������",90),
        Student("�ֱ���",99),
        Student("�̻�ȣ",69),
        Student("�賲��",85),
        Student("����",78),
    };
    sort(students,students+5);

    for(int i=0;i<5;i++){
        cout<< students[i].name<<' ';
    }
    return 0;
}
