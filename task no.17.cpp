#include <fstream>

using namespace std;
//Write programs that save/read arrays of objects that do not use dynamic memory.

int main() {

	ofstream file("datas.dat", ios::out|ios::binary);
	if (!file.is_open()) {
    
		cout << "error";
		return-1;
	}
  

	int arr[] = {1,2,3,4,5};
	file.write((const char*)arr,5* sizeof(int));
	
  
}

