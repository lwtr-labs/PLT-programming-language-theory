#include <stdio.h>

struct Q {
    int a[1000];
    int f;
    int b;
};

void RQ(struct Q* q) {
    q->f = 0;
    q->b = 0;
}

void Pu(struct Q* q, int x) {
    q->a[q->b++] = x;
}

int P(struct Q* q) {
    return q->a[++q->f];
}

int main(void) {
    int i1;
    scanf("%d", &i1);

    struct Q q;

    int n, m, i2, p, M;
    int r = 0, x = 0;

    for (int i = 0; i < i1; i++) {
        RQ(&q);
        scanf(" %d %d", &n, &m);
        
        for (int j = 0; j < n; j++) {
            scanf(" %d", &i2);
            Pu(&q, i2);
        }

        while (!x) {
            M = 0;
            for (int k = q.f; k < q.b; k++)
                M = q.a[k] > M ? q.a[k] : M;
            
            if (m == q.f) {
                if (M <= q.a[m]) {
                    r += 1;
                    x = 1;
                } else {
                    p = P(&q);
                    Pu(&q, p);
                    m = q.b - 1;
                }
            } else {
                p = P(&q);
                if (p < M) {
                    Pu(&q, p);
                } else {
                    r += 1;
                }
            }

            if (x) {
                printf("%d\n", r);

                r = 0;
                x = 0;

                break;
            }
        }
        
    }
}