class Array 
{
private: // here i'm define my all data members related to this class
	int A*; // define as pointer that helps to loacting the memory in heap;
	int size;
	int length;
public:
	Array(){ // default constructor call intialize value with default constructor
		size = 10; 
		A = new int[size];
		length = 0; //total no. of element;

	};
	Array(int sz){ // parametertized constructor 
		size = sz;
		A=new int[size];
		length = 0;

	}
	~Array();{

		delete []A;
	}
	
};