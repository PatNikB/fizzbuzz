#include <iostream>

int main(){
    int start,end,mult_1,mult_2;
    std::cout<< "Input the starting integer: ";
    std::cin >>  start ;
    std::cout<< "Input the end integer: ";
    std::cin >> end;

    std::cout<< "Input the first multiple: ";
    std::cin >>  mult_1;
    std::cout<< "Input the second multiple: ";
    std::cin >> mult_2;
    std::cout << std::endl;

    for	(int i=start; i<end; i++){
		if ((i%mult_1 == 0) && (i%mult_2 == 0))
			std::cout << "FizzBuzz" << std::endl;
		else if (i%mult_1 == 0)
			std::cout << "Fizz" << std::endl;
		else if (i%mult_2 == 0)
			std::cout << "Buzz" << std::endl;
		else
			std::cout << i << std::endl;
	}
}