#include <stdio.h>
#include <dxgi.h>

int main() {
    printf("IDXGIFactory alignment: %zu\n", alignof(IDXGIFactory));
    printf("IDXGIFactory size: %zu\n", sizeof(IDXGIFactory));
    return 0;
}