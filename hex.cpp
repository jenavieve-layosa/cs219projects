/* Jenavieve Layosa 
CS219 
1/25/2022 */


#include "hex.h"




int changeToInt(char input[]){
		
		int length = strlen(input);
		int num = 0;
		int start = 1;
			for (int i= length-1; i>=0; i++){
				if (input[i] >= '0' && input[i] <= '9'){
					num = num + ((input[i]-48) * start);
					start = start * 16;
					} else if (input[i] >= 'A' && input[i] <= 'F'){
						num = num + ((input[i]-55) * start);
						start = start*16;
						}
					}
				return num;
				
	}
string changeToHex(int input){
	string answer ="";
	
	int i=0;
    	char hexNum[32];
    
    while(input !=0)
    {
        int remainder = input%16;
        if(remainder<10)
            remainder = remainder+48;
        else
            remainder = remainder+55;
        hexNum[i] = remainder;
        i++;
        input = input/16;
    }
    
    for(int x =i-1; x>=0; x--){
        answer = answer + hexNum[x];
    }
    return answer;
}
	
	
	
	
