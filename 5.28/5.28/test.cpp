#include <iostream>
using namespace std;
//class A
//{
//public:
//	explicit A(int a=0)
//		:_a(a)
//	{
//
//	}
//	/*A(const A& a1)
//	{
//		_a = a1._a;
//	}*/
//private:
//	int _a;
//};
////malloc /calloc /realloc ��ʲô�����أ�
//int main()
//{
//	int* a1 = (int*)malloc(sizeof(int));
//	free(a1);
//
//	int* a2 = (int*)calloc(4,sizeof(int));
//
//	int* a3 = (int*)realloc(a2, sizeof(int) * 5);
//	//a2����Ҫ�ͷ��
//}
//int main()
//{
//	int* p3 = (int*)malloc(sizeof(int));//C
//	int* p4 = new int;
//	free(p3);
//	delete p4;
//	/*A* p1 = (A*)malloc(sizeof(A) * 10);*/
//	/*A* p2 = new A[4]{ A(1),A(2),A(3) };*/
//	A* p7 = new A[4]; 
//	A* p8 = new A[4]{A(1),A(2),A(3),A(4)};
//	delete[] p7;int* p1 = nullptr;
//	p1 = new int[1024 * 1024];
//}

//typedef int DataType;
//class Stack
//{
//public:
//	Stack(size_t capacity = 3)
//	{
//		cout << "Stack(size_t capacity = 3)" << endl;
//
//		_array = (DataType*)malloc(sizeof(DataType) * capacity);
//		if (NULL == _array)
//		{
//			perror("malloc����ռ�ʧ��!!!");
//			return;
//		}
//
//		_capacity = capacity;
//		_size = 0;
//	}
//
//	void Push(DataType data)
//	{
//		// CheckCapacity();
//		_array[_size] = data;
//		_size++;
//	}
//
//	// ��������...
//
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//
//		if (_array)
//		{
//			free(_array);
//			_array = NULL;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//
//private:
//	DataType* _array;
//	int       _capacity;
//	int       _size;
//};
////int main()
////{
////	try
////	{
////		//��Ҫ����һ�����ϵ�ջ����
////		Stack* p1 = new Stack;
////		delete p1;
////	}
////	catch (const exception& e)
////	{
////		cout << e.what() << endl;
////	}
////}
////int main()
////{
////	A* p1 = (A*)malloc(sizeof(A));
////	//p1ָ���ֻ��������A������ͬ��С��һ�οռ䣬�����Ƕ�����Ϊ���캯��û��ִ�С�
////	new(p1)A(1);//��ʽ�ĵ��ù��캯��
////	free(p1);
////}
////int main()
////{
////	char* p1 = new char[1024 * 1024 * 1024] {'t', 'e', 'w', '\0'};
////	cout << p1 << endl;
////}
////int main()
////{
////	//�Զ������ͻ�ȥ��������Ĭ�Ϲ���
////	//�����Զ������ͣ�malloc�����ʼ������new���Զ����ù��캯��������ʼ����
////	A* a2 = (A*)malloc(sizeof(A));
////	A* a1 = new A;
////}
////int main()
////{
////	int* p2 = (int*)malloc(sizeof(int) * 10);
////	//����10��int��С������
////	int* p3 = new int[10];
////	delete[] p3;
////	//����һ�����飬��ʼ��Ϊ10
////	int* p8 = new int(10);
////	delete p8;
////	//����һ��10��int��С������
////	int* p5 = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
////	delete[] p5;
////}
struct ListNode
{
	int _val;
	struct ListNode* _next;

	ListNode(int x = 0)
		:_val(x)
		, _next(NULL)
	{}
};
struct ListNode* BuyListNode(int x)
{
	//C  malloc�����Ŀ��ռ�,����Ҫ�Լ�ת������
	struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
	//����Ҫ���
	if (newnode == NULL)
	{
		perror("malloc");
	}
	//��Ҫ����ռ��Լ��ֶ���ʼ��
	newnode->_next = NULL;
	newnode->_val = x;
	return newnode;
}
int main()
{
	struct ListNode* n1 = BuyListNode(1);
	struct ListNode* n2 = BuyListNode(2);

	//��C++��new�Ͳ�һ���ˣ�new�ǿ���ռ�󻹿����Լ���ʼ��
	//��ô��ʼ�����أ�����ù��캯����ʼ��
	struct ListNode* n3 = new ListNode(6);
	struct ListNode* n4 = new ListNode;
}
//template<typename T>
//void Swap(T& x1, T& x2)
//{
//	T tmp = x1;
//	x1 = x2;
//	x2 = tmp;
//}
//int main()
//{
//	int a = 0, b = 1;
//	double c = 1.1, d = 2.2;
//	Swap(a, b);
//	Swap(c, d);
//	int* p1 = &a, * p2 = &b;
//	Swap(p1, p2);
//	A a1(1), a2(2);
//	Swap(a1, a2);//���Զ�ʶ�����ͣ�Ȼ��ģ��ʵ����
//}
//int main()
//{
//	int* p1 = (int*)malloc(sizeof(int) * 10);//C
//	int* p2 = (int*)malloc(sizeof(int));//C
//	int* p3 = new int;//C++��
//	int* p4 = new int(1);//C++
//	int* p5 = new int[10];//C++
//	free(p1);
//	free(p2);
//	delete p3;
//	delete p4;
//	delete[] p5;
//}
//class A
//{
//public:
//	explicit A(int a = 0)
//		:_a(a)
//	{
//
//	}
//	A(const A& a1)
//	{
//		_a = a1._a;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//   }
//private:
//	int _a;
//};
//
//int main()
//{
//	//aa1�ɲ��Ƕ���aa1����ֻ������ָ����A����һ����Ŀռ䣬��������������Ϊ���캯��û��ִ�У�û��ʵ������
//	A* aa1 = (A*)malloc(sizeof(A));
//	
//	new(aa1)A;//��ʽ�ĵ��ù��캯����Ҫע�����A�Ĺ��캯���в�����Ҫ���Ρ�
//
//	aa1->~A();//�ֶ��ĵ�����������
//
//	free(aa1);//�ֶ��ĵ���free
//
//	//ͬ������
//	A* aa2 = (A*)operator new(sizeof(A));
//	new(aa2)A(10);
//	aa2->~A();
//	free(aa2);
//}
//int main()
//{
//	//��̬����һ��A���͵Ŀռ�
//	A* aa1 = (A*)malloc(sizeof(A));//C
//	A* aa2 = new A(1);
//	free(aa1);
//	delete aa2;
//
//	//��̬����һ��10��A���ʹ�С������
//	A* aa3 = (A*)malloc(sizeof(A) * 10);//C++
//	A* aa4 = new A[10];
//	free(aa3);
//	delete[] aa4;
//
//}