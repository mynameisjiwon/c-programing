#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main() {
    int country, foodtype, spicy, temperature;

a:
    printf("****螃棺 凳 詳雖***\n");
    printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
    printf("  0.嬴鼠剪釭 1.и衝 2.曄衝 3.醞衝 4.橾衝 :");
    scanf("%d", &country);
    if (country < 0 || country>4) {
        printf("\n澀跤 殮溘ц蝗棲棻. 棻衛 殮溘ж衛螃.\n\n");
        goto a;
    }
    else if (country == 0) {
        srand(time(NULL));
        int a = (rand() % 4) + 1;
        country = a;
    }
    printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎");
b:
    printf("\n忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖");
    printf("\n   0.嬴鼠剪釭 1.嫣 2.賊 3.措 4.堅晦 5.п骯僭 6.晦顫 : ");
    scanf("%d", &foodtype);
    if (foodtype < 0 || foodtype>6) {
        printf("\n澀跤 殮溘ц蝗棲棻. 棻衛 殮溘ж衛螃.\n\n");
        goto b;
    }
    else if (foodtype == 0) {
        srand(time(NULL));
        int a = (rand() % 6) + 1;
        foodtype = a;
    }
    printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
c:
    printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
    printf("    0.嬴鼠剪釭 1.衙遴 剪 2.寰 衙遴 剪 : ");
    scanf("%d", &spicy);
    if (spicy < 0 || spicy>2) {
        printf("\n澀跤 殮溘ц蝗棲棻. 棻衛 殮溘ж衛螃.\n\n");
        goto c;
    }
    else if (spicy == 0) {
        srand(time(NULL));
        int a = (rand() % 2) + 1;
        spicy = a;
    }
    printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
d:
    printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖");
    printf("\n   0.嬴鼠剪釭 1.嗑剪遴 剪 2.離陛遴 剪 : ");
    scanf("%d", &temperature);
    if (temperature < 0 || temperature>2) {
        printf("澀跤 殮溘ц蝗棲棻. 棻衛 殮溘ж衛螃.\n");
        goto d;
    }
    else if (temperature == 0) {
        srand(time(NULL));
        int a = (rand() % 2) + 1;
        temperature = a;
    }

    printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎");
    switch (country)
    {
    case 1: //и衝
        switch (foodtype)
        {
        case 1: //嫣
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n梯纂犖擠嫣\n");
                else printf("\n綠綺嫣\n");

            }
            else
            {
                if (temperature == 1) printf("\n給殤綠綺嫣\n");
                else printf("\n攝釭僭嫣\n");
            }
            break;
        case 2:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n塭賊\n");
                else printf("\n綠綺措熱\n");

            }
            else
            {
                if (temperature == 1) printf("\n濤纂措熱\n");
                else printf("\n傢賊\n");
            }
            break;
        case 3:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n梯纂鎬偃\n");
                else printf("\n衙遴螃檜傢措\n");

            }
            else
            {
                if (temperature == 1) printf("\n模堅晦鼠措\n");
                else printf("\n螃檜傢措\n");
            }
            break;
        case 4:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n殼紫葬鰻\n");
                else printf("\n殼鬼薑\n");

            }
            else
            {
                if (temperature == 1) printf("\n鳴啗鰻\n");
                else printf("\n幫�稞n");
            }
            break;
        case 5:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n嬴掘鎗\n");
                else printf("\n僭�稞n");

            }
            else
            {
                if (temperature == 1) printf("\n螃癒橫犖擠\n");
                else printf("\n儅摹掘檜\n");
            }
            break;
        case 6:
            if (spicy == 1)
            {
                if (temperature == 1)printf("\n腋雖 輿僭楣\n");
                else printf("\n堅蹺瞪\n");

            }
            else
            {
                if (temperature == 1) printf("\n陞綠鰻\n");
                else printf("\n堆萄溯嫣\n");
            }
            break;
        }
        break;
    case 2: //曄衝
        switch (foodtype)
        {
        case 1: //嫣
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n堅蹺葬褻傳\n");
                else printf("\n翱橫煤\n");

            }
            else
            {
                if (temperature == 1) printf("\n葬褻傳\n");
                else printf("\nと蘋螃鼠諂\n");
            }
            break;
        case 2:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n嬴塭綠嬴評 だ蝶顫\n");
                else printf("\n鼠塑 だ檣葬 攝だ蝶顫\n");

            }
            else
            {
                if (temperature == 1)printf("\nだ蝶顫\n");
                else printf("\n嬴檜蝶 だ蝶顫\n");
            }
            break;
        case 3:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\n鼠塑 だ檣葬 蝶Щ\n");
                else  printf("\n陛蝶だ蹶\n");

            }
            else
            {
                if (temperature == 1)  printf("\n煎薯 蝶Щ\n");
                else  printf("\nу幗剪\n");
            }
            break;
        case 4:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\n衙遴跡髦 蝶纔檜觼\n");
                else  printf("\n漆雖纔葬寰 瓔蝶瓔蝶\n");

            }
            else
            {
                if (temperature == 1)  printf(" \n蝶纔檜觼 \n");
                else  printf("\n粽塭餌饜\n");
            }
            break;
        case 5:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n衙巍 螃癒橫 だ蝶顫\n");
                else  printf("\n骯驕薨煎 п骯僭 僵楝萄\n");

            }
            else
            {
                if (temperature == 1)  printf("\n褻偃 幗攪 掘檜\n");
                else  printf("\n饜葆饜 だ蝶顫 僵楝萄\n");
            }
            break;
        case 6:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\nィ煎 憲塭 蘋纂嬴饜塭\n");
                else  printf("\nй塭Я揣 諦ぷ\n");

            }
            else
            {
                if (temperature == 1)  printf("\n堅腦堆褸塭 Я濠\n");
                else  printf("\n僵楝萄\n");
            }
            break;
        }
        break;
    case 3: //醞衝
        switch (foodtype)
        {
        case 1: //嫣
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\n竄銓嫣\n");
                else  printf("\n堅蹺濩瓣嫣\n");

            }
            else
            {
                if (temperature == 1)  printf("\n嶸骯蝸嫣\n");
                else  printf("\n億辦犖擠嫣\n");
            }
            break;
        case 2:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\n竄銓\n");
                else  printf("\n傢竄銓\n");

            }
            else
            {
                if (temperature == 1)  printf("\n瞼濰賊\n");
                else  printf("\n醞措傢賊\n");
            }
            break;
        case 3:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\n竄銓鰻\n");
                else  printf("\n傢п僭竄銓\n");

            }
            else
            {
                if (temperature == 1)  printf("\n饜葆饜 �室桲縷n");
                else  printf("\n辦幫傢鰻賊\n");
            }
            break;
        case 4:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\n塭褻晦\n");
                else  printf("\n掙爾晦薑\n");

            }
            else
            {
                if (temperature == 1)  printf("\n曄窒纂\n");
                else  printf("\n械Ё晦\n");
            }
            break;
        case 5:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\n艦葬億辦\n");
                else  printf("\nつ爾瓣\n");

            }
            else
            {
                if (temperature == 1)  printf("\n醴濠離檜\n");
                else  printf("\n億辦�稞n");
            }
            break;
        case 6:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n葆塭鰻\n");
                else  printf("\n械Ё陛雖\n");

            }
            else
            {
                if (temperature == 1) printf("\n葆だ舒睡\n");
                else printf("\n陛雖犖擠\n");
            }
            break;
        }
        break;
    case 4: //橾衝
        switch (foodtype)
        {
        case 1: //嫣
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n鳴啜 竣嫣\n");
                else printf("\n衙遴 蘸翕\n");

            }
            else
            {
                if (temperature == 1) printf("\n敘翕\n");
                else printf("\n蟾嫣\n");
            }
            break;
        case 2:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n塭詮\n");
                else printf("\n綠綺 賅塵\n");

            }
            else
            {
                if (temperature == 1) printf("\n辦翕\n");
                else printf("\n詭塵模夥\n");
            }
            break;
        case 3:
            if (spicy == 1)
            {
                if (temperature == 1) printf("衙遴 螃筏鰻\n");
                else printf("堅蹺傢賅塵\n");

            }
            else
            {
                if (temperature == 1) printf("\n嘐模衛瑞\n");
                else printf("\n睡顫陛紱棲\n");
            }
            break;
        case 4:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n諦敘\n");
                else printf("\n衙遴蛔褕窒纂\n");

            }
            else
            {
                if (temperature == 1) printf("\n絲梱蝶\n");
                else printf("\n螃撿囀翕\n");
            }
            break;
        case 5:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\nп骯僭 陛隴 釭漆\n");
                else printf("\n餌衛嘐賅葬嬴諦撮\n");

            }
            else
            {
                if (temperature == 1) printf("\n陛葆爾窒\n");
                else  printf("\n�稞n");
            }
            break;
        case 6:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n凜粽凜粽\n");
                else printf("\n�霰銝雲兝n");

            }
            else
            {
                if (temperature == 1)  printf("\n蝶酈撿郭\n");
                else  printf("\n顫囀撿郭\n");
            }
            break;
        }
        break;
    }
}