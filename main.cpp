#include <unistd.h>

#include <iostream>

#include "userlib/foo.h"

int main(int argc, char *argv[]) {
    char msg[1024];
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Enter a message: ";
    std::cin.getline(msg, sizeof(msg));
    std::cout << "You entered: " << msg << std::endl;

    int a   = 5;
    int b   = 10;
    int sum = add(a, b);
    char sum_msg[1024];
    sprintf(sum_msg, "The sum of %d and %d is %d", a, b, sum);
    print_message(sum_msg);

    return 0;
}
