#include <iostream>
using namespace std;

class peopleTheSomeInfo
{
public:
	short age;
	//int bodyHeight;
	double bodyHeight;
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




