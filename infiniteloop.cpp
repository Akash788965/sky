#include <iostream>
using namespace std;
int main() {

        int *memory;

        // Allocate 200 ints.

        memory = malloc(200 * sizeof(int));

        // Allocate 100 more ints.

        // ERROR: This will compile, but will leave the previously

        // allocated memory hanging, with no way to access it.

        memory = malloc(100 * sizeof(int));

        // Free second block of 100 ints.

        // The first block is not freed.

        free(memory);

        return 0;

    }