#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main() {
    int country, foodtype, spicy, temperature;

a:
    printf("****¿À´Ã ¹¹ ¸ÔÁö***\n");
    printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
    printf("  0.¾Æ¹«°Å³ª 1.ÇÑ½Ä 2.¾ç½Ä 3.Áß½Ä 4.ÀÏ½Ä :");
    scanf("%d", &country);
    if (country < 0 || country>4) {
        printf("\nÀß¸ø ÀÔ·ÂÇß½À´Ï´Ù. ´Ù½Ã ÀÔ·ÂÇÏ½Ã¿À.\n\n");
        goto a;
    }
    else if (country == 0) {
        srand(time(NULL));
        int a = (rand() % 4) + 1;
        country = a;
    }
    printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥");
b:
    printf("\n¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤");
    printf("\n   0.¾Æ¹«°Å³ª 1.¹ä 2.¸é 3.±¹ 4.°í±â 5.ÇØ»ê¹° 6.±âÅ¸ : ");
    scanf("%d", &foodtype);
    if (foodtype < 0 || foodtype>6) {
        printf("\nÀß¸ø ÀÔ·ÂÇß½À´Ï´Ù. ´Ù½Ã ÀÔ·ÂÇÏ½Ã¿À.\n\n");
        goto b;
    }
    else if (foodtype == 0) {
        srand(time(NULL));
        int a = (rand() % 6) + 1;
        foodtype = a;
    }
    printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
c:
    printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
    printf("    0.¾Æ¹«°Å³ª 1.¸Å¿î °Å 2.¾È ¸Å¿î °Å : ");
    scanf("%d", &spicy);
    if (spicy < 0 || spicy>2) {
        printf("\nÀß¸ø ÀÔ·ÂÇß½À´Ï´Ù. ´Ù½Ã ÀÔ·ÂÇÏ½Ã¿À.\n\n");
        goto c;
    }
    else if (spicy == 0) {
        srand(time(NULL));
        int a = (rand() % 2) + 1;
        spicy = a;
    }
    printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
d:
    printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤");
    printf("\n   0.¾Æ¹«°Å³ª 1.¶ß°Å¿î °Å 2.Â÷°¡¿î °Å : ");
    scanf("%d", &temperature);
    if (temperature < 0 || temperature>2) {
        printf("Àß¸ø ÀÔ·ÂÇß½À´Ï´Ù. ´Ù½Ã ÀÔ·ÂÇÏ½Ã¿À.\n");
        goto d;
    }
    else if (temperature == 0) {
        srand(time(NULL));
        int a = (rand() % 2) + 1;
        temperature = a;
    }

    printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥");
    switch (country)
    {
    case 1: //ÇÑ½Ä
        switch (foodtype)
        {
        case 1: //¹ä
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n±èÄ¡ººÀ½¹ä\n");
                else printf("\nºñºö¹ä\n");

            }
            else
            {
                if (temperature == 1) printf("\nµ¹¼Üºñºö¹ä\n");
                else printf("\nÄá³ª¹°¹ä\n");
            }
            break;
        case 2:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n¶ó¸é\n");
                else printf("\nºñºö±¹¼ö\n");

            }
            else
            {
                if (temperature == 1) printf("\nÀÜÄ¡±¹¼ö\n");
                else printf("\n³Ã¸é\n");
            }
            break;
        case 3:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n±èÄ¡Âî°³\n");
                else printf("\n¸Å¿î¿ÀÀÌ³Ã±¹\n");

            }
            else
            {
                if (temperature == 1) printf("\n¼Ò°í±â¹«±¹\n");
                else printf("\n¿ÀÀÌ³Ã±¹\n");
            }
            break;
        case 4:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n´ßµµ¸®ÅÁ\n");
                else printf("\n´ß°­Á¤\n");

            }
            else
            {
                if (temperature == 1) printf("\n»ï°èÅÁ\n");
                else printf("\nÀ°È¸\n");
            }
            break;
        case 5:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n¾Æ±¸Âò\n");
                else printf("\n¹°È¸\n");

            }
            else
            {
                if (temperature == 1) printf("\n¿ÀÂ¡¾îººÀ½\n");
                else printf("\n»ý¼±±¸ÀÌ\n");
            }
            break;
        case 6:
            if (spicy == 1)
            {
                if (temperature == 1)printf("\nµÅÁö ÁÖ¹°·°\n");
                else printf("\n°íÃßÀü\n");

            }
            else
            {
                if (temperature == 1) printf("\n°¥ºñÅÁ\n");
                else printf("\n°ïµå·¹¹ä\n");
            }
            break;
        }
        break;
    case 2: //¾ç½Ä
        switch (foodtype)
        {
        case 1: //¹ä
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n°íÃß¸®Á¶¶Ç\n");
                else printf("\n¿¬¾î·Ñ\n");

            }
            else
            {
                if (temperature == 1) printf("\n¸®Á¶¶Ç\n");
                else printf("\nÆÌÄ«¿À¹«½Ô\n");
            }
            break;
        case 2:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n¾Æ¶óºñ¾Æµû ÆÄ½ºÅ¸\n");
                else printf("\n¹«¶ì ÆÄÀÎ¸® ÄáÆÄ½ºÅ¸\n");

            }
            else
            {
                if (temperature == 1)printf("\nÆÄ½ºÅ¸\n");
                else printf("\n¾ÆÀÌ½º ÆÄ½ºÅ¸\n");
            }
            break;
        case 3:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\n¹«¶ì ÆÄÀÎ¸® ½ºÇÁ\n");
                else  printf("\n°¡½ºÆÄÃÝ\n");

            }
            else
            {
                if (temperature == 1)  printf("\n·ÎÁ¦ ½ºÇÁ\n");
                else  printf("\nÇÜ¹ö°Å\n");
            }
            break;
        case 4:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\n¸Å¿î¸ñ»ì ½ºÅ×ÀÌÅ©\n");
                else  printf("\nº£ÁöÅ×¸®¾È Äí½ºÄí½º\n");

            }
            else
            {
                if (temperature == 1)  printf(" \n½ºÅ×ÀÌÅ© \n");
                else  printf("\nºê¶ó»çÅä\n");
            }
            break;
        case 5:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n¸ÅÄÞ ¿ÀÂ¡¾î ÆÄ½ºÅ¸\n");
                else  printf("\n»êÅºÁ©·Î ÇØ»ê¹° »ø·¯µå\n");

            }
            else
            {
                if (temperature == 1)  printf("\nÁ¶°³ ¹öÅÍ ±¸ÀÌ\n");
                else  printf("\nÅä¸¶Åä ÆÄ½ºÅ¸ »ø·¯µå\n");
            }
            break;
        case 6:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\nÆú·Î ¾Ë¶ó Ä«Ä¡¾ÆÅä¶ó\n");
                else  printf("\nÇÒ¶óÇÇ´¢ ¿ÍÆÛ\n");

            }
            else
            {
                if (temperature == 1)  printf("\n°í¸£°ïÁ¹¶ó ÇÇÀÚ\n");
                else  printf("\n»ø·¯µå\n");
            }
            break;
        }
        break;
    case 3: //Áß½Ä
        switch (foodtype)
        {
        case 1: //¹ä
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\nÂ«»Í¹ä\n");
                else  printf("\n°íÃßÀâÃ¤¹ä\n");

            }
            else
            {
                if (temperature == 1)  printf("\nÀ¯»ê½½¹ä\n");
                else  printf("\n»õ¿ìººÀ½¹ä\n");
            }
            break;
        case 2:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\nÂ«»Í\n");
                else  printf("\n³ÃÂ«»Í\n");

            }
            else
            {
                if (temperature == 1)  printf("\nÂ¥Àå¸é\n");
                else  printf("\nÁß±¹³Ã¸é\n");
            }
            break;
        case 3:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\nÂ«»ÍÅÁ\n");
                else  printf("\n³ÃÇØ¹°Â«»Í\n");

            }
            else
            {
                if (temperature == 1)  printf("\nÅä¸¶Åä È«ÇÕÅÁ\n");
                else  printf("\n¿ìÀ°³ÃÅÁ¸é\n");
            }
            break;
        case 4:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\n¶óÁ¶±â\n");
                else  printf("\n±Ãº¸±âÁ¤\n");

            }
            else
            {
                if (temperature == 1)  printf("\n¾ç²¿Ä¡\n");
                else  printf("\n±ñÇ³±â\n");
            }
            break;
        case 5:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\nÄ¥¸®»õ¿ì\n");
                else  printf("\nÆÈº¸Ã¤\n");

            }
            else
            {
                if (temperature == 1)  printf("\nÄ¿ÀÚÂ÷ÀÌ\n");
                else  printf("\n»õ¿ìÈ¸\n");
            }
            break;
        case 6:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n¸¶¶óÅÁ\n");
                else  printf("\n±ñÇ³°¡Áö\n");

            }
            else
            {
                if (temperature == 1) printf("\n¸¶ÆÄµÎºÎ\n");
                else printf("\n°¡ÁöººÀ½\n");
            }
            break;
        }
        break;
    case 4: //ÀÏ½Ä
        switch (foodtype)
        {
        case 1: //¹ä
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n»ï°ã µ¤¹ä\n");
                else printf("\n¸Å¿î ÅÙµ¿\n");

            }
            else
            {
                if (temperature == 1) printf("\n±Ôµ¿\n");
                else printf("\nÃÊ¹ä\n");
            }
            break;
        case 2:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n¶ó¸à\n");
                else printf("\nºñºö ¸ð¹Ð\n");

            }
            else
            {
                if (temperature == 1) printf("\n¿ìµ¿\n");
                else printf("\n¸Þ¹Ð¼Ò¹Ù\n");
            }
            break;
        case 3:
            if (spicy == 1)
            {
                if (temperature == 1) printf("¸Å¿î ¿Àµ­ÅÁ\n");
                else printf("°íÃß³Ã¸ð¹Ð\n");

            }
            else
            {
                if (temperature == 1) printf("\n¹Ì¼Ò½Ã·ç\n");
                else printf("\nºÎÅ¸°¡²Ù´Ï\n");
            }
            break;
        case 4:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n¿Í±Ô\n");
                else printf("\n¸Å¿îµî½É²¿Ä¡\n");

            }
            else
            {
                if (temperature == 1) printf("\nµ·±î½º\n");
                else printf("\n¿À¾ßÄÚµ¿\n");
            }
            break;
        case 5:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\nÇØ»ê¹° °¡Ã÷ ³ªº£\n");
                else printf("\n»ç½Ã¹Ì¸ð¸®¾Æ¿Í¼¼\n");

            }
            else
            {
                if (temperature == 1) printf("\n°¡¸¶º¸²¿\n");
                else  printf("\nÈ¸\n");
            }
            break;
        case 6:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n»þºê»þºê\n");
                else printf("\nÈÄÅä¸¶³¢\n");

            }
            else
            {
                if (temperature == 1)  printf("\n½ºÅ°¾ß³¢\n");
                else  printf("\nÅ¸ÄÚ¾ß³¢\n");
            }
            break;
        }
        break;
    }
}