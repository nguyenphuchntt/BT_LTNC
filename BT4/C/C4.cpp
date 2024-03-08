// Dò mìn. Viết chương trình nhận input từ bàn phím gồm một cặp số m, n nguyên dương nhỏ hơn 10 và một bản đồ mìn dạng bảng, * nghĩa là có mìn, . là không có mìn, các kí tự cách nhau bởi 01 space. In ra màn hình một bảng m dòng n cột sao cho giá trị của mỗi ô là một dấu * nếu như ở đó có mìn, nếu không thì là một giá trị trong khoảng 0...8 là số mìn nằm trong các ô xung quanh. Ví dụ
// Sample Input
// Sample Output
// 3 5
// * * . . .
// . . . . .
// . * . . .


// * * 1 0 0
// 3 3 2 0 0
// 1 * 1 0 0

// Thảo luận: Thuật toán rất đơn giản, duyệt từng ô, với mỗi ô chỉ việc kiểm tra có mìn hay không và nếu không thì đếm số mìn xung quanh. Bài này chỉ phải nghĩ chút xíu về cách lưu trữ input. Bạn định dùng cách nào? m xâu kí tự? mảng char [m][n]? int [m][n]?... hãy chọn cách phù hợp nhất cho thuật toán mà bạn sẽ dùng.
#include <iostream>


int main(){
    int m, n; char tmp;
    std::cin >> m >> n;
    bool map[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            std::cin >> tmp;
            if (tmp == '.'){
                map[i][j] = false;
            }else {
                map[i][j] = true;
            }
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            int cnt = 0;
            if(!map[i][j]){
                if ((j < (n -1)) && map[i][j+1]){
                    cnt++;
                }if ((j > 0) && map[i][j-1]){
                    cnt++;
                }if ((i < (m -1)) && map[i+1][j]){
                    cnt++;
                }if ((i > 0) && map[i-1][j]){
                    cnt++;
                }if ((i > 0) && (j > 0) && map[i-1][j-1]){
                    cnt++;
                }if ((i > 0) && (j < (n -1)) && map[i-1][j+1]){
                    cnt++;
                }if ((i < (m -1)) && (j < (n -1)) &&  map[i+1][j+1]){
                    cnt++;
                }if ((i < (m -1)) && (j > 0) && map[i+1][j-1]){
                    cnt++;
                }
                std::cout << cnt << " ";          
            }else{
                std::cout << "* ";
            }
        }
        std::cout << std::endl;
    }
        

    return 0;
}