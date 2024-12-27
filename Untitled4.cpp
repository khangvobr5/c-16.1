#include <stdio.h>

int main() {
    int var = 10;
    int *ptr = &var;
    printf("Gia tri cua var (su dung bien truc tiep): %d\n", var);
    printf("Dia chi cua var (su dung bien truc tiep): %p\n", (void*)&var);
    printf("Gia tri cua var (su dung con tro): %d\n", *ptr);
    printf("Dia chi cua var (su dung con tro): %p\n", (void*)ptr);

    return 0;
}

