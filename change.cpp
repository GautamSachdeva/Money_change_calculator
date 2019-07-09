#include <iostream>

int get_change(int m) {
  int integer = m;
  int n = 0;
  while(integer != 0){
	if(integer >= 10){
		n = n + (integer - integer%10)/10;
		integer = integer%10;	
	}
	else if(integer < 10 && integer >= 5){
				n = n + (integer - integer%5)/5;
		integer = integer%5;	
	}
	else{
		n = n + (integer - integer%1)/1;
		integer = integer%1;	
	}
	
  }
  return n;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
