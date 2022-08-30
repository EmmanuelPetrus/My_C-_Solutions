#include "monoalpha.cpp"

int main()
{
    MonoAlpha monoalpha;
    monoalpha.encrypt("plainFile", "cipherFile");
    // monoalpha.decrypt("cipherFile", "plainFile");
    return 0;
}