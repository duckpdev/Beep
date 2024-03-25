#include <iostream>
#include <locale.h>
#include <windows.h>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Frequency is null" << std::endl;
        return 1;
    }
    DWORD frequency = atoi(argv[1]);
    DWORD duration = 200;
    if (argc >= 3) {
        duration = atoi(argv[2]);
    }
    Beep(frequency, duration);
    return 0;
}