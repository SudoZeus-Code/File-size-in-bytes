#include <string>
#include <iostream>
#include <fstream>
/*alllows us to read files*/
using namespace std;

/*will need to accept user input for directory and file location*/

int main() {

	streampos begin,end;
	ifstream TheFile ("c++_compile.txt", ios::binary);
	begin= TheFile.tellg();
	TheFile.seekg (0, ios::end);
	end= TheFile.tellg();
	TheFile.close();
	cout<<"File size is: "<<(end-begin)<<" bytes.\n";


	return 0;
}
