#include <stdio.h>
#include <stdint.h>

int32_t main(void) {
  int n;
  scanf("%d", &n);
  int fill, can_accomodate;
  int available_rooms = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d%d", &fill, &can_accomodate);
    available_rooms += (can_accomodate >= fill + 2);
  }

  printf("%d", available_rooms);

  return 0;
}
