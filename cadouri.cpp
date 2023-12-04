#include <fstream>
using namespace std;
int main()
{
    ifstream f("cadouri.in");
    int F, B, N;
    f >> F >> B >> N;
    int cb = 0, cf = 0;
    while (N > 0)
    {
        int x;
        f >> x;
        if (x%2) cb++;
        else cf++;
        N--;
    }
    f.close();
    cf = cf >= F ? 0 : F-cf;
    cb = cb >= B ? 0 : B-cb;
    ofstream g("cadouri.out");
    g << cf << '\n' << cb;
    g.close();
    return 0;
}
