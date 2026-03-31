#include <iostream>
#include <algorithm>
#include <array>
#include <iterator>
#include <functional>

int *filter(int *first, int *last){
    auto *slow{first};
    auto *fast{first};
    while(fast != last){
        if(*fast > 0){
            std::iter_swap(fast, slow);
            slow++;
        }
        fast++;
    }
    
    return last;
}


int main(){
    std::array v1 = {1, 2, -1, -2, 3, 5, -8, 4};



    return 0;
}