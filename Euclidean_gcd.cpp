// Euclidean Algorith for calculating GCD

int Gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return Gcd (b, a % b);
}
