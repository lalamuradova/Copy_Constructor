#include<iostream>
using namespace std;

//void Foo(int& num) {
//	num = 90;
//
//}
//
//void Foo2(int*arr) {  //int arr[]
//	arr[0] = 90;
//}

//class Some {
//	int age;
//	string name;
//	string city;
//
//public:
//	Some(string name) {
//		this->name = name;
//	}
//
//	Some(string name, int age) : Some(name) {
//		this->age = age;
//	}
//
//
//};



//class Student {
//public:
//	int age;
//
//	Student(int age) {
//		this->age = age;
//	}
//
//	Student(const Student& obj) {
//		cout << "Copy constructor" << endl;
//		this->age = obj.age;
//	}
//
//	Student& operator=(const Student& obj) {
//		cout << "Copy assign operator" << endl;
//		this->age = obj.age;
//		return *this;
//	}
//};


/////////////////////////////////////////////

class Some {
public:
	int* ptr;

	Some(int arg) {
		ptr = new int(arg);
		cout << "With parameter constructor" << endl;
	}

	Some(const Some& other) {
		ptr = new int(*other.ptr);  //deep copy

		cout << "Copy constructor" << endl;
	}

	Some& operator=(const Some& other) {
		ptr = new int(*other.ptr);  //deep copy
		cout << "Copy assign operator" << endl;
		return *this;
	}

	int Get_Ptr() const{
		return *ptr;
	}

	void Set_Ptr(int num) {
		*ptr = num;
	}
	~Some() {
		delete ptr;
		cout << "Destructor" << endl;
	}
};







void main() {
	/*int arr[3]{ 1,7,8 };*/
	//cout << arr << endl;

	//int num=777;
	//Foo(num);
	//cout << num << endl;

	/*cout << arr[0] << endl;
	Foo2(arr);
	cout << arr[0] << endl;*/

	//Shallow copy- adresler copyalanir. eyni valuelar uzerinde isleyirik
	//int* arr = new int[5] {6, 98, 34, 22, 56};
	//int* copy_arr = arr; //shallow copy

	//cout << arr[0] << endl;
	//cout << copy_arr[0] << endl;

	//copy_arr[0] = 999;

	//cout << arr[0] << endl;
	//cout << copy_arr[0] << endl;


	//Deep copy- value-lar copyalanir ve artiq originial ile copy bir birinden asili olmur
	//int* arr = new int[5] {6, 98, 34, 22, 56};

	//int* copy_arr = new int[5] {};

	//for (size_t i = 0; i < 5; i++)
	//{
	//	copy_arr[i] = arr[i];
	//}

	//cout << arr[0] << endl;
	//cout << copy_arr[0] << endl;

	//arr[0] = 8888;
	//cout << arr[0] << endl;
	//cout << copy_arr[0] << endl;


	//////////////////

	//Copy constructor an copy assign operator

	//Student st1(12);
	////Student copy_st(st1); //copy constructor
	//Student copy_st2=st1; //copy constructor
	//cout << copy_st2.age << endl;
	//cout << st1.age << endl;

	//Student st2(17);
	// 
	//st1 = st2; //copy assign operator


	///////////////////////////
	/*Some obj(45);
	Some copy(obj);
	Some obj2(77);

	obj2 = obj;


	cout << obj.Get_Ptr() << endl;
	cout << copy.Get_Ptr() << endl;
	cout << obj2.Get_Ptr() << endl;
	obj.Set_Ptr(90);


	cout << obj.Get_Ptr() << endl;
	cout << copy.Get_Ptr() << endl;
	cout << obj2.Get_Ptr() << endl;*/



	////heapde

	//Some* obj= new Some(45);
	//Some* copy=new Some(*obj);
	//Some* obj2 = new Some(77);

	//obj2 = copy;


	//cout << obj->Get_Ptr() << endl;
	//cout << copy->Get_Ptr() << endl;
	//cout << obj2->Get_Ptr() << endl;
	//obj->Set_Ptr(90);


	//cout << obj->Get_Ptr() << endl;
	//cout << copy->Get_Ptr() << endl;
	//cout << obj2->Get_Ptr() << endl;

	//delete copy;
	//delete obj;
	//
	//delete obj2;
	//

int number;

string data;


}