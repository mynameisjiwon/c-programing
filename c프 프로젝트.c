#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main() {
    int country, foodtype, spicy, temperature;

a:
    printf("****오늘 뭐 먹지***\n");
    printf("┌────────────────────────────────────────────┐\n");
    printf("  0.아무거나 1.한식 2.양식 3.중식 4.일식 :");
    scanf("%d", &country);
    if (country < 0 || country>4) {
        printf("\n잘못 입력했습니다. 다시 입력하시오.\n\n");
        goto a;
    }
    else if (country == 0) {
        srand(time(NULL));
        int a = (rand() % 4) + 1;
        country = a;
    }
    printf("└────────────────────────────────────────────┘");
b:
    printf("\n┌───────────────────────────────────────────────────────┐");
    printf("\n   0.아무거나 1.밥 2.면 3.국 4.고기 5.해산물 6.기타 : ");
    scanf("%d", &foodtype);
    if (foodtype < 0 || foodtype>6) {
        printf("\n잘못 입력했습니다. 다시 입력하시오.\n\n");
        goto b;
    }
    else if (foodtype == 0) {
        srand(time(NULL));
        int a = (rand() % 6) + 1;
        foodtype = a;
    }
    printf("└───────────────────────────────────────────────────────┘\n");
c:
    printf("┌─────────────────────────────────────────┐\n");
    printf("    0.아무거나 1.매운 거 2.안 매운 거 : ");
    scanf("%d", &spicy);
    if (spicy < 0 || spicy>2) {
        printf("\n잘못 입력했습니다. 다시 입력하시오.\n\n");
        goto c;
    }
    else if (spicy == 0) {
        srand(time(NULL));
        int a = (rand() % 2) + 1;
        spicy = a;
    }
    printf("└─────────────────────────────────────────┘\n");
d:
    printf("┌─────────────────────────────────────────┐");
    printf("\n   0.아무거나 1.뜨거운 거 2.차가운 거 : ");
    scanf("%d", &temperature);
    if (temperature < 0 || temperature>2) {
        printf("잘못 입력했습니다. 다시 입력하시오.\n");
        goto d;
    }
    else if (temperature == 0) {
        srand(time(NULL));
        int a = (rand() % 2) + 1;
        temperature = a;
    }

    printf("└─────────────────────────────────────────┘");
    switch (country)
    {
    case 1: //한식
        switch (foodtype)
        {
        case 1: //밥
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n김치볶음밥\n");
                else printf("\n비빔밥\n");

            }
            else
            {
                if (temperature == 1) printf("\n돌솥비빔밥\n");
                else printf("\n콩나물밥\n");
            }
            break;
        case 2:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n라면\n");
                else printf("\n비빔국수\n");

            }
            else
            {
                if (temperature == 1) printf("\n잔치국수\n");
                else printf("\n냉면\n");
            }
            break;
        case 3:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n김치찌개\n");
                else printf("\n매운오이냉국\n");

            }
            else
            {
                if (temperature == 1) printf("\n소고기무국\n");
                else printf("\n오이냉국\n");
            }
            break;
        case 4:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n닭도리탕\n");
                else printf("\n닭강정\n");

            }
            else
            {
                if (temperature == 1) printf("\n삼계탕\n");
                else printf("\n육회\n");
            }
            break;
        case 5:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n아구찜\n");
                else printf("\n물회\n");

            }
            else
            {
                if (temperature == 1) printf("\n오징어볶음\n");
                else printf("\n생선구이\n");
            }
            break;
        case 6:
            if (spicy == 1)
            {
                if (temperature == 1)printf("\n돼지 주물럭\n");
                else printf("\n고추전\n");

            }
            else
            {
                if (temperature == 1) printf("\n갈비탕\n");
                else printf("\n곤드레밥\n");
            }
            break;
        }
        break;
    case 2: //양식
        switch (foodtype)
        {
        case 1: //밥
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n고추리조또\n");
                else printf("\n연어롤\n");

            }
            else
            {
                if (temperature == 1) printf("\n리조또\n");
                else printf("\n팟카오무쌉\n");
            }
            break;
        case 2:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n아라비아따 파스타\n");
                else printf("\n무띠 파인리 콩파스타\n");

            }
            else
            {
                if (temperature == 1)printf("\n파스타\n");
                else printf("\n아이스 파스타\n");
            }
            break;
        case 3:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\n무띠 파인리 스프\n");
                else  printf("\n가스파쵸\n");

            }
            else
            {
                if (temperature == 1)  printf("\n로제 스프\n");
                else  printf("\n햄버거\n");
            }
            break;
        case 4:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\n매운목살 스테이크\n");
                else  printf("\n베지테리안 쿠스쿠스\n");

            }
            else
            {
                if (temperature == 1)  printf(" \n스테이크 \n");
                else  printf("\n브라사토\n");
            }
            break;
        case 5:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n매콤 오징어 파스타\n");
                else  printf("\n산탄젤로 해산물 샐러드\n");

            }
            else
            {
                if (temperature == 1)  printf("\n조개 버터 구이\n");
                else  printf("\n토마토 파스타 샐러드\n");
            }
            break;
        case 6:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\n폴로 알라 카치아토라\n");
                else  printf("\n할라피뇨 와퍼\n");

            }
            else
            {
                if (temperature == 1)  printf("\n고르곤졸라 피자\n");
                else  printf("\n샐러드\n");
            }
            break;
        }
        break;
    case 3: //중식
        switch (foodtype)
        {
        case 1: //밥
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\n짬뽕밥\n");
                else  printf("\n고추잡채밥\n");

            }
            else
            {
                if (temperature == 1)  printf("\n유산슬밥\n");
                else  printf("\n새우볶음밥\n");
            }
            break;
        case 2:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\n짬뽕\n");
                else  printf("\n냉짬뽕\n");

            }
            else
            {
                if (temperature == 1)  printf("\n짜장면\n");
                else  printf("\n중국냉면\n");
            }
            break;
        case 3:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\n짬뽕탕\n");
                else  printf("\n냉해물짬뽕\n");

            }
            else
            {
                if (temperature == 1)  printf("\n토마토 홍합탕\n");
                else  printf("\n우육냉탕면\n");
            }
            break;
        case 4:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\n라조기\n");
                else  printf("\n궁보기정\n");

            }
            else
            {
                if (temperature == 1)  printf("\n양꼬치\n");
                else  printf("\n깐풍기\n");
            }
            break;
        case 5:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\n칠리새우\n");
                else  printf("\n팔보채\n");

            }
            else
            {
                if (temperature == 1)  printf("\n커자차이\n");
                else  printf("\n새우회\n");
            }
            break;
        case 6:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n마라탕\n");
                else  printf("\n깐풍가지\n");

            }
            else
            {
                if (temperature == 1) printf("\n마파두부\n");
                else printf("\n가지볶음\n");
            }
            break;
        }
        break;
    case 4: //일식
        switch (foodtype)
        {
        case 1: //밥
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n삼겹 덮밥\n");
                else printf("\n매운 텐동\n");

            }
            else
            {
                if (temperature == 1) printf("\n규동\n");
                else printf("\n초밥\n");
            }
            break;
        case 2:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n라멘\n");
                else printf("\n비빔 모밀\n");

            }
            else
            {
                if (temperature == 1) printf("\n우동\n");
                else printf("\n메밀소바\n");
            }
            break;
        case 3:
            if (spicy == 1)
            {
                if (temperature == 1) printf("매운 오뎅탕\n");
                else printf("고추냉모밀\n");

            }
            else
            {
                if (temperature == 1) printf("\n미소시루\n");
                else printf("\n부타가꾸니\n");
            }
            break;
        case 4:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n와규\n");
                else printf("\n매운등심꼬치\n");

            }
            else
            {
                if (temperature == 1) printf("\n돈까스\n");
                else printf("\n오야코동\n");
            }
            break;
        case 5:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n해산물 가츠 나베\n");
                else printf("\n사시미모리아와세\n");

            }
            else
            {
                if (temperature == 1) printf("\n가마보꼬\n");
                else  printf("\n회\n");
            }
            break;
        case 6:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n샤브샤브\n");
                else printf("\n후토마끼\n");

            }
            else
            {
                if (temperature == 1)  printf("\n스키야끼\n");
                else  printf("\n타코야끼\n");
            }
            break;
        }
        break;
    }
}