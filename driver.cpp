
#include <iostream>
#include <string>
#include <cmath>

#include "hex.h"
using namespace std;



int main(){
	string operand1;
	string operand2;
	string operation;
	string result = "";
	
	cout << "Enter operation: " << endl;
	cin >> operation;
	cout << "Enter operand 1: " <<endl;
	cin >> operand1;
	cout << "Enter operand 2: " << endl;
	cin >> operand2;
	
	
	if(operation == "ADD"){	
		int temp1;
		int temp2;
		int tempResult;
	
	
		temp1 = changeToInt(operand1);
		temp2 = changeToInt(operand2);
		tempResult = temp1 + temp2;
		result = changeToHex(tempResult);
	}
		
	cout << result << endl;
	
	return 0;
}
