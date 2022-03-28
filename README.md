# Solved-With-C
Ky Thuat Lap Trinh C - Gs.Pham Van At
BT Chương 6

Giả sử có hệ phương trình 
{
  2x + y - z = 3
  x - y + 2z = -4
  3x - 2y + z = -1
}
B1: ma trận a[i][j] có dạng 
[                                     [
  a[0][0] a[0][1]...a[0][j]             2   1   -1
  a[1][0] a[1][1]...a[1][j]       =     1   -1    2
  .........................             3   -2    1
  a[i][0] a[i][1]...a[i][j]                         ]
]                                                         
B2: tạp ma trận liên kết có dạng a[i][j]|b[i] có dạng như sau:

[                                     [
  a[0][0] a[0][1]...a[0][j]   b[0]      2   1   -1    3
  a[1][0] a[1][1]...a[1][j]   b[1]   =  1   -1   2   -4
  ................................      3   -2   1    -1
  a[i][0] a[i][1]...a[i][j]   b[i]                      ]
]
Giải thuật Gauss
* Nếu a[i][j] = 0, tiếp tục tìm đến vị trí tiếp theo
* 
