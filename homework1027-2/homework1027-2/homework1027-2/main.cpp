#include <stdio.h>

double cm_to_m(double cm);

int main() {
    double cm_value = 187.0;
    double m_value;

    m_value = cm_to_m(cm_value);

    printf("%.0lfcm는 %.2lfm 입니다.\n", cm_value, m_value);

    return 0;
}

double cm_to_m(double cm) {
    return cm / 100.0;
}