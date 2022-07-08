#include<iostream>
#include<windows.h>
#include<string.h>
using namespace std;
class animal
{
    private:
        string name;
        int ages;
    public:
        animal()
        {
            cout << "无参构造函数" << endl;
        }
        animal(string newName,int newAges)
        {
            name = newName;
            ages = newAges;
        }
        void ShowIn()
        {
            std::cout << name << std::endl;
            std::cout << ages << std::endl;
        }
};
class student
{
    private:
        string name;
        int ages;
        string grade;
    public:
        student()
        {
            std::cout << "无参构造函数" << std::endl;
        }
        student(string newName,int newAges,string newGrade)
        {
            name = newName;
            ages = newAges;
            grade = newGrade;
        }
        void show()
        {
            std::cout << "name:" << name << std::endl;
            std::cout << "ages:" << to_string(ages) <<  std::endl;
            std::cout << "grade:" << grade << std::endl;
        }
};
int main()
{
    animal a1("狗",12);
    a1.ShowIn();
    system("pause");
    student s1("林青霞",12,"704");
    s1.show();
    system("pause");
    return 0;
}