#include <iostream>
template <typename T, typename U>
auto max(T x, U y){
    return (x > y) ? x : y;
}

// int max(int x, int y){
//     return (x > y) ? x : y;
// }

int main(){
    //cout << max (1, 2) << endl;
    std::cout << max('A', 101) << std::endl;

    return 0;
}