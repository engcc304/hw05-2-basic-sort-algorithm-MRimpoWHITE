/*
    จงเรียงลำดับเลขจากข้อมูลที่ผู้ใช้กรอก โดยเรียงจากมากไปน้อย (โดยใช้คำสั่ง if else หรือ else if เท่านั้น)

    Test case:
        Input[1] :
            6
        Input[2] :
            9
        Input[3] :
            1
    Output:
        9 6 1

    Test case:
        Input[1] :
            65
        Input[2] :
            91
        Input[3] :
            112
    Output:
        112 91 65
*/

#include <stdio.h>

int main()
{
    int Ip1, Ip2, Ip3;

    printf("Input[1] :\n");
    scanf("%d", &Ip1);
    printf("Input[2] :\n");
    scanf("%d", &Ip2);
    printf("Input[3] :\n");
    scanf("%d", &Ip3);

    printf("Output:\n");

    for (int i; i <= 3; i++)
    {
        if (Ip1 > Ip2 || Ip1 > Ip3)
        {
            if (Ip2 > Ip3)
            {
                printf("%d %d %d", Ip1, Ip2 ,Ip3);
            }
            
            if(Ip3 > Ip2 ){
                printf("%d %d %d", Ip1, Ip3 ,Ip2);
            }
            break;
        }
        if (Ip2 > Ip1 || Ip2 > Ip3)
        {
            if (Ip1 > Ip3)
            {
                printf("%d %d %d", Ip2, Ip1 ,Ip3);
            }
            
            if(Ip3 > Ip1 ){
                printf("%d %d %d", Ip2, Ip3 ,Ip1);
            }
            break;
        }
        
        if (Ip3 > Ip1 && Ip3 > Ip2)
        {
            if (Ip2 > Ip1)
            {
                printf("%d %d %d", Ip3, Ip2 ,Ip1);
            }
            
            if(Ip1 > Ip2 ){
                printf("%d %d %d", Ip3, Ip1 ,Ip2);
            }
            break;
        
        }
    }
    return 0;
}