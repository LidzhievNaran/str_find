#include <iostream>

int pos(char *s, char *c, int n) {
    int i, j;
    int lenC, lenS;
    //Находим размеры строки исходника и искомого
    for (lenC = 0; c[lenC]; lenC++);
    for (lenS = 0; s[lenS]; lenS++);

    for (i = 0; i <= lenS - lenC; i++) {
        for (j = 0; s[i + j] == c[j]; j++);//проверяем совпадения посимвольно
        //Если посимвольно совпадает по длине искомого
        //Вернем из функции номер ячейки, откуда начинается совпадение
        //Учитывать 0-терминатор
        if (j - lenC == 1 && 1 && i == lenS - lenC && !(n-1)) return i;
        if (j == lenC)
            if (n-1) n--;
            else return i;
    }
    return -1;
}

int main() {
    char *s = "rapapapa";
    char *c = "pa";
    int i, n =0;
    for (i = 1; n != -1; i++){
        n = pos(s, c , i);
        if (n >= 0)
            std::cout << n << std::endl;
    }
}
