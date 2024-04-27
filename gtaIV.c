#include <cmath>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/sysinfo.h>

long long x = 9;
long long y = 9;
long long z = 9;
long long h = 9;
long long i = 9;
long long j = 9;

bool asd = true;

int main() {
    struct sysinfo si;

    sysinfo(&si);

    long long freeMemory = si.freeram / 1024;

    void* ptr = malloc(freeMemory * 1024);

    while (asd) {
        x = pow(x, y) + pow(z, h) + pow(i, j);
        x = x - y * z * h * i * j;
    }

    return 0;
}
