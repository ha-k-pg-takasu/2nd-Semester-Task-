#include <stdio.h>
#include <stdlib.h>
#include "player.h"
#include "enemy.h"

int main()
{
    Player player;
    player.SetMoveSpeed(5.0f);

    Enemy enemy;
    enemy.SetHp(100);

    printf("-------------\n");
    printf("PRACTICE02_04\n");
    printf("-------------\n");

    printf("Player Status\n");
    printf("hp = %d\n" , player.GetHp());
    printf("posx = %0.2f\n", player.GetPosx());
    printf("posy = %0.2f\n", player.GetPosy());
    printf("MoveSpeed = %0.2f\n", player.GetMoveSpeed());
    printf("\n");
    system("pause");
    return 0;
}
