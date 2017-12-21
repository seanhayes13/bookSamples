#include <iostream>

#include "splitFile.h"

using namespace std;

void sayHelloFromExternal();

void main() {
	/*Section ? - External Files*/
	cout << "\n\n############\nSection ? - External Files\n############" << endl;
	/*While it is entirely possible to write a program in one large file, it is
	extremely difficult to work with, especially if there are multiple developers
	on the team. There are two ways to work with external files:
	- Only a .cpp file
	- With a .h (also known as a header file) and .cpp file
	For the first example, we are going to create another file called
	sampleExternalFile.cpp and place in the same directory as the current file. After
	creating the prototype at the top of this file, go into the other file and build
	the method. Now simply call the new method.
	*/
	sayHelloFromExternal();

	/*The other way to work with external files is to use a set of header and cpp
	files. To avoid confusion, I highly recommend using the same file name with
	the different extensions. Here I used splitFile.cpp and splitFile.h . Go into
	those files for more explanation, then come back here.*/

	/*If you have added #include "splitFile.h" at the top of this file, you should be
	able to simply call the method.*/
	helloFromSplitFile();

	system("pause");
}
