//№1
#include <iostream> 
int main(){
    int A, B;
    std::cin >> A >> B;
    std::cout << A+B;
    
}
//№2
#include <iostream>
int main(){
    int A,B;
    std::cin >> A >> B;
    std::cout << A+B << " " << A-B << " " << A*B << " " << A/B;
}
//№3
#include <iostream>
#include <cmath>
int main(){
    int A,B;
    std::cin >> A >> B;
    std::cout << sqrt(A*A + B*B);
}
//№4
#include <iostream>
int main(){
    int v,t;
    std::cin >> v >> t;
    std::cout << (v*t) % 109;
}

//№5
#include <iostream>
int main(){
    int n;
    std::cin >> n;
    int h = n/3600;
    int m = (n%3600)/60;
    int s = n%60;
    std::cout << h << ":";
    if (m<10){
        std::cout << "0";
    }
    std::cout << m << ":";
    if (s<10){
        std::cout << "0";
    }
    std::cout << s;
}
    