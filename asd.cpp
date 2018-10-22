#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    //변수
    char* name;
    int age;

    //클래스 멤버 변수
    Person *friends;

public:
    //생성자
    Person(char* myname, int myage) {
        int len = strlen(myname + 1);
        name = new char[len];
        strcpy(name, myname);
        age = myage;
    }
    Person() {
        name = NULL;
        age = 0;
        cout << "called Person()" << endl;
    }

    //set 함수
    void SetFriendInfo(char * myname, int myage) {
        name = myname;
        age = myage;
    }
    void SetPersonInfo(char * myname, int myage, Person& myFriend) {
        friends = &myFriend;
        name = myname;
        age = myage;
    }

    //출력 함수
    void ShowPersonInfo() const {
        cout << "이름: " << name << ", ";
        cout << "나이: " << age << ", ";
        cout << "친구이름: " << friends->name << ", ";
        cout << "친구나이: " << friends->age << ", " << endl;
    }

    //소멸자
    ~Person() {
        delete[] name;
        cout << "called destructor!" << endl;
    }
};

int main() {
    Person parr[3];
    Person temp;

    char namestr[100];
    char * strptr;
    int age;
    int len;

    char f_namestr[100];
    char * f_strptr;
    int f_age;

    for (int i = 0; i < 3; i++) {
        cout << "이름: ";
        cin >> namestr;
        cout << "나이: ";
        cin >> age;

        cout << "친구이름: ";
        cin >> f_namestr;
        cout << "친구나이: ";
        cin >> f_age;

        len = strlen(namestr + 1);
        strptr = new char[len];
        strcpy(strptr, namestr);

        len = strlen(f_namestr + 1);
        f_strptr = new char[len];
        strcpy(f_strptr, f_namestr);

        temp.SetFriendInfo(f_strptr, f_age);
        parr[i].SetPersonInfo(strptr, age, temp);
    }

	cout << endl;
    parr[0].ShowPersonInfo();
    parr[1].ShowPersonInfo();
    parr[2].ShowPersonInfo();
    
    return 0;
} 