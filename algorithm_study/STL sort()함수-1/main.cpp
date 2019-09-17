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
    // 정렬 기준은 '점수가 작은 순서'
    bool operator <(Student &student){
        return this->score < student.score;
    }

};

bool compare(int a,int b){// a<b : 오름차순, a>b : 내림차순
    return a<b;
}

int main()
{
    Student students[]={
        Student("나동빈",90),
        Student("최광규",99),
        Student("이상호",69),
        Student("김남기",85),
        Student("김명규",78),
    };
    sort(students,students+5);

    for(int i=0;i<5;i++){
        cout<< students[i].name<<' ';
    }
    return 0;
}
