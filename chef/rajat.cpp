#include < stdio.h > 
#include < stdlib.h >
    //sum of the matrix
    void sum(int * A, int * B, int * C, int n) {
        int i, j;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                C[i * n + j] = A[i * n + j] + B[i * n + j];
    }
    //subtraction
void subtract(int * A, int * B, int * C, int n) {
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            C[i * n + j] = A[i * n + j] - B[i * n + j];
    return;
}
int * dynAll(int n) {
    return (int * ) malloc(n * n * sizeof(int));
}

int makebase2(int a, int b, int c, int d) {
    int size = 1, k;

    if (a >= b && a >= c && a >= d)
        k = a;
    if (b >= a && b >= c && b >= d)
        k = b;
    if (c >= a && c >= b && c >= d)
        k = c;
    if (d >= a && d >= b && d >= c)
        k = d;

    while (size < k) {
        size = size * 2;

    }

    return size;
}

void print_mat(int * a, int row, int col) {

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)

            printf("%d\t", a[j * row + i]);

        printf("\n\n");
    }
}

int Strassen(int * A, int * B, int * C, int n) {
    int mid = n / 2;
    if (mid < 1) {
        C[0] = A[0] * B[0];
        return 1;
    }
    //four subarrays of A
    int * aA = dynAll(mid), * bA = dynAll(mid), * cA = dynAll(mid), * dA = dynAll(mid);
    //four subarrays of B
    int * eB = dynAll(mid), * fB = dynAll(mid), * gB = dynAll(mid), * hB = dynAll(mid);
    //four subarrays of B
    int * c1 = dynAll(mid), * c2 = dynAll(mid), * c3 = dynAll(mid), * c4 = dynAll(mid);
    //intermediate 7 calculations of Strassens'
    int * p1 = dynAll(mid), * p2 = dynAll(mid), * p3 = dynAll(mid), * p4 = dynAll(mid);
    int * p5 = dynAll(mid), * p6 = dynAll(mid), * p7 = dynAll(mid);
    //some intermediate results
    int * i1 = dynAll(mid), * i2 = dynAll(mid);
    //allocating subarrays of A & B
    int i, j;
    for (i = 0; i < mid; i++) {
        for (j = 0; j < mid; j++) {
            aA[i * mid + j] = A[i * n + j];
            bA[i * mid + j] = A[i * n + j + mid];
            cA[i * mid + j] = A[(i + mid) * n + j];
            dA[i * mid + j] = A[(i + mid) * n + j + mid];
            eB[i * mid + j] = B[i * n + j];
            fB[i * mid + j] = B[i * n + j + mid];
            gB[i * mid + j] = B[(i + mid) * n + j];
            hB[i * mid + j] = B[(i + mid) * n + j + mid];
        }
    }
    sum(aA, dA, i1, mid);
    sum(eB, hB, i2, mid);
    Strassen(i1, i2, p1, mid); //p1 = (a+d) * (e+h)
    sum(cA, dA, i1, mid);
    Strassen(i1, eB, p2, mid); //p2 = (c+d) * e
    subtract(fB, hB, i1, mid);
    Strassen(aA, i1, p3, mid); //p3 = a * (f-h)
    subtract(gB, eB, i1, mid);
    Strassen(dA, i1, p4, mid); //p4 = d * (g-e)
    sum(aA, bA, i1, mid);
    Strassen(i1, hB, p5, mid); //p5 = (a+b) * h
    subtract(cA, aA, i1, mid);
    sum(eB, fB, i2, mid);
    Strassen(i1, i2, p6, mid); //p6 = (c-a) * (e+f)
    subtract(bA, dA, i1, mid);
    sum(gB, hB, i2, mid);
    Strassen(i1, i2, p7, mid); //p7 = (b-d) * (g+h)
    sum(p3, p5, c2, mid); //c2 = p3 + p5
    sum(p2, p4, c3, mid); //c3 = p2 + p4
    sum(p1, p4, i1, mid);
    sum(i1, p7, i2, mid);
    subtract(i2, p5, c1, mid); //c1 = p1 + p4 - p5 + p7
    sum(p1, p3, i1, mid);
    sum(i1, p6, i2, mid);
    subtract(i2, p2, c4, mid); //c4 = p1 - p2 + p3 + p6
    for (i = 0; i < mid; i++) {
        for (j = 0; j < mid; j++) {
            C[i * n + j] = c1[i * mid + j];
            C[i * n + j + mid] = c2[i * mid + j];
            C[(i + mid) * n + j] = c3[i * mid + j];
            C[(i + mid) * n + j + mid] = c4[i * mid + j];
        }
    }
    return 1;
}
void main() {

    int row1, row2, col1, col2;
    printf("Enter the matrix row and coloumn..");
    scanf("%d %d", & row1, & col1);
    printf("Enter the matrix row and coloumn..");

    scanf("%d %d", & row2, & col2);

    if (col1 != row2)
        printf("multiplication not possible.....");
    else {

        int size = makebase2(row1, row2, col1, col2); //make base 2
        //int a[4][4],b[4][4],c[4][4];
        int * a = (int * ) malloc(size * size * sizeof(int));
        int * b = (int * ) malloc(size * size * sizeof(int));
        int * c = (int * ) malloc(size * size * sizeof(int));

        printf("size=%d", size);
        printf("\nenter the value of the 1st matrix\n");
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++)

                a[j * size + i] = 0;

        }
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col1; j++)

                scanf("%d", & a[i * size + j]);

        }

        print_mat(a, row1, col1);
        printf("\nenter the value of the 2nd matrix\n");

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++)

                b[j * size + i] = 0;

        }
        for (int i = 0; i < row2; i++) {
            for (int j = 0; j < col2; j++)

                scanf("%d", & b[i * size + j]);

        }

        print_mat(b, row2, col2);
        Strassen(a, b, c, size);
        printf("\n\nAns=");
        print_mat(c, col1, row1);
    }

}