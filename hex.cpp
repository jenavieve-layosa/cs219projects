/* Jenavieve Layosa 
CS219 
1/25/2022 */


#include "hex.h"




int changeToInt(string input){
		string temp = input;
		int size = temp.length();
		int array[size] = {};
		int num;
		int array1[size] = {};
		
			for(int i=2; i<size; i++){
				switch(temp[i]){
					/* this will change the string to an integer */
				case '0' : array[i] = 0; break;
				case '1' : array[i] = 1; break;
				case '2' : array[i] = 2; break;
				case '3' : array[i] = 3; break;
				case '4' : array[i] = 4; break;
				case '5' : array[i] = 5; break;
				case '6' : array[i] = 6; break;
				case '7' : array[i] = 7; break;
				case '8' : array[i] = 8; break;
				case '9' : array[i] = 9; break;
				case 'a' : array[i] = 10; break;
				case 'A' : array[i] = 10; break;
				case 'b' : array[i] = 11; break;
				case 'B' : array[i] = 11; break;
				case 'c' : array[i] = 12; break;
				case 'C' : array[i] = 12; break;
				case 'd' : array[i] = 13; break;
				case 'D' : array[i] = 13; break;
				case 'e' : array[i] = 14; break;
				case 'E' : array[i] = 14; break;
				case 'f' : array[i] = 15; break;
				case 'F' : array[i] = 15; break;
			}
			}
		for(int i=0, j=size; i<size; i++, j--){
			num += array[i] * pow(16,static_cast<double>(j)-1);
			}
			
			return num;
				
	}
string changeToHex(int input){
	int remainder;
	int num;
	string finalString = "";
	int tempArray[sizeof(input)]= {};
	int count = input;
	int i =0;
	string hexArray[] = {"0","1","2","3","4","5","6","7","8","9","a","b","c","d","e","f"};
	
	while (count !=0){
		remainder = count % 16;
		count = count/16;
		tempArray[i] = remainder;
		finalString = hexArray[remainder] + finalString;
		i++;
		}
		
		
		return finalString;
	}
	
	
