#include <iostream>
#include  <ctime>

using namespace std;

namespace first {
	class Auto {
		int speed;
		int size;
	public:
		Auto() {
			speed = rand() % 300 + 100;
			size = rand() % 4 + 1;
		}
		int getSpeed() {
			return speed;
		}
		int getSize() {
			return size;
		}
	};
}

namespace second {
	class Auto {
		int speed;
		int size;
	public:
		  Auto() {
			  speed = rand() % 300 + 100;
			  size = rand() % 4 + 1;
		}
		Auto( first::Auto & obj) {
			speed = obj.getSpeed();
			size = obj.getSize();
		}
		void PrintInfo() {
			cout << "Speed of ur car" << speed << "\nSize of ur car : " << size << "t." << endl;
		}
	};
}

using namespace first;
using namespace second;

int main()
{
	srand(time(NULL));
	first::Auto obj = first::Auto();
	second::Auto obj2 = second::Auto(obj);
	obj2.PrintInfo();
}