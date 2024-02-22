#include <iostream>
#include <cmath>


bool isPrime(int x){
	if (x < 2){
		return false;
	}

	for (int i = 2; i <= sqrt(x); i++){
		if (x % i == 0){
			return false;
		}
	}

	return true;
}

int main(){
    int n;
    std::cin >> n;

    if (isPrime(n)){
        std::cout << "yes";
    }else{std::cout << "no";}
    return 0;
}