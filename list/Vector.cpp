#include<iostream>
#include<cstring>

using namespace std;
template <typename Type> class Vector{
	private:
		int size, length;
		Type *data;
	public:
		Vector(int input_size){
			size = input_size;
			length = 0;
			data = new Type[size];
		}
		~Vector(){
			delete[] data;
		}
};

int main(){
	Vector<int> a(100);
	return 0;
}
