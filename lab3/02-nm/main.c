int global_var = 696969;

const int const_var = 3;
static const int static_const_var = 3;

int uninitialised_var;
static int static_uninitialised_var;

int sum(int, int);

int main() { printf("%d\n", sum(3, 4)); }