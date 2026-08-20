#include <iostream>
#include "clsMyString.h"

using namespace std;

int main()
{

	clsMyString s1;

	cout << "\nS1 = " << s1.GetValue() << endl;

	s1.SetValue("Ahmed");

	cout << "S1 = " << s1.GetValue() << endl;

	s1.SetValue("Shifa");

	cout << "S1 = " << s1.GetValue() << endl;

	s1.SetValue("Almehdar");

	cout << "S1 = " << s1.GetValue() << endl;

	cout << "\n-----------------After Undo---------------\n";

	s1.Undo();

	cout << "S1 = " << s1.GetValue() << endl;

	s1.Undo();

	cout << "S1 = " << s1.GetValue() << endl;

	s1.Undo();

	cout << "S1 = " << s1.GetValue() << endl;

	cout << "\n-----------------After Redo---------------\n";

	s1.Redo();

	cout << "S1 = " << s1.GetValue() << endl;

	s1.Redo();

	cout << "S1 = " << s1.GetValue() << endl;

	s1.Redo();

	cout << "S1 = " << s1.GetValue() << endl;

	cout << "\n-----------------After Redo/Undo------------------\n";

	s1.Undo();

	cout << "-Undo-S1 = " << s1.GetValue() << endl;

	s1.Undo();

	cout << "-Undo-S1 = " << s1.GetValue() << endl;

	s1.Redo();

	cout << "-Redo-S1 = " << s1.GetValue() << endl;

	s1.Undo();

	cout << "-Undo-S1 = " << s1.GetValue() << endl;

	s1.Redo();

	cout << "-Redo-S1 = " << s1.GetValue() << endl;

	s1.Redo();

	cout << "-Redo-S1 = " << s1.GetValue() << endl;


	system("pause>0");
	return 0;
}