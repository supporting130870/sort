#include <stdio.h>

void BubbleSort(int DataSet[], int Length) {
    int i = 0;
    int j = 0;
    int temp = 0;

    for ( i = 0; i < Length; i ++) {
        for (j = 0; j < Length -1; j ++) {
            if(DataSet[j] > DataSet[j+1]) {
                temp = DataSet[j+1];
                DataSet[j+1] = DataSet[j];
                DataSet[j] = temp;

            }
        }
    }
}

int main(void) {
    int DataSet [] = {6,4,2,3,1,5};
    int Length = sizeof(DataSet)/ sizeof(DataSet[0]);//DataSet전체가 차지하는 바이트 길이 / Intager자료형의 4바이트를 차지하는 자료크기
    //만약 longlong, double 등으로 변경해도 동작할 수 있는가변적인 설계임.
    int i;

    for( i = 0; i < Length; i++) {
        printf("%d, ", DataSet[i]);
    }
    printf("\n\n");
    BubbleSort(DataSet, Length);
    for( i = 0; i < Length; i++) {
        printf("%d, ", DataSet[i]);
    }
    printf("\n");
    return 0;


}