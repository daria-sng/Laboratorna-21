#include <stdio.h>
#include <stdlib.h>

struct parameters {
    int x, y;
};

void calculation(struct parameters *p1, struct parameters *p2, double *a, double *b);

int main(){
    system("chcp 65001");
    struct parameters first, second;

    printf("Введіть координати першої точки (x;y): ");
    scanf("%d%d", &first.x, &first.y);

    printf("Введіть координати другої точки (x;y): ");
    scanf("%d%d", &second.x, &second.y);

    double a, b;
    calculation(&first, &second, &a, &b);
    printf("Коефіцієнти для рівняння прямої y=ax+b, що проходить через дві точки:\na = %.4lf, b = %.4lf\n", a , b);

    return 0;
}

void calculation(struct parameters *p1, struct parameters *p2, double *a, double *b){
    *a = (double)(p2->y - p1->y) / (p2->x - p1->x);
    *b = p1->y - (*a)*p1->x;
}