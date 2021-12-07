#include "FazzyNumber.h"

struct FazzyNumber del(const FazzyNumber A, const FazzyNumber B){
    struct FazzyNumber f;
    f.a = A.a/B.a;
    f.b = (A.a*B.b + B.a*A.c)/(B.a*B.a);
    f.c = (A.a*B.c + B.a*A.b)/(B.a*B.a);
    return f;
}
