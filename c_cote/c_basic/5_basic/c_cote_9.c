// 전국 대회 선발 고사

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct rank_info {
    int rank_index;
    int rank_number;
} rank_info;

int solution_1(int rank[], size_t rank_len, bool attendance[], size_t attendance_len) {

    rank_info *p = malloc(sizeof(rank_info) * attendance_len);

    int count = 0;

    for (int i = 0; i < attendance_len; ++i) {
        if (attendance[i]) {
            p[count].rank_index = i;
            p[count].rank_number = rank[i];
            ++count;
        }
    }

    // 선택 정렬
    for (int i = 0; i < count - 1; ++i) {
        int min_index = i;

        for (int j = i + 1; j < count; ++j) {
            if (p[min_index].rank_number > p[j].rank_number) {
                min_index = j;
            }
        }

        // 최솟값의 위치를 찾은 후 교환
        if (min_index != i) {
            rank_info temp = p[i];
            p[i] = p[min_index];
            p[min_index] = temp;
        }
    }

    int first_index = p[0].rank_index;
    int second_index = p[1].rank_index;
    int third_index = p[2].rank_index;

    int result = (10000 * first_index)
               + (100 * second_index)
               + third_index;

    free(p);

    return result;
}

int solution_2(int rank[], size_t rank_len, bool attendance[], size_t attendance_len) {
    int selected[3];
    int count = 0;

    // 등수 1등부터 확인
    for (int r = 1; r <= rank_len; r++) {
        for (int i = 0; i < rank_len; i++) {
            // 현재 등수이고 참석 가능하다면 선발
            if (rank[i] == r && attendance[i] == true) {
                selected[count] = i;
                count++;

                // 3명 선발 완료
                if (count == 3) {
                    return 10000 * selected[0]
                         + 100 * selected[1]
                         + selected[2];
                }
            }
        }
    }

    return 0;
}
