#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main() {
    int country, foodtype, spicy, temperature;

a:
    printf("****���� �� ����***\n");
    printf("��������������������������������������������������������������������������������������������\n");
    printf("  0.�ƹ��ų� 1.�ѽ� 2.��� 3.�߽� 4.�Ͻ� :");
    scanf("%d", &country);
    if (country < 0 || country>4) {
        printf("\n�߸� �Է��߽��ϴ�. �ٽ� �Է��Ͻÿ�.\n\n");
        goto a;
    }
    else if (country == 0) {
        srand(time(NULL));
        int a = (rand() % 4) + 1;
        country = a;
    }
    printf("��������������������������������������������������������������������������������������������");
b:
    printf("\n������������������������������������������������������������������������������������������������������������������");
    printf("\n   0.�ƹ��ų� 1.�� 2.�� 3.�� 4.��� 5.�ػ깰 6.��Ÿ : ");
    scanf("%d", &foodtype);
    if (foodtype < 0 || foodtype>6) {
        printf("\n�߸� �Է��߽��ϴ�. �ٽ� �Է��Ͻÿ�.\n\n");
        goto b;
    }
    else if (foodtype == 0) {
        srand(time(NULL));
        int a = (rand() % 6) + 1;
        foodtype = a;
    }
    printf("������������������������������������������������������������������������������������������������������������������\n");
c:
    printf("��������������������������������������������������������������������������������������\n");
    printf("    0.�ƹ��ų� 1.�ſ� �� 2.�� �ſ� �� : ");
    scanf("%d", &spicy);
    if (spicy < 0 || spicy>2) {
        printf("\n�߸� �Է��߽��ϴ�. �ٽ� �Է��Ͻÿ�.\n\n");
        goto c;
    }
    else if (spicy == 0) {
        srand(time(NULL));
        int a = (rand() % 2) + 1;
        spicy = a;
    }
    printf("��������������������������������������������������������������������������������������\n");
d:
    printf("��������������������������������������������������������������������������������������");
    printf("\n   0.�ƹ��ų� 1.�߰ſ� �� 2.������ �� : ");
    scanf("%d", &temperature);
    if (temperature < 0 || temperature>2) {
        printf("�߸� �Է��߽��ϴ�. �ٽ� �Է��Ͻÿ�.\n");
        goto d;
    }
    else if (temperature == 0) {
        srand(time(NULL));
        int a = (rand() % 2) + 1;
        temperature = a;
    }

    printf("��������������������������������������������������������������������������������������");
    switch (country)
    {
    case 1: //�ѽ�
        switch (foodtype)
        {
        case 1: //��
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n��ġ������\n");
                else printf("\n�����\n");

            }
            else
            {
                if (temperature == 1) printf("\n���ܺ����\n");
                else printf("\n�ᳪ����\n");
            }
            break;
        case 2:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n���\n");
                else printf("\n�������\n");

            }
            else
            {
                if (temperature == 1) printf("\n��ġ����\n");
                else printf("\n�ø�\n");
            }
            break;
        case 3:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n��ġ�\n");
                else printf("\n�ſ���̳ñ�\n");

            }
            else
            {
                if (temperature == 1) printf("\n�Ұ�⹫��\n");
                else printf("\n���̳ñ�\n");
            }
            break;
        case 4:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n�ߵ�����\n");
                else printf("\n�߰���\n");

            }
            else
            {
                if (temperature == 1) printf("\n�����\n");
                else printf("\n��ȸ\n");
            }
            break;
        case 5:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n�Ʊ���\n");
                else printf("\n��ȸ\n");

            }
            else
            {
                if (temperature == 1) printf("\n��¡���\n");
                else printf("\n��������\n");
            }
            break;
        case 6:
            if (spicy == 1)
            {
                if (temperature == 1)printf("\n���� �ֹ���\n");
                else printf("\n������\n");

            }
            else
            {
                if (temperature == 1) printf("\n������\n");
                else printf("\n��巹��\n");
            }
            break;
        }
        break;
    case 2: //���
        switch (foodtype)
        {
        case 1: //��
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n���߸�����\n");
                else printf("\n�����\n");

            }
            else
            {
                if (temperature == 1) printf("\n������\n");
                else printf("\n��ī������\n");
            }
            break;
        case 2:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n�ƶ��Ƶ� �Ľ�Ÿ\n");
                else printf("\n���� ���θ� ���Ľ�Ÿ\n");

            }
            else
            {
                if (temperature == 1)printf("\n�Ľ�Ÿ\n");
                else printf("\n���̽� �Ľ�Ÿ\n");
            }
            break;
        case 3:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\n���� ���θ� ����\n");
                else  printf("\n��������\n");

            }
            else
            {
                if (temperature == 1)  printf("\n���� ����\n");
                else  printf("\n�ܹ���\n");
            }
            break;
        case 4:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\n�ſ��� ������ũ\n");
                else  printf("\n�����׸��� ����\n");

            }
            else
            {
                if (temperature == 1)  printf(" \n������ũ \n");
                else  printf("\n������\n");
            }
            break;
        case 5:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n���� ��¡�� �Ľ�Ÿ\n");
                else  printf("\n��ź���� �ػ깰 ������\n");

            }
            else
            {
                if (temperature == 1)  printf("\n���� ���� ����\n");
                else  printf("\n�丶�� �Ľ�Ÿ ������\n");
            }
            break;
        case 6:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\n���� �˶� īġ�����\n");
                else  printf("\n�Ҷ��Ǵ� ����\n");

            }
            else
            {
                if (temperature == 1)  printf("\n�������� ����\n");
                else  printf("\n������\n");
            }
            break;
        }
        break;
    case 3: //�߽�
        switch (foodtype)
        {
        case 1: //��
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\n«�͹�\n");
                else  printf("\n������ä��\n");

            }
            else
            {
                if (temperature == 1)  printf("\n���꽽��\n");
                else  printf("\n���캺����\n");
            }
            break;
        case 2:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\n«��\n");
                else  printf("\n��«��\n");

            }
            else
            {
                if (temperature == 1)  printf("\n¥���\n");
                else  printf("\n�߱��ø�\n");
            }
            break;
        case 3:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\n«����\n");
                else  printf("\n���ع�«��\n");

            }
            else
            {
                if (temperature == 1)  printf("\n�丶�� ȫ����\n");
                else  printf("\n����������\n");
            }
            break;
        case 4:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\n������\n");
                else  printf("\n�ú�����\n");

            }
            else
            {
                if (temperature == 1)  printf("\n�粿ġ\n");
                else  printf("\n��ǳ��\n");
            }
            break;
        case 5:
            if (spicy == 1)
            {
                if (temperature == 1)  printf("\nĥ������\n");
                else  printf("\n�Ⱥ�ä\n");

            }
            else
            {
                if (temperature == 1)  printf("\nĿ������\n");
                else  printf("\n����ȸ\n");
            }
            break;
        case 6:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n������\n");
                else  printf("\n��ǳ����\n");

            }
            else
            {
                if (temperature == 1) printf("\n���ĵκ�\n");
                else printf("\n��������\n");
            }
            break;
        }
        break;
    case 4: //�Ͻ�
        switch (foodtype)
        {
        case 1: //��
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n��� ����\n");
                else printf("\n�ſ� �ٵ�\n");

            }
            else
            {
                if (temperature == 1) printf("\n�Ե�\n");
                else printf("\n�ʹ�\n");
            }
            break;
        case 2:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n���\n");
                else printf("\n��� ���\n");

            }
            else
            {
                if (temperature == 1) printf("\n�쵿\n");
                else printf("\n�޹мҹ�\n");
            }
            break;
        case 3:
            if (spicy == 1)
            {
                if (temperature == 1) printf("�ſ� ������\n");
                else printf("���߳ø��\n");

            }
            else
            {
                if (temperature == 1) printf("\n�̼ҽ÷�\n");
                else printf("\n��Ÿ���ٴ�\n");
            }
            break;
        case 4:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n�ͱ�\n");
                else printf("\n�ſ��ɲ�ġ\n");

            }
            else
            {
                if (temperature == 1) printf("\n���\n");
                else printf("\n�����ڵ�\n");
            }
            break;
        case 5:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n�ػ깰 ���� ����\n");
                else printf("\n��ù̸𸮾ƿͼ�\n");

            }
            else
            {
                if (temperature == 1) printf("\n��������\n");
                else  printf("\nȸ\n");
            }
            break;
        case 6:
            if (spicy == 1)
            {
                if (temperature == 1) printf("\n�������\n");
                else printf("\n���丶��\n");

            }
            else
            {
                if (temperature == 1)  printf("\n��Ű�߳�\n");
                else  printf("\nŸ�ھ߳�\n");
            }
            break;
        }
        break;
    }
}