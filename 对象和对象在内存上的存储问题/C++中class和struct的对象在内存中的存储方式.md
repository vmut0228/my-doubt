# 问题遇到的现象和发生背景

在学习结构体/类中的成员在内存中的存储方式（字节对齐）时，突发奇想想探究探究先后实例化的对象在内存中的存储方式。

结果出现相同结构体或类 实例化的对象在内存中并不连续排序。

# 代码块

    ```C++

        #include <iostream>
        using namespace std;

        class peopleTheSomeInfo
        {
        public:
            short age;
            int bodyHeight;         //此时peopleTheSomeInfo占12字节-情况一
            //double bodyHeight;    //此时peopleTheSomeInfo占24字节-情况二
            short bodyWeight;

            //初始化变量
            peopleTheSomeInfo() {
                age = 0;
                bodyHeight = 0;
                bodyWeight = 0;
            }
        };
        int main() {

            cout << sizeof(peopleTheSomeInfo)<<endl;//

            peopleTheSomeInfo A;
            A.age = 22;
            A.bodyHeight = 175;
            A.bodyWeight = 60;

            peopleTheSomeInfo B;
            B.age = 50;
            B.bodyHeight = 170;
            B.bodyWeight = 80;

            cout << "" << endl;

        }

    ```

# 内存结果

    情况一 int bodyHeight; 一行12个字节

![Alt text](../../d:/%E6%A1%8C%E9%9D%A2/%E6%83%85%E5%86%B5%E4%B8%80.png)

    情况二 double bodyHeight;一行24个字节

![Alt text](../../d:/%E6%A1%8C%E9%9D%A2/%E6%83%85%E5%86%B52%20-%20%E5%89%AF%E6%9C%AC.png)

# 我的解答思路

    对象和对象在内存上直接是没有直接关系的
    这个是用户透明的，看编译器和底层系统怎么写
