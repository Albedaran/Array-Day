#include <iostream>

int main() {
    /*
    std::cout << "Array Day starting in 3..2..1.." << std::endl;
    int mynumbahs[4] = {1, 2, 3, 4};
    std::cout << "The second element is: " << mynumbahs[1] << std::endl;

    for (int i = 0; i < sizeof(mynumbahs)/ sizeof(mynumbahs[0]); ++i) {
    std::cout << mynumbahs[i] << std::endl;
    } */

    //THIRD
    /* int q[4] {4, 5, 6, 7};
    std::cout << q[2] << std::endl; */

    //COMPARE LENGTH (LËL WHAT?)
    /*
    int p1[3] {1, 2, 3};
    int p2[2] {4, 5};
    if (p2[2]>p1[3]) {
        std::cout << "p2 is longer" << std::endl;
    } */

    //SUM ELEMENTS
    /*
    int r[4] {54, 23, 66, 12};
    int sum = r[1]+r[2];
    std::cout << sum << std::endl;
     */

    //CHANGE ELEMENT
    /*
    int s[6] {1, 2, 3, 8, 5, 6};
    s[3]=4;
    std::cout << s[3] << std::endl;
    */

    //Increment element
    /*
    int t[5] {1, 2, 3, 4, 5};
    t[2]++;
    std::cout << t[2] << std::endl;
    */

    //PRINT ALL
    /*
    int numbers[4] {4, 5, 6, 7};
    for (int i = 0; i < sizeof(numbers)/ sizeof(numbers[0]); ++i) {
        std::cout << numbers[i] << std::endl;
    } */

    //MATRIX
    //Eredeti
    /*
    int x, y;
    std::cout << "Put in the amount of rows and columns:";
    std::cout << std::endl;
    std::cin >> x;
    std::cin >> y;
    int a[2][2] = {{1, 0}, {0, 1}};
    int huan = a[0][0];
    int twu = a[0][1];
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            if (i==j) {
                std::cout << huan;
            } else {
                std::cout << twu;
            }
        } std::cout << std:: endl;
    } */
    //Javított
    /*
    int x, y;
    std::cout << "Put in the amount of rows and columns:";
    std::cout << std::endl;
    std::cin >> x;
    std::cin >> y;
    int mat[x][y];
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            if (i==j) {
                mat[i][j]=1;
                std::cout << mat[i][j];
            } else {
                mat[i][j]=0;
                std::cout << mat[i][j];
            }
        }
        std::cout << std:: endl;
    } */

    //DOUBLE ITEMS
    /*
    int numlist[5] = {3, 4, 5, 6, 7};
    for (int i = 0; i < sizeof(numlist)/ sizeof(numlist[0]); ++i) {
        numlist[i]=numlist[i]*2;
        std::cout << numlist[i] << std::endl;
    }
    */

    //COLORS
    /*
    std::string colorarray[3][5] = {
            {"lime", " forest green", " olive", " pale green", " spring green"},
            {"orange red", " red", " tomato"},
            {"orchid", " violet", " pink", " hot pink"}
    };
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cout << colorarray[i][j];
        } std::cout << std::endl;
    }
    */

    //APPEND A
    /*
    std::string animals[3] = {"koal", "pand", "zebr"};
    for (int i = 0; i < 3; ++i) {
        std::cout << animals[i] << "a" << std::endl;
    }
    */

    //SWAP ELEMENT
    /*
    std::string abc[3] = {"first", "second", "third"};
    swap(abc[0], abc[2]);
    for (int i = 0; i < 3; ++i) {
        std::cout << abc[i] << std::endl;
    }
    */

    //SUM ALL
    /*
    int ai[5] = {3, 4, 5, 6, 7};
    int sum;
    for (int i = 0; i < 5; ++i) {
        sum=sum+ai[i];
    }
    std::cout << sum << std::endl;
    */

    //REVERSE
    int aj[5] = {3, 4, 5, 6, 7};
    int small, big, switchy;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < ; ++j) {
    }
        std::cout << aj[i] << "";
        std::cout << std::endl;
    }
    return 0;

}